
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VagueDenoiserContext ;


 int VAR_0 ;
 int FUNC_0 (float*,float const*,int const) ;
 int FUNC_1 (float*,int ,int) ;
 int FUNC_2 (float*,int const,int,int) ;
 float* VAR_1 ;
 float* VAR_2 ;

__attribute__((used)) static void FUNC_3(const float *VAR_3, float *VAR_4, float *VAR_5, const int VAR_6, VagueDenoiserContext *VAR_7)
{
    const int VAR_8 = (VAR_6 + 1) >> 1;
    const int VAR_9 = VAR_6 >> 1;
    int VAR_10 = 1, VAR_11, VAR_12;
    int VAR_13;

    FUNC_0(VAR_5 + VAR_0, VAR_3 + VAR_0, VAR_8 * sizeof(float));

    VAR_11 = (VAR_6 % 2 == 0) ? 2 : 1;
    FUNC_2(VAR_5, VAR_8, VAR_10, VAR_11);

    FUNC_1(VAR_4, 0, (VAR_0 + VAR_0 + VAR_6) * sizeof(float));
    VAR_13 = (VAR_6 + 2) >> 1;

    for (VAR_12 = 9; VAR_12 < VAR_13 + 11; VAR_12++) {
        const float VAR_14 = VAR_5[VAR_12] * VAR_2[0];
        const float VAR_15 = VAR_5[VAR_12] * VAR_2[1];
        const float VAR_16 = VAR_5[VAR_12] * VAR_2[2];
        const float VAR_17 = VAR_5[VAR_12] * VAR_2[3];

        VAR_4[2 * VAR_12 - 13] += VAR_14;
        VAR_4[2 * VAR_12 - 12] += VAR_15;
        VAR_4[2 * VAR_12 - 11] += VAR_16;
        VAR_4[2 * VAR_12 - 10] += VAR_17;
        VAR_4[2 * VAR_12 - 9] += VAR_16;
        VAR_4[2 * VAR_12 - 8] += VAR_15;
        VAR_4[2 * VAR_12 - 7] += VAR_14;
    }

    FUNC_0(VAR_5 + VAR_0, VAR_3 + VAR_0 + VAR_8, VAR_9 * sizeof(float));

    VAR_10 = 2;
    VAR_11 = (VAR_6 % 2 == 0) ? 1 : 2;
    FUNC_2(VAR_5, VAR_9, VAR_10, VAR_11);

    for (VAR_12 = 8; VAR_12 < VAR_13 + 11; VAR_12++) {
        const float VAR_18 = VAR_5[VAR_12] * VAR_1[0];
        const float VAR_19 = VAR_5[VAR_12] * VAR_1[1];
        const float VAR_20 = VAR_5[VAR_12] * VAR_1[2];
        const float VAR_21 = VAR_5[VAR_12] * VAR_1[3];
        const float VAR_22 = VAR_5[VAR_12] * VAR_1[4];

        VAR_4[2 * VAR_12 - 13] += VAR_18;
        VAR_4[2 * VAR_12 - 12] += VAR_19;
        VAR_4[2 * VAR_12 - 11] += VAR_20;
        VAR_4[2 * VAR_12 - 10] += VAR_21;
        VAR_4[2 * VAR_12 - 9] += VAR_22;
        VAR_4[2 * VAR_12 - 8] += VAR_21;
        VAR_4[2 * VAR_12 - 7] += VAR_20;
        VAR_4[2 * VAR_12 - 6] += VAR_19;
        VAR_4[2 * VAR_12 - 5] += VAR_18;
    }
}
