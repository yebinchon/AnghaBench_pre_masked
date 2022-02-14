
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, const float *VAR_1,
                                              const float VAR_2[2],
                                              const float VAR_3[2],
                                              float VAR_4, float VAR_5[2], int VAR_6)
{
    int VAR_7;
    float VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        VAR_8 = VAR_4 * VAR_1[VAR_7] - VAR_3[0] * VAR_5[0] - VAR_3[1] * VAR_5[1];
        VAR_0[VAR_7] = VAR_8 + VAR_2[0] * VAR_5[0] + VAR_2[1] * VAR_5[1];

        VAR_5[1] = VAR_5[0];
        VAR_5[0] = VAR_8;
    }
}
