
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef unsigned int int16_t ;
typedef int SwsContext ;



void FUNC_0(SwsContext *VAR_0, int16_t *VAR_1, int16_t *VAR_2,
                           int VAR_3, const uint8_t *VAR_4,
                           const uint8_t *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;
    unsigned int VAR_9 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        register unsigned int VAR_10 = VAR_9 >> 16;
        register unsigned int VAR_11 = (VAR_9 & 0xFFFF) >> 9;
        VAR_1[VAR_8] = (VAR_4[VAR_10] * (VAR_11 ^ 127) + VAR_4[VAR_10 + 1] * VAR_11);
        VAR_2[VAR_8] = (VAR_5[VAR_10] * (VAR_11 ^ 127) + VAR_5[VAR_10 + 1] * VAR_11);
        VAR_9 += VAR_7;
    }
    for (VAR_8=VAR_3-1; (VAR_8*VAR_7)>>16 >=VAR_6-1; VAR_8--) {
        VAR_1[VAR_8] = VAR_4[VAR_6-1]*128;
        VAR_2[VAR_8] = VAR_5[VAR_6-1]*128;
    }
}
