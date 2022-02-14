
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



void FUNC_0(uint16_t *VAR_0, uint16_t *VAR_1, const uint16_t *VAR_2, const uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        VAR_7 = VAR_2[VAR_6] + VAR_3[2 * VAR_6] + VAR_3[2 * VAR_6 + 1] + VAR_3[2 * VAR_6 + VAR_4] + VAR_3[2 * VAR_6 + 1 + VAR_4];
        VAR_8 = VAR_1[VAR_6];
        VAR_1[VAR_6] = VAR_7;
        VAR_0[VAR_6] = VAR_7 - VAR_8;
    }
}
