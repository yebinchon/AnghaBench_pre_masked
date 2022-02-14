
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, float VAR_1, float VAR_2, int VAR_3)
{
    int VAR_4;
    float VAR_5 = (VAR_1 - VAR_2) / (VAR_3 + 1);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_2 += VAR_5;
        VAR_0[VAR_4] = VAR_2;
    }
}
