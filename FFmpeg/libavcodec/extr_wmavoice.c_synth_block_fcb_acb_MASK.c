
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct frame_type_desc {scalar_t__ fcb_type; int log_n_blocks; int dbl_pulses; scalar_t__ acb_type; } ;
typedef int idx_sh16 ;
struct TYPE_9__ {float silence_gain; float* gain_pred_err; int last_pitch_val; int pitch_diff_sh16; int frame_cntr; } ;
typedef TYPE_1__ WMAVoiceContext ;
struct TYPE_10__ {int pitch_lag; double pitch_fac; int no_repeat_mask; size_t n; int* x; float* y; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AMRFixed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 float FUNC_2 (double,double,double) ;
 int FUNC_3 (int *,int,int) ;
 double FUNC_4 (float*,float const*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int,TYPE_2__*) ;
 float FUNC_7 (double) ;
 int FUNC_8 (float*,float*,int ,int,int,int,int) ;
 int FUNC_9 (float*,TYPE_2__*,double,int) ;
 int FUNC_10 (float*,float*,float*,float,float,int) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (float*,float*,int) ;
 int FUNC_14 (float*,int ,int) ;
 int FUNC_15 (int ,int,int) ;
 int FUNC_16 (int *,int) ;
 float* VAR_3 ;
 double* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float* VAR_7 ;

__attribute__((used)) static void FUNC_17(WMAVoiceContext *VAR_8, GetBitContext *VAR_9,
                                int VAR_10, int VAR_11,
                                int VAR_12,
                                const struct frame_type_desc *VAR_13,
                                float *VAR_14)
{
    static const float VAR_15[6] = {
        0.8169, -0.06545, 0.1726, 0.0185, -0.0359, 0.0458
    };
    float VAR_16[VAR_2 / 2], VAR_17, VAR_18, VAR_19;
    int VAR_20, VAR_21, VAR_22;
    AMRFixed VAR_23;

    FUNC_0(VAR_11 <= VAR_2 / 2);
    FUNC_14(VAR_16, 0, sizeof(*VAR_16) * VAR_11);

    VAR_23.pitch_lag = VAR_12 >> 2;
    VAR_23.pitch_fac = 1.0;
    VAR_23.no_repeat_mask = 0;
    VAR_23.n = 0;



    if (VAR_13->fcb_type == VAR_1) {
        FUNC_5(VAR_8, VAR_9, VAR_10, &VAR_23);
        if (FUNC_6(VAR_8, VAR_9, VAR_10, &VAR_23)) {



            int VAR_24 = FUNC_15(VAR_8->frame_cntr, VAR_10, VAR_11);

            for (VAR_20 = 0; VAR_20 < VAR_11; VAR_20++)
                VAR_14[VAR_20] =
                    VAR_7[VAR_24 + VAR_20] * VAR_8->silence_gain;
            FUNC_16(VAR_9, 7 + 1);
            return;
        }
    } else {
        int VAR_25 = 5 - VAR_13->log_n_blocks;

        VAR_23.no_repeat_mask = -1;


        for (VAR_20 = 0; VAR_20 < 5; VAR_20++) {
            float VAR_26;
            int VAR_27, VAR_28;

            VAR_26 = FUNC_12(VAR_9) ? 1.0 : -1.0;
            VAR_27 = FUNC_11(VAR_9, VAR_25);
            VAR_23.x[VAR_23.n] = VAR_20 + 5 * VAR_27;
            VAR_23.y[VAR_23.n++] = VAR_26;
            if (VAR_20 < VAR_13->dbl_pulses) {
                VAR_28 = FUNC_11(VAR_9, VAR_25);
                VAR_23.x[VAR_23.n] = VAR_20 + 5 * VAR_28;
                VAR_23.y[VAR_23.n++] = (VAR_27 < VAR_28) ? -VAR_26 : VAR_26;
            }
        }
    }
    FUNC_9(VAR_16, &VAR_23, 1.0, VAR_11);



    VAR_21 = FUNC_11(VAR_9, 7);
    VAR_19 = FUNC_7(FUNC_4(VAR_8->gain_pred_err,
                                                 VAR_15, 6) -
                    5.2409161640 + VAR_4[VAR_21]);
    VAR_18 = VAR_3[VAR_21];
    VAR_17 = FUNC_2(VAR_4[VAR_21],
                        -2.9957322736 ,
                         1.6094379124 );

    VAR_22 = 8 >> VAR_13->log_n_blocks;
    FUNC_13(&VAR_8->gain_pred_err[VAR_22], VAR_8->gain_pred_err,
            sizeof(*VAR_8->gain_pred_err) * (6 - VAR_22));
    for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++)
        VAR_8->gain_pred_err[VAR_20] = VAR_17;


    if (VAR_13->acb_type == VAR_0) {
        int VAR_29;
        for (VAR_20 = 0; VAR_20 < VAR_11; VAR_20 += VAR_29) {
            int VAR_30;
            int VAR_31 = VAR_10 * VAR_11 + VAR_20;
            int VAR_32 = (VAR_8->last_pitch_val << 16) +
                             VAR_8->pitch_diff_sh16 * VAR_31;
            int VAR_33 = (VAR_32 + 0x6FFF) >> 16;
            int VAR_34 = ((VAR_33 << 16) - VAR_32) * 8 + 0x58000;
            VAR_21 = VAR_34 >> 16;
            if (VAR_8->pitch_diff_sh16) {
                if (VAR_8->pitch_diff_sh16 > 0) {
                    VAR_30 = (VAR_34) &~ 0xFFFF;
                } else
                    VAR_30 = (VAR_34 + 0x10000) &~ 0xFFFF;
                VAR_29 = FUNC_1((VAR_34 - VAR_30) / VAR_8->pitch_diff_sh16 / 8,
                              1, VAR_11 - VAR_20);
            } else
                VAR_29 = VAR_11;

            FUNC_8(&VAR_14[VAR_20], &VAR_14[VAR_20 - VAR_33],
                                  VAR_5, 17,
                                  VAR_21, 9, VAR_29);
        }
    } else {
        int VAR_35 = VAR_12 >> 2;
        VAR_21 = VAR_12 & 3;
        if (VAR_21) {
            FUNC_8(VAR_14, &VAR_14[-VAR_35],
                                  VAR_6, 4,
                                  VAR_21, 8, VAR_11);
        } else
            FUNC_3((uint8_t *) VAR_14, sizeof(float) * VAR_35,
                              sizeof(float) * VAR_11);
    }


    FUNC_10(VAR_14, VAR_14, VAR_16,
                            VAR_18, VAR_19, VAR_11);
}
