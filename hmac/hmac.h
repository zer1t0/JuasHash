#pragma once

#include <Windows.h>
#include "md5.h"

typedef DWORD(*hashFunction)(PBYTE, DWORD64, PBYTE*);

DWORD hmac(PBYTE key, DWORD64 keyLen, PBYTE message, DWORD64 messageLen, hashFunction hashFunc, USHORT blockSize, USHORT digestSize, PBYTE *digest);