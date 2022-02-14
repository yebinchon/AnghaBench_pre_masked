
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VagueDenoiserContext ;


 int const VAR_0 ;
 float* VAR_1 ;
 float* VAR_2 ;
 int FUNC_0 (float*,int const,int,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_3, float *VAR_4, const int VAR_5, const int VAR_6, VagueDenoiserContext *VAR_7)
{
    int VAR_8;

    FUNC_0(VAR_3, VAR_5, 1, 1);

    for (VAR_8 = VAR_0; VAR_8 < VAR_0 + VAR_6; VAR_8++) {
        const float VAR_9 = VAR_3[2 * VAR_8 - 14] * VAR_2[0];
        const float VAR_10 = VAR_3[2 * VAR_8 - 13] * VAR_2[1];
        const float VAR_11 = VAR_3[2 * VAR_8 - 12] * VAR_2[2];
        const float VAR_12 = VAR_3[2 * VAR_8 - 11] * VAR_2[3];
        const float VAR_13 = VAR_3[2 * VAR_8 - 10] * VAR_2[4];
        const float VAR_14 = VAR_3[2 * VAR_8 - 9] * VAR_2[3];
        const float VAR_15 = VAR_3[2 * VAR_8 - 8] * VAR_2[2];
        const float VAR_16 = VAR_3[2 * VAR_8 - 7] * VAR_2[1];
        const float VAR_17 = VAR_3[2 * VAR_8 - 6] * VAR_2[0];

        VAR_4[VAR_8] = VAR_9 + VAR_10 + VAR_11 + VAR_12 + VAR_13 + VAR_14 + VAR_15 + VAR_16 + VAR_17;
    }

    for (VAR_8 = VAR_0; VAR_8 < VAR_0 + VAR_6; VAR_8++) {
        const float VAR_18 = VAR_3[2 * VAR_8 - 12] * VAR_1[0];
        const float VAR_19 = VAR_3[2 * VAR_8 - 11] * VAR_1[1];
        const float VAR_20 = VAR_3[2 * VAR_8 - 10] * VAR_1[2];
        const float VAR_21 = VAR_3[2 * VAR_8 - 9] * VAR_1[3];
        const float VAR_22 = VAR_3[2 * VAR_8 - 8] * VAR_1[2];
        const float VAR_23 = VAR_3[2 * VAR_8 - 7] * VAR_1[1];
        const float VAR_24 = VAR_3[2 * VAR_8 - 6] * VAR_1[0];

        VAR_4[VAR_8 + VAR_6] = VAR_18 + VAR_19 + VAR_20 + VAR_21 + VAR_22 + VAR_23 + VAR_24;
    }
}
