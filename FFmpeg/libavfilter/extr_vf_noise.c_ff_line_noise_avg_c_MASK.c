
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;



void FUNC_0(uint8_t *VAR_0, const uint8_t *VAR_1,
                         int VAR_2, const int8_t * const *VAR_3)
{
    int VAR_4;
    const int8_t *VAR_5 = (const int8_t*)VAR_1;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        const int VAR_6 = VAR_3[0][VAR_4] + VAR_3[1][VAR_4] + VAR_3[2][VAR_4];
        VAR_0[VAR_4] = VAR_5[VAR_4] + ((VAR_6 * VAR_5[VAR_4]) >> 7);
    }
}
