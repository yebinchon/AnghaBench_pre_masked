
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(const float *VAR_0, float VAR_1, int VAR_2)
{
    int VAR_3;
    float VAR_4 = 0.5f;
    float VAR_5 = 0.5f;
    float VAR_6 = 2.0f * VAR_1;

    for (VAR_3 = 0; VAR_3 + 1 < VAR_2; VAR_3 += 2 * 2) {

        VAR_5 *= VAR_0[VAR_3] - VAR_6;
        VAR_4 *= VAR_0[VAR_3 + 1] - VAR_6;

        VAR_5 *= VAR_0[VAR_3 + 2] - VAR_6;
        VAR_4 *= VAR_0[VAR_3 + 3] - VAR_6;
    }

    VAR_4 *= VAR_4 * (2.0f - VAR_6);
    VAR_5 *= VAR_5 * (2.0f + VAR_6);

    return 0.5 / (VAR_4 + VAR_5);
}
