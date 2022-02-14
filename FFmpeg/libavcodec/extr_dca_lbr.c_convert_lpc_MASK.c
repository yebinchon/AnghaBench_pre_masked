
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float* VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, const int *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        float VAR_5 = VAR_0[VAR_2[VAR_3]];
        for (VAR_4 = 0; VAR_4 < (VAR_3 + 1) / 2; VAR_4++) {
            float VAR_6 = VAR_1[ VAR_4 ];
            float VAR_7 = VAR_1[VAR_3 - VAR_4 - 1];
            VAR_1[ VAR_4 ] = VAR_6 + VAR_5 * VAR_7;
            VAR_1[VAR_3 - VAR_4 - 1] = VAR_7 + VAR_5 * VAR_6;
        }
        VAR_1[VAR_3] = VAR_5;
    }
}
