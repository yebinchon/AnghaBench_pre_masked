
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INTFLOAT ;



__attribute__((used)) static void FUNC_0(INTFLOAT *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 64; VAR_1++) {
        INTFLOAT VAR_2 = VAR_0[VAR_1] + VAR_0[VAR_1 + 64] + VAR_0[VAR_1 + 128] + VAR_0[VAR_1 + 192] + VAR_0[VAR_1 + 256];
        VAR_0[VAR_1] = VAR_2;
    }
}
