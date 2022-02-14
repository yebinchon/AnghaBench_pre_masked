
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;
typedef int int16_t ;



void FUNC_0(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2,
                           const uint8_t *VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_5 = 0; VAR_5 < 8; VAR_1 += VAR_2, VAR_0 += 8, VAR_5++)
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            VAR_1[VAR_4] = VAR_0[VAR_4];
}
