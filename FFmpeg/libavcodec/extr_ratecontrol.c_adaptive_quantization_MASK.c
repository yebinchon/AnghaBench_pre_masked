
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* mb_mean; int * mb_var; int * mc_mb_var; } ;
struct TYPE_7__ {float border_masking; float* cplx_tab; float* bits_tab; int mb_width; int mb_height; int mb_num; int* mb_index2xy; int const mb_stride; int* mb_type; int mpv_flags; int* lambda_table; TYPE_2__ current_picture; TYPE_1__* avctx; } ;
struct TYPE_5__ {double lumi_masking; double dark_masking; float temporal_cplx_masking; float spatial_cplx_masking; float p_masking; int mb_lmin; int mb_lmax; } ;
typedef TYPE_2__ Picture ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 float FUNC_0 (float,float) ;
 int VAR_1 ;
 float FUNC_1 (float,float const) ;
 float FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(MpegEncContext *VAR_2, double VAR_3)
{
    int VAR_4;
    const float VAR_5 = VAR_2->avctx->lumi_masking / (128.0 * 128.0);
    const float VAR_6 = VAR_2->avctx->dark_masking / (128.0 * 128.0);
    const float VAR_7 = VAR_2->avctx->temporal_cplx_masking;
    const float VAR_8 = VAR_2->avctx->spatial_cplx_masking;
    const float VAR_9 = VAR_2->avctx->p_masking;
    const float VAR_10 = VAR_2->border_masking;
    float VAR_11 = 0.0;
    float VAR_12 = 0.0;
    float *VAR_13 = VAR_2->cplx_tab;
    float *VAR_14 = VAR_2->bits_tab;
    const int VAR_15 = VAR_2->avctx->mb_lmin;
    const int VAR_16 = VAR_2->avctx->mb_lmax;
    Picture *const VAR_17 = &VAR_2->current_picture;
    const int VAR_18 = VAR_2->mb_width;
    const int VAR_19 = VAR_2->mb_height;

    for (VAR_4 = 0; VAR_4 < VAR_2->mb_num; VAR_4++) {
        const int VAR_20 = VAR_2->mb_index2xy[VAR_4];
        float VAR_21 = FUNC_2(VAR_17->mc_mb_var[VAR_20]);
        float VAR_22 = FUNC_2(VAR_17->mb_var[VAR_20]);
        const int VAR_23 = VAR_17->mb_mean[VAR_20];
        float VAR_24, VAR_25, VAR_26;
        int VAR_27 = VAR_20 % VAR_2->mb_stride;
        int VAR_28 = VAR_20 / VAR_2->mb_stride;
        int VAR_29;
        float VAR_30 = 0.0;
        if (VAR_22 < 4)
            VAR_22 = 4;
        if (VAR_21 < 4)
            VAR_21 = 4;

        if ((VAR_2->mb_type[VAR_20] & VAR_0)) {
            VAR_25 = VAR_22;
            VAR_26 = 1.0 + VAR_9;
        } else {
            VAR_25 = VAR_21;
            VAR_26 = FUNC_1(VAR_21, -VAR_7);
        }
        VAR_26 *= FUNC_1(VAR_22, -VAR_8);

        if (VAR_23 > 127)
            VAR_26 *= (1.0 - (VAR_23 - 128) * (VAR_23 - 128) * VAR_5);
        else
            VAR_26 *= (1.0 - (VAR_23 - 128) * (VAR_23 - 128) * VAR_6);

        if (VAR_27 < VAR_18 / 5) {
            VAR_29 = VAR_18 / 5 - VAR_27;
            VAR_30 = (float)VAR_29 / (float)(VAR_18 / 5);
        } else if (VAR_27 > 4 * VAR_18 / 5) {
            VAR_29 = VAR_27 - 4 * VAR_18 / 5;
            VAR_30 = (float)VAR_29 / (float)(VAR_18 / 5);
        }
        if (VAR_28 < VAR_19 / 5) {
            VAR_29 = VAR_19 / 5 - VAR_28;
            VAR_30 = FUNC_0(VAR_30,
                                (float)VAR_29 / (float)(VAR_19 / 5));
        } else if (VAR_28 > 4 * VAR_19 / 5) {
            VAR_29 = VAR_28 - 4 * VAR_19 / 5;
            VAR_30 = FUNC_0(VAR_30,
                                (float)VAR_29 / (float)(VAR_19 / 5));
        }

        VAR_26 *= 1.0 - VAR_10 * VAR_30;

        if (VAR_26 < 0.00001)
            VAR_26 = 0.00001;

        VAR_24 = VAR_25 * VAR_26;
        VAR_12 += VAR_25;
        VAR_11 += VAR_24;
        VAR_13[VAR_4] = VAR_25;
        VAR_14[VAR_4] = VAR_24;
    }


    if (VAR_2->mpv_flags & VAR_1) {
        float VAR_31 = VAR_11 / VAR_12;
        for (VAR_4 = 0; VAR_4 < VAR_2->mb_num; VAR_4++) {
            float VAR_32 = VAR_3 * VAR_13[VAR_4] / VAR_14[VAR_4];
            VAR_32 *= VAR_31;

            if (VAR_32 > VAR_16) {
                VAR_11 -= VAR_14[VAR_4];
                VAR_12 -= VAR_13[VAR_4] * VAR_3 / VAR_16;
            } else if (VAR_32 < VAR_15) {
                VAR_11 -= VAR_14[VAR_4];
                VAR_12 -= VAR_13[VAR_4] * VAR_3 / VAR_15;
            }
        }
        if (VAR_11 < 0.001)
            VAR_11 = 0.001;
        if (VAR_12 < 0.001)
            VAR_12 = 0.001;
    }

    for (VAR_4 = 0; VAR_4 < VAR_2->mb_num; VAR_4++) {
        const int VAR_33 = VAR_2->mb_index2xy[VAR_4];
        float VAR_34 = VAR_3 * VAR_13[VAR_4] / VAR_14[VAR_4];
        int VAR_35;

        if (VAR_2->mpv_flags & VAR_1) {
            VAR_34 *= VAR_11 / VAR_12;
        }

        VAR_35 = (int)(VAR_34 + 0.5);

        if (VAR_35 > VAR_16)
            VAR_35 = VAR_16;
        else if (VAR_35 < VAR_15)
            VAR_35 = VAR_15;
        VAR_2->lambda_table[VAR_33] = VAR_35;
    }
}
