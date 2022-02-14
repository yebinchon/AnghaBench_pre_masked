
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, const float *VAR_1,
                           const float *VAR_2, int VAR_3,
                           int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        int VAR_9 = 0;
        float VAR_10 = 0;

        for (VAR_8 = 0; VAR_8 < VAR_5;) {
            VAR_10 += VAR_1[VAR_7 + VAR_8] * VAR_2[VAR_9 + VAR_4];
            VAR_9 += VAR_3;
            VAR_8++;
            VAR_10 += VAR_1[VAR_7 - VAR_8] * VAR_2[VAR_9 - VAR_4];
        }
        VAR_0[VAR_7] = VAR_10;
    }
}
