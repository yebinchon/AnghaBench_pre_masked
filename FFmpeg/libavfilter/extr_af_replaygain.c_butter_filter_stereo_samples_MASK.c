
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* butter_coeff_a; double* butter_coeff_b; float* butter_hist_a; float* butter_hist_b; int butter_hist_i; } ;
typedef TYPE_1__ ReplayGainContext ;


 int FUNC_0 (float) ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (float*,int ,int) ;

__attribute__((used)) static void FUNC_3(ReplayGainContext *VAR_0,
                                         float *VAR_1, int VAR_2)
{
    const double *VAR_3 = VAR_0->butter_coeff_a;
    const double *VAR_4 = VAR_0->butter_coeff_b;
    float *VAR_5 = VAR_0->butter_hist_a;
    float *VAR_6 = VAR_0->butter_hist_b;
    double VAR_7, VAR_8;
    int VAR_9, VAR_10;

    VAR_9 = VAR_0->butter_hist_i;





    for (VAR_10 = -4; VAR_10 < 0; ++VAR_10)
        if (FUNC_0(VAR_5[VAR_9 + VAR_10]) > 1e-10 || FUNC_0(VAR_6[VAR_9 + VAR_10]) > 1e-10)
            break;

    if (!VAR_10) {
        FUNC_2(VAR_0->butter_hist_a, 0, sizeof(VAR_0->butter_hist_a));
        FUNC_2(VAR_0->butter_hist_b, 0, sizeof(VAR_0->butter_hist_b));
    }

    while (VAR_2--) {
        VAR_7 = (VAR_6[VAR_9 ] = VAR_1[0]) * VAR_4[0];
        VAR_8 = (VAR_6[VAR_9 + 1] = VAR_1[1]) * VAR_4[0];
        VAR_7 += VAR_6[VAR_9 - 2] * VAR_4[1] - VAR_5[VAR_9 - 2] * VAR_3[1];
        VAR_8 += VAR_6[VAR_9 - 1] * VAR_4[1] - VAR_5[VAR_9 - 1] * VAR_3[1];
        VAR_7 += VAR_6[VAR_9 - 4] * VAR_4[2] - VAR_5[VAR_9 - 4] * VAR_3[2];
        VAR_8 += VAR_6[VAR_9 - 3] * VAR_4[2] - VAR_5[VAR_9 - 3] * VAR_3[2];
        VAR_1[0] = VAR_5[VAR_9 ] = (float) VAR_7;
        VAR_1[1] = VAR_5[VAR_9 + 1] = (float) VAR_8;
        VAR_1 += 2;

        if ((VAR_9 += 2) == 256) {
            FUNC_1(VAR_5, VAR_5 + 252, sizeof(*VAR_5) * 4);
            FUNC_1(VAR_6, VAR_6 + 252, sizeof(*VAR_6) * 4);
            VAR_9 = 4;
        }
    }

    VAR_0->butter_hist_i = VAR_9;
}
