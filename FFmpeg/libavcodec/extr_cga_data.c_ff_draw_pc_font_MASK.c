
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



void FUNC_0(uint8_t *VAR_0, int VAR_1, const uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        for (VAR_8 = 0x80; VAR_8; VAR_8 >>= 1) {
            *VAR_0++ = VAR_2[VAR_4 * VAR_3 + VAR_7] & VAR_8 ? VAR_5 : VAR_6;
        }
        VAR_0 += VAR_1 - 8;
    }
}
