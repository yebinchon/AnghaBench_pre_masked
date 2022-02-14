
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int GetBitContext ;



 int FUNC_0 (int *,double*) ;
 int FUNC_1 (double*,int,int*,int const*,int,int ,double const*,double const*) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float*** VAR_3 ;
 float*** VAR_4 ;

__attribute__((used)) static void FUNC_3(GetBitContext *VAR_5,
                           double *VAR_6, const double *VAR_7,
                           double *VAR_8, double *VAR_9, int VAR_10)
{
    static const uint16_t VAR_11[3] = { 128, 128, 128 };
    static const double VAR_12[3] = {
        1.2232979501e-3, 1.4062241527e-3, 1.6114744851e-3
    };
    static const double VAR_13[3] = {
        128 * -5.5830e-2, 128 * -5.2908e-2, 128 * -5.4776e-2
    };
    const float (*VAR_14)[2][16] = VAR_10 ?
        VAR_4 : VAR_3;
    uint16_t VAR_15, VAR_16[3];
    int VAR_17;

    FUNC_0(VAR_5, VAR_6);

    VAR_15 = FUNC_2(VAR_5, 5);
    VAR_16[0] = FUNC_2(VAR_5, 7);
    VAR_16[1] = FUNC_2(VAR_5, 7);
    VAR_16[2] = FUNC_2(VAR_5, 7);

    for (VAR_17 = 0; VAR_17 < 16; VAR_17++) {
        double VAR_18 = VAR_7[VAR_17] - VAR_6[VAR_17];
        VAR_8[VAR_17] = VAR_14[VAR_15][0][VAR_17] * VAR_18 + VAR_6[VAR_17];
        VAR_8[16 + VAR_17] = VAR_14[VAR_15][1][VAR_17] * VAR_18 + VAR_6[VAR_17];
    }

    FUNC_1( VAR_9, 10, VAR_16, VAR_11, 1,
                 VAR_0, VAR_12, VAR_13);
    FUNC_1(&VAR_9[10], 10, &VAR_16[1], &VAR_11[1], 1,
                 VAR_1, &VAR_12[1], &VAR_13[1]);
    FUNC_1(&VAR_9[20], 12, &VAR_16[2], &VAR_11[2], 1,
                 VAR_2, &VAR_12[2], &VAR_13[2]);
}
