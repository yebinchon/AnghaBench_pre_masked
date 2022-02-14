
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int fixed_vector ;
struct TYPE_10__ {void* pitch_lag; int pitch_fac; } ;
struct TYPE_9__ {float* synth_buf; float* excitation; float* lsp_history_16k; float* synth; double* energy_history; float* iir_mem; int mem_preemph; int filt_mem; void* pitch_lag_prev; int lsf_history; } ;
struct TYPE_8__ {size_t* gp_index; size_t* gc_index; int * fc_indexes; int * pitch_delay; int ma_pred_switch; int vq_indexes; } ;
typedef TYPE_1__ SiprParameters ;
typedef TYPE_2__ SiprContext ;
typedef TYPE_3__ AMRFixed ;


 void* FUNC_0 (int) ;
 int FUNC_1 (float,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 float FUNC_2 (int ,float*,double,int ,double*,int,int) ;
 int FUNC_3 (float*,float*,double*,float*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,void*) ;
 int FUNC_6 (float*,float*,int ,int,int,int ,int) ;
 int FUNC_7 (float*,float*,float*,int,int) ;
 int FUNC_8 (int ,TYPE_3__*,int ,int,int) ;
 int VAR_10 ;
 int FUNC_9 (float*,TYPE_3__*,double,int) ;
 int FUNC_10 (float*,int,int) ;
 int FUNC_11 (float*,float*,float*,float,float,int) ;
 float* VAR_11 ;
 float* VAR_12 ;
 double FUNC_12 (float) ;
 int FUNC_13 (float*,double*) ;
 int FUNC_14 (int ,float*,int ,int ) ;
 int FUNC_15 (float*,...) ;
 int FUNC_16 (float*,float*,int) ;
 int FUNC_17 (float*,int ,int) ;
 int FUNC_18 (float*,float*,float*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (int) ;

void FUNC_20(SiprContext *VAR_15, SiprParameters *VAR_16,
                              float *VAR_17)
{
    int VAR_18 = VAR_9 * VAR_4;
    float *VAR_19 = VAR_15->synth_buf + VAR_1;
    float VAR_20[VAR_1];
    double VAR_21[VAR_1];
    float VAR_22[2][VAR_1];
    float VAR_23[VAR_4];
    float VAR_24, VAR_25;

    int VAR_26;
    int VAR_27;

    float *VAR_28 = VAR_15->excitation + 292;

    FUNC_14(VAR_15->lsf_history, VAR_20, VAR_16->vq_indexes,
                      VAR_16->ma_pred_switch);

    FUNC_10(VAR_20, VAR_2 / 2, VAR_1);

    FUNC_13(VAR_20, VAR_21);

    FUNC_3(VAR_22[0], VAR_22[1], VAR_21, VAR_15->lsp_history_16k);

    FUNC_15(VAR_15->lsp_history_16k, VAR_21, VAR_1 * sizeof(double));

    FUNC_15(VAR_19 - VAR_1, VAR_15->synth,
           VAR_1 * sizeof(*VAR_19));

    for (VAR_26 = 0; VAR_26 < VAR_9; VAR_26++) {
        int VAR_29 = VAR_26 * VAR_4;
        AMRFixed VAR_30;
        float VAR_31;
        int VAR_32;
        int VAR_33;

        if (!VAR_26) {
            VAR_27 = FUNC_4(VAR_16->pitch_delay[VAR_26]);
        } else
            VAR_27 = FUNC_5(VAR_16->pitch_delay[VAR_26],
                                            VAR_8, VAR_7,
                                            VAR_15->pitch_lag_prev);

        VAR_24 = VAR_12[VAR_16->gp_index[VAR_26]];
        VAR_30.pitch_fac = FUNC_1(VAR_24, 1.0);
        VAR_30.pitch_lag = FUNC_0(VAR_27+1);
        VAR_15->pitch_lag_prev = VAR_30.pitch_lag;

        VAR_32 = FUNC_0(VAR_27 + 2);
        VAR_33 = VAR_27 + 2 - 3*VAR_32;

        FUNC_6(&VAR_28[VAR_29],
                              &VAR_28[VAR_29] - VAR_32 + 1,
                              VAR_14, 3, VAR_33 + 1,
                              VAR_0, VAR_4);


        FUNC_17(VAR_23, 0, sizeof(VAR_23));

        FUNC_8(VAR_16->fc_indexes[VAR_26], &VAR_30,
                                   VAR_10, 5, 4);

        FUNC_9(VAR_23, &VAR_30, 1.0, VAR_4);

        VAR_31 = VAR_11[VAR_16->gc_index[VAR_26]];
        VAR_25 = VAR_31 *
            FUNC_2(FUNC_19(VAR_4), VAR_23,
                                    19.0 - 15.0/(0.05*VAR_5/VAR_6),
                                    VAR_13, VAR_15->energy_history,
                                    VAR_4, 2);

        VAR_15->energy_history[1] = VAR_15->energy_history[0];
        VAR_15->energy_history[0] = 20.0 * FUNC_12(VAR_31);

        FUNC_11(&VAR_28[VAR_29], &VAR_28[VAR_29],
                                VAR_23, VAR_24,
                                VAR_25, VAR_4);

        FUNC_7(VAR_19 + VAR_29, VAR_22[VAR_26],
                                     &VAR_28[VAR_29], VAR_4,
                                     VAR_1);

    }
    FUNC_15(VAR_15->synth, VAR_19 + VAR_18 - VAR_1,
           VAR_1 * sizeof(*VAR_19));

    FUNC_16(VAR_15->excitation, VAR_15->excitation + 2 * VAR_4,
            (VAR_3+VAR_7) * sizeof(float));

    FUNC_18(VAR_17, VAR_19, VAR_15->iir_mem, VAR_15->filt_mem, VAR_15->mem_preemph);

    FUNC_15(VAR_15->iir_mem, VAR_22[1], VAR_1 * sizeof(float));
}
