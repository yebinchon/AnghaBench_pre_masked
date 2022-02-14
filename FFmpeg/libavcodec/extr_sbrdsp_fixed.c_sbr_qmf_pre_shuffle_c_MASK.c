
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int *VAR_0)
{
    int VAR_1;
    VAR_0[64] = VAR_0[0];
    VAR_0[65] = VAR_0[1];
    for (VAR_1 = 1; VAR_1 < 32; VAR_1++) {
        VAR_0[64+2*VAR_1 ] = -VAR_0[64 - VAR_1];
        VAR_0[64+2*VAR_1+1] = VAR_0[ VAR_1 + 1];
    }
}
