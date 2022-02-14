
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* yule_coeff_a; double* yule_coeff_b; float* yule_hist_a; float* yule_hist_b; int yule_hist_i; } ;
typedef TYPE_1__ ReplayGainContext ;


 int FUNC_0 (float) ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (float*,int ,int) ;

__attribute__((used)) static void FUNC_3(ReplayGainContext *VAR_0, const float *VAR_1,
                                       float *VAR_2, int VAR_3)
{
    const double *VAR_4 = VAR_0->yule_coeff_a;
    const double *VAR_5 = VAR_0->yule_coeff_b;
    float *VAR_6 = VAR_0->yule_hist_a;
    float *VAR_7 = VAR_0->yule_hist_b;
    double VAR_8, VAR_9;
    int VAR_10, VAR_11;

    VAR_10 = VAR_0->yule_hist_i;





    for (VAR_11 = -20; VAR_11 < 0; ++VAR_11)
        if (FUNC_0(VAR_6[VAR_10 + VAR_11]) > 1e-10 || FUNC_0(VAR_7[VAR_10 + VAR_11]) > 1e-10)
            break;

    if (!VAR_11) {
        FUNC_2(VAR_0->yule_hist_a, 0, sizeof(VAR_0->yule_hist_a));
        FUNC_2(VAR_0->yule_hist_b, 0, sizeof(VAR_0->yule_hist_b));
    }

    while (VAR_3--) {
        VAR_8 = (VAR_7[VAR_10] = VAR_1[0]) * VAR_5[0];
        VAR_9 = (VAR_7[VAR_10 + 1] = VAR_1[1]) * VAR_5[0];
        VAR_8 += VAR_7[VAR_10 - 2] * VAR_5[ 1] - VAR_6[VAR_10 - 2] * VAR_4[1 ];
        VAR_9 += VAR_7[VAR_10 - 1] * VAR_5[ 1] - VAR_6[VAR_10 - 1] * VAR_4[1 ];
        VAR_8 += VAR_7[VAR_10 - 4] * VAR_5[ 2] - VAR_6[VAR_10 - 4] * VAR_4[2 ];
        VAR_9 += VAR_7[VAR_10 - 3] * VAR_5[ 2] - VAR_6[VAR_10 - 3] * VAR_4[2 ];
        VAR_8 += VAR_7[VAR_10 - 6] * VAR_5[ 3] - VAR_6[VAR_10 - 6] * VAR_4[3 ];
        VAR_9 += VAR_7[VAR_10 - 5] * VAR_5[ 3] - VAR_6[VAR_10 - 5] * VAR_4[3 ];
        VAR_8 += VAR_7[VAR_10 - 8] * VAR_5[ 4] - VAR_6[VAR_10 - 8] * VAR_4[4 ];
        VAR_9 += VAR_7[VAR_10 - 7] * VAR_5[ 4] - VAR_6[VAR_10 - 7] * VAR_4[4 ];
        VAR_8 += VAR_7[VAR_10 - 10] * VAR_5[ 5] - VAR_6[VAR_10 - 10] * VAR_4[5 ];
        VAR_9 += VAR_7[VAR_10 - 9] * VAR_5[ 5] - VAR_6[VAR_10 - 9] * VAR_4[5 ];
        VAR_8 += VAR_7[VAR_10 - 12] * VAR_5[ 6] - VAR_6[VAR_10 - 12] * VAR_4[6 ];
        VAR_9 += VAR_7[VAR_10 - 11] * VAR_5[ 6] - VAR_6[VAR_10 - 11] * VAR_4[6 ];
        VAR_8 += VAR_7[VAR_10 - 14] * VAR_5[ 7] - VAR_6[VAR_10 - 14] * VAR_4[7 ];
        VAR_9 += VAR_7[VAR_10 - 13] * VAR_5[ 7] - VAR_6[VAR_10 - 13] * VAR_4[7 ];
        VAR_8 += VAR_7[VAR_10 - 16] * VAR_5[ 8] - VAR_6[VAR_10 - 16] * VAR_4[8 ];
        VAR_9 += VAR_7[VAR_10 - 15] * VAR_5[ 8] - VAR_6[VAR_10 - 15] * VAR_4[8 ];
        VAR_8 += VAR_7[VAR_10 - 18] * VAR_5[ 9] - VAR_6[VAR_10 - 18] * VAR_4[9 ];
        VAR_9 += VAR_7[VAR_10 - 17] * VAR_5[ 9] - VAR_6[VAR_10 - 17] * VAR_4[9 ];
        VAR_8 += VAR_7[VAR_10 - 20] * VAR_5[10] - VAR_6[VAR_10 - 20] * VAR_4[10];
        VAR_9 += VAR_7[VAR_10 - 19] * VAR_5[10] - VAR_6[VAR_10 - 19] * VAR_4[10];
        VAR_2[0] = VAR_6[VAR_10 ] = (float)VAR_8;
        VAR_2[1] = VAR_6[VAR_10 + 1] = (float)VAR_9;
        VAR_1 += 2;
        VAR_2 += 2;

        if ((VAR_10 += 2) == 256) {
            FUNC_1(VAR_6, VAR_6 + 236, sizeof(*VAR_6) * 20);
            FUNC_1(VAR_7, VAR_7 + 236, sizeof(*VAR_7) * 20);
            VAR_10 = 20;
        }
    }

    VAR_0->yule_hist_i = VAR_10;
}
