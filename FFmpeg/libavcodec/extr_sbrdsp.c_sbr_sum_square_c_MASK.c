
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float (*VAR_0)[2], int VAR_1)
{
    float VAR_2 = 0.0f, VAR_3 = 0.0f;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += 2)
    {
        VAR_2 += VAR_0[VAR_4 + 0][0] * VAR_0[VAR_4 + 0][0];
        VAR_3 += VAR_0[VAR_4 + 0][1] * VAR_0[VAR_4 + 0][1];
        VAR_2 += VAR_0[VAR_4 + 1][0] * VAR_0[VAR_4 + 1][0];
        VAR_3 += VAR_0[VAR_4 + 1][1] * VAR_0[VAR_4 + 1][1];
    }

    return VAR_2 + VAR_3;
}
