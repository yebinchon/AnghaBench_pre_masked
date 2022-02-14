
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const float *VAR_1, const float *VAR_2,
                             float *VAR_3, int VAR_4, float *VAR_5)
{
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_5[VAR_6] = VAR_1[VAR_6];
        for (VAR_7 = VAR_0 - 1; VAR_7 > 0; VAR_7--) {
            VAR_5[VAR_6] -= VAR_2[VAR_7] * VAR_3[VAR_7];
            VAR_3[VAR_7] = VAR_3[VAR_7 - 1];
        }
        VAR_5[VAR_6] -= VAR_2[0] * VAR_3[0];
        VAR_3[0] = VAR_5[VAR_6];
    }
}
