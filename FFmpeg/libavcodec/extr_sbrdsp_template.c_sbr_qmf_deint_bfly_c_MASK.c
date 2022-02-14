
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INTFLOAT ;



__attribute__((used)) static void FUNC_0(INTFLOAT *VAR_0, const INTFLOAT *VAR_1, const INTFLOAT *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {




        VAR_0[ VAR_3] = VAR_1[VAR_3] - VAR_2[63 - VAR_3];
        VAR_0[127 - VAR_3] = VAR_1[VAR_3] + VAR_2[63 - VAR_3];

    }
}
