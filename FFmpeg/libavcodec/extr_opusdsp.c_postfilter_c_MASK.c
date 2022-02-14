
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, int VAR_1, float *VAR_2, int VAR_3)
{
    const float VAR_4 = VAR_2[0];
    const float VAR_5 = VAR_2[1];
    const float VAR_6 = VAR_2[2];

    float VAR_7 = VAR_0[-VAR_1 - 2];
    float VAR_8 = VAR_0[-VAR_1 - 1];
    float VAR_9 = VAR_0[-VAR_1 + 0];
    float VAR_10 = VAR_0[-VAR_1 + 1];

    for (int VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
        float VAR_12 = VAR_0[VAR_11 - VAR_1 + 2];
        VAR_0[VAR_11] += VAR_4 * VAR_9 +
                   VAR_5 * (VAR_10 + VAR_8) +
                   VAR_6 * (VAR_12 + VAR_7);
        VAR_7 = VAR_8;
        VAR_8 = VAR_9;
        VAR_9 = VAR_10;
        VAR_10 = VAR_12;
    }
}
