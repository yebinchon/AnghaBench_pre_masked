
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, int VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        VAR_0[VAR_2] = -VAR_0[VAR_2];

    VAR_0[(VAR_1 - 1) / 2] += 1;
}
