
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_44__ {scalar_t__ pitch_lag; int member_0; } ;
struct TYPE_43__ {int pulses; } ;
struct TYPE_42__ {TYPE_10__* priv_data; } ;
struct TYPE_41__ {scalar_t__* data; int nb_samples; } ;
struct TYPE_40__ {int size; int * data; } ;
struct TYPE_39__ {int (* weighted_vector_sumf ) (int ,int ,int ,double,double,size_t) ;} ;
struct TYPE_38__ {int (* acelp_apply_order_2_transfer_function ) (float*,float*,int ,int ,int,int ,int ) ;} ;
struct TYPE_37__ {int (* dot_productf ) (int *,int *,int) ;} ;
struct TYPE_36__ {TYPE_8__* subframe; } ;
struct TYPE_35__ {scalar_t__ cur_frame_mode; double* fixed_gain; int * lsf_q; int lsf_avg; TYPE_4__ acelpv_ctx; int high_pass_mem; TYPE_3__ acelpf_ctx; int * fixed_vector; int * lpc; int * samples_in; int * excitation; int * pitch_gain; int prediction_error; TYPE_2__ celpm_ctx; TYPE_1__ frame; int * lsp; } ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;
typedef TYPE_8__ AMRNBSubframe ;
typedef TYPE_9__ AMRFixed ;
typedef TYPE_10__ AMRContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 float* FUNC_0 (TYPE_10__*,TYPE_9__*,int *,float,float*) ;
 int FUNC_1 (TYPE_7__*,int ,char*) ;
 int FUNC_2 (TYPE_7__*,char*) ;
 int FUNC_3 (TYPE_9__*,int ,scalar_t__,int) ;
 int FUNC_4 (TYPE_10__*,TYPE_8__ const*,scalar_t__,int,float*) ;
 int FUNC_5 (TYPE_10__*,TYPE_8__ const*,int) ;
 int * VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int ,int) ;
 double FUNC_7 (float,int,int ,int ,int ) ;
 int FUNC_8 (int *,TYPE_9__*,int) ;
 int FUNC_9 (TYPE_7__*,TYPE_6__*,int ) ;
 int FUNC_10 (int *,TYPE_9__*,double,int) ;
 float FUNC_11 (TYPE_10__*,int ,int ,size_t) ;
 int* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (TYPE_10__*) ;
 int FUNC_13 (TYPE_10__*) ;
 int FUNC_14 (TYPE_10__*,int,scalar_t__,TYPE_9__*) ;
 int FUNC_15 (TYPE_10__*,int ,float*) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (float*,float*,int ,int ,int,int ,int ) ;
 int FUNC_18 (int ,int ,int ,double,double,size_t) ;
 scalar_t__ FUNC_19 (TYPE_10__*,int ,float,float const*,int *,int) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (TYPE_10__*,int const*,int) ;
 int FUNC_22 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_23(AVCodecContext *VAR_17, void *VAR_18,
                              int *VAR_19, AVPacket *VAR_20)
{

    AMRContext *VAR_21 = VAR_17->priv_data;
    AVFrame *VAR_22 = VAR_18;
    const uint8_t *VAR_23 = VAR_20->data;
    int VAR_24 = VAR_20->size;
    float *VAR_25;
    int VAR_26, VAR_27, VAR_28;
    float VAR_29;
    AMRFixed VAR_30 = {0};
    float VAR_31[VAR_2];
    float VAR_32;
    const float *VAR_33;


    VAR_22->nb_samples = VAR_0;
    if ((VAR_28 = FUNC_9(VAR_17, VAR_22, 0)) < 0)
        return VAR_28;
    VAR_25 = (float *)VAR_22->data[0];

    VAR_21->cur_frame_mode = FUNC_21(VAR_21, VAR_23, VAR_24);
    if (VAR_21->cur_frame_mode == VAR_10) {
        FUNC_1(VAR_17, VAR_5, "Corrupt bitstream\n");
        return VAR_3;
    }
    if (VAR_21->cur_frame_mode == VAR_9) {
        FUNC_2(VAR_17, "dtx mode");
        FUNC_1(VAR_17, VAR_6, "Note: libopencore_amrnb supports dtx\n");
        return VAR_4;
    }

    if (VAR_21->cur_frame_mode == VAR_8) {
        FUNC_13(VAR_21);
    } else
        FUNC_12(VAR_21);

    for (VAR_26 = 0; VAR_26 < 4; VAR_26++)
        FUNC_6(VAR_21->lsp[VAR_26], VAR_21->lpc[VAR_26], 5);

    for (VAR_27 = 0; VAR_27 < 4; VAR_27++) {
        const AMRNBSubframe *VAR_34 = &VAR_21->frame.subframe[VAR_27];

        FUNC_5(VAR_21, VAR_34, VAR_27);

        FUNC_3(&VAR_30, VAR_34->pulses,
                            VAR_21->cur_frame_mode, VAR_27);





        FUNC_4(VAR_21, VAR_34, VAR_21->cur_frame_mode, VAR_27,
                     &VAR_29);

        FUNC_14(VAR_21, VAR_27, VAR_21->cur_frame_mode, &VAR_30);

        if (VAR_30.pitch_lag == 0) {
            FUNC_1(VAR_17, VAR_5, "The file is corrupted, pitch_lag = 0 is not allowed\n");
            return VAR_3;
        }
        FUNC_10(VAR_21->fixed_vector, &VAR_30, 1.0,
                            VAR_2);

        VAR_21->fixed_gain[4] =
            FUNC_7(VAR_29,
                       VAR_21->celpm_ctx.dot_productf(VAR_21->fixed_vector,
                                                               VAR_21->fixed_vector,
                                                               VAR_2) /
                                  VAR_2,
                       VAR_21->prediction_error,
                       VAR_11[VAR_21->cur_frame_mode], VAR_12);



        for (VAR_26 = 0; VAR_26 < VAR_2; VAR_26++)
            VAR_21->excitation[VAR_26] *= VAR_21->pitch_gain[4];
        FUNC_10(VAR_21->excitation, &VAR_30, VAR_21->fixed_gain[4],
                            VAR_2);






        for (VAR_26 = 0; VAR_26 < VAR_2; VAR_26++)
            VAR_21->excitation[VAR_26] = FUNC_20(VAR_21->excitation[VAR_26]);




        VAR_32 = FUNC_11(VAR_21, VAR_21->lsf_q[VAR_27],
                                             VAR_21->lsf_avg, VAR_21->cur_frame_mode);

        VAR_33 = FUNC_0(VAR_21, &VAR_30, VAR_21->fixed_vector,
                                             VAR_32, VAR_31);

        if (FUNC_19(VAR_21, VAR_21->lpc[VAR_27], VAR_32,
                      VAR_33, &VAR_21->samples_in[VAR_7], 0))



            FUNC_19(VAR_21, VAR_21->lpc[VAR_27], VAR_32,
                      VAR_33, &VAR_21->samples_in[VAR_7], 1);

        FUNC_15(VAR_21, VAR_21->lpc[VAR_27], VAR_25 + VAR_27 * VAR_2);


        FUNC_8(VAR_21->fixed_vector, &VAR_30, VAR_2);
        FUNC_22(VAR_21);
    }

    VAR_21->acelpf_ctx.acelp_apply_order_2_transfer_function(VAR_25,
                                             VAR_25, VAR_16,
                                             VAR_15,
                                             VAR_14 * VAR_1,
                                             VAR_21->high_pass_mem, VAR_0);







    VAR_21->acelpv_ctx.weighted_vector_sumf(VAR_21->lsf_avg, VAR_21->lsf_avg, VAR_21->lsf_q[3],
                            0.84, 0.16, VAR_7);

    *VAR_19 = 1;


    return VAR_13[VAR_21->cur_frame_mode] + 1;
}
