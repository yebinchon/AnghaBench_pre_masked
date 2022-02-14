
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;
typedef int SwsContext ;



void FUNC_0(SwsContext *VAR_0, int16_t *VAR_1, int VAR_2,
                           const uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    unsigned int VAR_7 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        register unsigned int VAR_8 = VAR_7 >> 16;
        register unsigned int VAR_9 = (VAR_7 & 0xFFFF) >> 9;
        VAR_1[VAR_6] = (VAR_3[VAR_8] << 7) + (VAR_3[VAR_8 + 1] - VAR_3[VAR_8]) * VAR_9;
        VAR_7 += VAR_5;
    }
    for (VAR_6=VAR_2-1; (VAR_6*VAR_5)>>16 >=VAR_4-1; VAR_6--)
        VAR_1[VAR_6] = VAR_3[VAR_4-1]*128;
}
