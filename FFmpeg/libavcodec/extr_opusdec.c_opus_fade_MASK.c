
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0,
                      const float *VAR_1, const float *VAR_2,
                      const float *VAR_3, int VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_0[VAR_5] = VAR_2[VAR_5] * VAR_3[VAR_5] + VAR_1[VAR_5] * (1.0 - VAR_3[VAR_5]);
}
