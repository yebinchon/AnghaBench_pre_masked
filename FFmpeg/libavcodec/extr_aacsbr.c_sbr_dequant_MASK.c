
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* n; int n_q; TYPE_1__* data; scalar_t__ bs_coupling; } ;
struct TYPE_4__ {int bs_num_env; size_t* bs_freq_res; int** env_facs_q; float** env_facs; int bs_num_noise; int** noise_facs_q; float** noise_facs; scalar_t__ bs_amp_res; } ;
typedef TYPE_2__ SpectralBandReplication ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*) ;
 double const FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(SpectralBandReplication *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7;
    static const double VAR_8[2] = {1, 128};
    if (VAR_4 == VAR_2 && VAR_3->bs_coupling) {
        int VAR_9 = VAR_3->data[0].bs_amp_res ? 12 : 24;
        for (VAR_6 = 1; VAR_6 <= VAR_3->data[0].bs_num_env; VAR_6++) {
            for (VAR_5 = 0; VAR_5 < VAR_3->n[VAR_3->data[0].bs_freq_res[VAR_6]]; VAR_5++) {
                float VAR_10, VAR_11, VAR_12;
                if (VAR_3->data[0].bs_amp_res) {
                    VAR_10 = FUNC_2(VAR_3->data[0].env_facs_q[VAR_6][VAR_5] + 7);
                    VAR_11 = FUNC_2(VAR_9 - VAR_3->data[1].env_facs_q[VAR_6][VAR_5]);
                }
                else {
                    VAR_10 = FUNC_2((VAR_3->data[0].env_facs_q[VAR_6][VAR_5]>>1) + 7) *
                            VAR_8[VAR_3->data[0].env_facs_q[VAR_6][VAR_5] & 1];
                    VAR_11 = FUNC_2((VAR_9 - VAR_3->data[1].env_facs_q[VAR_6][VAR_5])>>1) *
                            VAR_8[(VAR_9 - VAR_3->data[1].env_facs_q[VAR_6][VAR_5]) & 1];
                }
                if (VAR_10 > 1E20) {
                    FUNC_1(((void*)0), VAR_0, "envelope scalefactor overflow in dequant\n");
                    VAR_10 = 1;
                }
                VAR_12 = VAR_10 / (1.0f + VAR_11);
                VAR_3->data[0].env_facs[VAR_6][VAR_5] = VAR_12;
                VAR_3->data[1].env_facs[VAR_6][VAR_5] = VAR_12 * VAR_11;
            }
        }
        for (VAR_6 = 1; VAR_6 <= VAR_3->data[0].bs_num_noise; VAR_6++) {
            for (VAR_5 = 0; VAR_5 < VAR_3->n_q; VAR_5++) {
                float VAR_13 = FUNC_2(VAR_1 - VAR_3->data[0].noise_facs_q[VAR_6][VAR_5] + 1);
                float VAR_14 = FUNC_2(12 - VAR_3->data[1].noise_facs_q[VAR_6][VAR_5]);
                float VAR_15;
                FUNC_0(VAR_13 <= 1E20);
                VAR_15 = VAR_13 / (1.0f + VAR_14);
                VAR_3->data[0].noise_facs[VAR_6][VAR_5] = VAR_15;
                VAR_3->data[1].noise_facs[VAR_6][VAR_5] = VAR_15 * VAR_14;
            }
        }
    } else {
        for (VAR_7 = 0; VAR_7 < (VAR_4 == VAR_2) + 1; VAR_7++) {
            for (VAR_6 = 1; VAR_6 <= VAR_3->data[VAR_7].bs_num_env; VAR_6++)
                for (VAR_5 = 0; VAR_5 < VAR_3->n[VAR_3->data[VAR_7].bs_freq_res[VAR_6]]; VAR_5++){
                    if (VAR_3->data[VAR_7].bs_amp_res)
                        VAR_3->data[VAR_7].env_facs[VAR_6][VAR_5] = FUNC_2(VAR_3->data[VAR_7].env_facs_q[VAR_6][VAR_5] + 6);
                    else
                        VAR_3->data[VAR_7].env_facs[VAR_6][VAR_5] = FUNC_2((VAR_3->data[VAR_7].env_facs_q[VAR_6][VAR_5]>>1) + 6)
                                                       * VAR_8[VAR_3->data[VAR_7].env_facs_q[VAR_6][VAR_5] & 1];
                    if (VAR_3->data[VAR_7].env_facs[VAR_6][VAR_5] > 1E20) {
                        FUNC_1(((void*)0), VAR_0, "envelope scalefactor overflow in dequant\n");
                        VAR_3->data[VAR_7].env_facs[VAR_6][VAR_5] = 1;
                    }
                }

            for (VAR_6 = 1; VAR_6 <= VAR_3->data[VAR_7].bs_num_noise; VAR_6++)
                for (VAR_5 = 0; VAR_5 < VAR_3->n_q; VAR_5++)
                    VAR_3->data[VAR_7].noise_facs[VAR_6][VAR_5] =
                        FUNC_2(VAR_1 - VAR_3->data[VAR_7].noise_facs_q[VAR_6][VAR_5]);
        }
    }
}
