
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0, float *VAR_1, float VAR_2)
{
    int VAR_3;
    float VAR_4 = VAR_2 * 0.5;
    for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
        if (VAR_1[VAR_3] - VAR_1[VAR_3 - 1] < VAR_2) {
            float VAR_5 = (VAR_1[VAR_3] + VAR_1[VAR_3 - 1]) * 0.5;

            VAR_1[VAR_3 - 1] = VAR_5 - VAR_4;
            VAR_1[VAR_3] = VAR_5 + VAR_4;
        }
}
