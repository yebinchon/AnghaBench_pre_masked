
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, const float *VAR_2,
                            const float *VAR_3, float *VAR_4, int VAR_5)
{
    float VAR_6;
    int VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        VAR_6 = VAR_2[VAR_7];

        for (VAR_8 = VAR_0 - 1; VAR_8 > 0; VAR_8--) {
            VAR_6 += VAR_3[VAR_8] * VAR_4[VAR_8];
            VAR_4[VAR_8] = VAR_4[VAR_8 - 1];
        }
        VAR_6 += VAR_3[0] * VAR_4[0];
        VAR_4[0] = VAR_2[VAR_7];
        VAR_1[VAR_7] = VAR_6;
    }
}
