
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float VAR_0[4],
                                             const float *VAR_1,
                                             const float *VAR_2,
                                             int VAR_3)
{
    int VAR_4;

    VAR_0[0] = VAR_0[1] = VAR_0[2] = VAR_0[3] = 0;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        float VAR_5 = VAR_1[VAR_4];
        float VAR_6 = VAR_2[VAR_4];
        float VAR_7 = VAR_5 + VAR_6;
        float VAR_8 = VAR_5 - VAR_6;
        VAR_0[0] += VAR_5 * VAR_5;
        VAR_0[1] += VAR_6 * VAR_6;
        VAR_0[2] += VAR_7 * VAR_7;
        VAR_0[3] += VAR_8 * VAR_8;
    }
}
