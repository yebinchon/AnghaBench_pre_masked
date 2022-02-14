
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                        int VAR_4, int VAR_5, int VAR_6, int VAR_7, float VAR_8)
{
    VAR_4 -= VAR_7;
    VAR_5 -= VAR_7;

    if (VAR_4 < 0 || VAR_5 < 0 ||
        VAR_4 >= VAR_1 || VAR_5 >= VAR_2) return;
    VAR_0[VAR_5 + VAR_2*(VAR_4 + VAR_1*VAR_6)] += VAR_8;
}
