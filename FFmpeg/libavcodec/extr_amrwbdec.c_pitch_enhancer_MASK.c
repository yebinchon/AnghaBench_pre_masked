
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, float VAR_2)
{
    int VAR_3;
    float VAR_4 = 0.125 * (1 + VAR_2);
    float VAR_5 = VAR_1[0];

    VAR_1[0] -= VAR_4 * VAR_1[1];

    for (VAR_3 = 1; VAR_3 < VAR_0 - 1; VAR_3++) {
        float VAR_6 = VAR_1[VAR_3];

        VAR_1[VAR_3] -= VAR_4 * (VAR_5 + VAR_1[VAR_3 + 1]);
        VAR_5 = VAR_6;
    }

    VAR_1[VAR_0 - 1] -= VAR_4 * VAR_5;
}
