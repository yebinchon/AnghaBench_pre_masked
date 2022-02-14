
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_33__ {int (* dot_productf ) (int*,int*,int) ;} ;
struct TYPE_26__ {int (* acelp_apply_order_2_transfer_function ) (float*,float*,int ,int ,int ,int ,int) ;} ;
struct TYPE_31__ {int vad; TYPE_5__* subframe; int isp_id; } ;
struct TYPE_32__ {size_t fr_cur_mode; double* isf_cur; double** isp; int* fixed_vector; int* pitch_gain; int* fixed_gain; float tilt_coef; int* excitation; float* samples_up; float* samples_hb; int isf_past_final; int isp_sub4_past; int lpf_7_mem; int bpf_6_7_mem; int hpf_400_mem; TYPE_1__ acelpf_ctx; TYPE_8__ celpm_ctx; int hpf_31_mem; int demph_mem; int * samples_az; int * lp_coef; int prev_tr_gain; int pitch_vector; int prediction_error; scalar_t__ first_frame; int isf_q_past; TYPE_6__ frame; int fr_quality; } ;
struct TYPE_30__ {int hb_gain; int vq_gain; int pul_il; int pul_ih; } ;
struct TYPE_29__ {TYPE_7__* priv_data; } ;
struct TYPE_28__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_27__ {int size; int * data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AMRWBSubFrame ;
typedef TYPE_6__ AMRWBFrame ;
typedef TYPE_7__ AMRWBContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int * VAR_15 ;
 float* FUNC_0 (TYPE_7__*,int*,float*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int VAR_16 ;
 int* VAR_17 ;
 int FUNC_3 (float*,int *,int ,int ) ;
 int FUNC_4 (int*,int ,int ,size_t) ;
 int FUNC_5 (int ,size_t,float*,int*) ;
 int FUNC_6 (int ,double*) ;
 int FUNC_7 (int ,double*) ;
 int FUNC_8 (TYPE_7__*,int const*) ;
 int FUNC_9 (TYPE_7__*,TYPE_5__ const*,int) ;
 int VAR_18 ;
 int FUNC_10 (double*,double*,int) ;
 int FUNC_11 (int *,int,int const*,int ) ;
 int FUNC_12 (float,int,int ,int ,int ) ;
 int FUNC_13 (double*,int ,int) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_15 (double*,int ,int) ;
 float FUNC_16 (TYPE_7__*,float*,int ,int ) ;
 int FUNC_17 (float*,int ,int ,float*) ;
 int FUNC_18 (TYPE_7__*,int,float*,float*,double*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_19 (double**,int ) ;
 int FUNC_20 (double*,int ) ;
 int VAR_24 ;
 int FUNC_21 (int ,double*,int) ;
 float FUNC_22 (int,int *,float,float) ;
 int FUNC_23 (float*,float) ;
 int FUNC_24 (TYPE_7__*,int*) ;
 int FUNC_25 (TYPE_7__*,float*,float*,float) ;
 float FUNC_26 (double*,int ) ;
 int FUNC_27 (int*,int*,int) ;
 int FUNC_28 (float*,float*,int ,int ,int ,int ,int) ;
 int FUNC_29 (float*,float*,int ,int ,int ,int ,int) ;
 int FUNC_30 (TYPE_7__*,int ,float*,float,float*,int *) ;
 int FUNC_31 (int) ;
 int FUNC_32 (TYPE_7__*) ;
 int FUNC_33 (float*,float*,int,TYPE_8__*) ;
 float FUNC_34 (int ,int,int*,int,TYPE_8__*) ;

__attribute__((used)) static int FUNC_35(AVCodecContext *VAR_25, void *VAR_26,
                              int *VAR_27, AVPacket *VAR_28)
{
    AMRWBContext *VAR_29 = VAR_25->priv_data;
    AVFrame *VAR_30 = VAR_26;
    AMRWBFrame *VAR_31 = &VAR_29->frame;
    const uint8_t *VAR_32 = VAR_28->data;
    int VAR_33 = VAR_28->size;
    int VAR_34, VAR_35;
    float *VAR_36;
    float VAR_37[VAR_0];
    float VAR_38;
    float *VAR_39;
    float VAR_40;
    float VAR_41, VAR_42;
    float VAR_43[VAR_0];
    float VAR_44[VAR_1];
    float VAR_45[VAR_1];
    float VAR_46;
    int VAR_47, VAR_48, VAR_49;


    VAR_30->nb_samples = 4 * VAR_1;
    if ((VAR_49 = FUNC_14(VAR_25, VAR_30, 0)) < 0)
        return VAR_49;
    VAR_36 = (float *)VAR_30->data[0];

    VAR_35 = FUNC_8(VAR_29, VAR_32);
    if (VAR_29->fr_cur_mode > VAR_11) {
        FUNC_1(VAR_25, VAR_4,
               "Invalid mode %d\n", VAR_29->fr_cur_mode);
        return VAR_2;
    }
    VAR_34 = ((VAR_17[VAR_29->fr_cur_mode] + 7) >> 3) + 1;

    if (VAR_33 < VAR_34) {
        FUNC_1(VAR_25, VAR_4,
            "Frame too small (%d bytes). Truncated file?\n", VAR_33);
        *VAR_27 = 0;
        return VAR_2;
    }

    if (!VAR_29->fr_quality || VAR_29->fr_cur_mode > VAR_11)
        FUNC_1(VAR_25, VAR_4, "Encountered a bad or corrupted frame\n");

    if (VAR_29->fr_cur_mode == VAR_11) {
        FUNC_2(VAR_25, "SID mode");
        return VAR_3;
    }

    FUNC_11((uint16_t *) &VAR_29->frame, sizeof(AMRWBFrame),
        VAR_32 + VAR_35, VAR_15[VAR_29->fr_cur_mode]);


    if (VAR_29->fr_cur_mode == VAR_10) {
        FUNC_6(VAR_31->isp_id, VAR_29->isf_cur);
    } else {
        FUNC_7(VAR_31->isp_id, VAR_29->isf_cur);
    }

    FUNC_20(VAR_29->isf_cur, VAR_29->isf_q_past);
    FUNC_15(VAR_29->isf_cur, VAR_8, VAR_6 - 1);

    VAR_42 = FUNC_26(VAR_29->isf_cur, VAR_29->isf_past_final);

    VAR_29->isf_cur[VAR_6 - 1] *= 2.0;
    FUNC_10(VAR_29->isp[3], VAR_29->isf_cur, VAR_6);


    if (VAR_29->first_frame) {
        VAR_29->first_frame = 0;
        FUNC_21(VAR_29->isp_sub4_past, VAR_29->isp[3], VAR_6 * sizeof(double));
    }
    FUNC_19(VAR_29->isp, VAR_29->isp_sub4_past);

    for (VAR_47 = 0; VAR_47 < 4; VAR_47++)
        FUNC_13(VAR_29->isp[VAR_47], VAR_29->lp_coef[VAR_47], VAR_6);

    for (VAR_47 = 0; VAR_47 < 4; VAR_47++) {
        const AMRWBSubFrame *VAR_50 = &VAR_31->subframe[VAR_47];
        float *VAR_51 = VAR_36 + VAR_47 * VAR_1;


        FUNC_9(VAR_29, VAR_50, VAR_47);

        FUNC_4(VAR_29->fixed_vector, VAR_50->pul_ih,
                            VAR_50->pul_il, VAR_29->fr_cur_mode);

        FUNC_24(VAR_29, VAR_29->fixed_vector);

        FUNC_5(VAR_50->vq_gain, VAR_29->fr_cur_mode,
                     &VAR_38, &VAR_29->pitch_gain[0]);

        VAR_29->fixed_gain[0] =
            FUNC_12(VAR_38,
                                  VAR_29->celpm_ctx.dot_productf(VAR_29->fixed_vector,
                                                               VAR_29->fixed_vector,
                                                               VAR_0) /
                                  VAR_0,
                       VAR_29->prediction_error,
                       VAR_5, VAR_18);


        VAR_41 = FUNC_34(VAR_29->pitch_vector, VAR_29->pitch_gain[0],
                                      VAR_29->fixed_vector, VAR_29->fixed_gain[0],
                                      &VAR_29->celpm_ctx);
        VAR_29->tilt_coef = VAR_41 * 0.25 + 0.25;


        for (VAR_48 = 0; VAR_48 < VAR_0; VAR_48++) {
            VAR_29->excitation[VAR_48] *= VAR_29->pitch_gain[0];
            VAR_29->excitation[VAR_48] += VAR_29->fixed_gain[0] * VAR_29->fixed_vector[VAR_48];
            VAR_29->excitation[VAR_48] = FUNC_31(VAR_29->excitation[VAR_48]);
        }


        VAR_40 = FUNC_22(VAR_29->fixed_gain[0], &VAR_29->prev_tr_gain,
                                          VAR_41, VAR_42);

        VAR_39 = FUNC_0(VAR_29, VAR_29->fixed_vector,
                                             VAR_37);

        FUNC_23(VAR_39, VAR_41);

        FUNC_30(VAR_29, VAR_29->lp_coef[VAR_47], VAR_43, VAR_40,
                  VAR_39, &VAR_29->samples_az[VAR_6]);


        FUNC_3(&VAR_29->samples_up[VAR_14],
                    &VAR_29->samples_az[VAR_6], VAR_12, VAR_29->demph_mem);

        VAR_29->acelpf_ctx.acelp_apply_order_2_transfer_function(&VAR_29->samples_up[VAR_14],
            &VAR_29->samples_up[VAR_14], VAR_23, VAR_20,
            VAR_19, VAR_29->hpf_31_mem, VAR_0);

        FUNC_33(VAR_51, &VAR_29->samples_up[VAR_13],
                     VAR_1, &VAR_29->celpm_ctx);


        VAR_29->acelpf_ctx.acelp_apply_order_2_transfer_function(VAR_45,
            &VAR_29->samples_up[VAR_14], VAR_23, VAR_22,
            VAR_21, VAR_29->hpf_400_mem, VAR_0);

        VAR_46 = FUNC_16(VAR_29, VAR_45,
                               VAR_50->hb_gain, VAR_31->vad);

        FUNC_25(VAR_29, VAR_44, VAR_43, VAR_46);

        FUNC_18(VAR_29, VAR_47, &VAR_29->samples_hb[VAR_7],
                     VAR_44, VAR_29->isf_cur, VAR_29->isf_past_final);


        FUNC_17(VAR_45, VAR_16, VAR_29->bpf_6_7_mem,
                      &VAR_29->samples_hb[VAR_7]);

        if (VAR_29->fr_cur_mode == VAR_9)
            FUNC_17(VAR_45, VAR_24, VAR_29->lpf_7_mem,
                          VAR_45);


        for (VAR_48 = 0; VAR_48 < VAR_1; VAR_48++)
            VAR_51[VAR_48] = (VAR_51[VAR_48] + VAR_45[VAR_48]) * (1.0f / (1 << 15));


        FUNC_32(VAR_29);
    }


    FUNC_21(VAR_29->isp_sub4_past, VAR_29->isp[3], VAR_6 * sizeof(VAR_29->isp[3][0]));
    FUNC_21(VAR_29->isf_past_final, VAR_29->isf_cur, VAR_6 * sizeof(float));

    *VAR_27 = 1;

    return VAR_34;
}
