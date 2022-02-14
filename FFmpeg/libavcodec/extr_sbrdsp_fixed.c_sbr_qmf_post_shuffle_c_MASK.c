
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0[32][2], const int *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
        VAR_0[VAR_2][0] = -VAR_1[63-VAR_2];
        VAR_0[VAR_2][1] = VAR_1[VAR_2];
    }
}
