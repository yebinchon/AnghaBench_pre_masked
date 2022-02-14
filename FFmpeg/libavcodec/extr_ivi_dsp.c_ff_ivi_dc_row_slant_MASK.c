
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int int32_t ;
typedef int int16_t ;



void FUNC_0(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    int16_t VAR_6;

    VAR_6 = (*VAR_0 + 1) >> 1;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        VAR_1[VAR_4] = VAR_6;

    VAR_1 += VAR_2;

    for (VAR_5 = 1; VAR_5 < VAR_3; VAR_1 += VAR_2, VAR_5++) {
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
            VAR_1[VAR_4] = 0;
    }
}
