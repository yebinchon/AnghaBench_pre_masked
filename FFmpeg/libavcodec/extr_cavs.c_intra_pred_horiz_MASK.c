
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, ptrdiff_t VAR_3)
{
    int VAR_4;
    uint64_t VAR_5;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        VAR_5 = VAR_2[VAR_4 + 1] * 0x0101010101010101ULL;
        *((uint64_t *)(VAR_0 + VAR_4 * VAR_3)) = VAR_5;
    }
}
