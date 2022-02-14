
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {double qcompress; int rc_override_count; double i_quant_factor; double i_quant_offset; double b_quant_factor; double b_quant_offset; TYPE_1__* rc_override; } ;
struct TYPE_14__ {double* qscale_sum; double* i_cplx_sum; double* p_cplx_sum; double pass1_rc_eq_output_sum; int rc_eq_eval; scalar_t__* frame_count; } ;
struct TYPE_15__ {double mb_num; TYPE_5__* avctx; int rc_eq; TYPE_3__ rc_context; } ;
struct TYPE_13__ {int new_pict_type; double i_tex_bits; double qscale; double p_tex_bits; double const mv_bits; size_t pict_type; double f_code; double b_code; double const i_count; double const mc_mb_var_sum; double const mb_var_sum; } ;
struct TYPE_12__ {int start_frame; int end_frame; double quality_factor; scalar_t__ qscale; } ;
typedef TYPE_1__ RcOverride ;
typedef TYPE_2__ RateControlEntry ;
typedef TYPE_3__ RateControlContext ;
typedef TYPE_4__ MpegEncContext ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double FUNC_0 (int ,double*,TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*,int ,char*,int ) ;
 double FUNC_2 (TYPE_2__*,double) ;
 scalar_t__ FUNC_3 (double) ;
 double FUNC_4 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static double FUNC_5(MpegEncContext *VAR_6, RateControlEntry *VAR_7,
                         double VAR_8, int VAR_9)
{
    RateControlContext *VAR_10 = &VAR_6->rc_context;
    AVCodecContext *VAR_11 = VAR_6->avctx;
    const int VAR_12 = VAR_7->new_pict_type;
    const double VAR_13 = VAR_6->mb_num;
    double VAR_14, VAR_15;
    int VAR_16;

    double VAR_17[] = {
        VAR_5,
        VAR_4,
        VAR_7->i_tex_bits * VAR_7->qscale,
        VAR_7->p_tex_bits * VAR_7->qscale,
        (VAR_7->i_tex_bits + VAR_7->p_tex_bits) * (double)VAR_7->qscale,
        VAR_7->mv_bits / VAR_13,
        VAR_7->pict_type == VAR_1 ? (VAR_7->f_code + VAR_7->b_code) * 0.5 : VAR_7->f_code,
        VAR_7->i_count / VAR_13,
        VAR_7->mc_mb_var_sum / VAR_13,
        VAR_7->mb_var_sum / VAR_13,
        VAR_7->pict_type == VAR_2,
        VAR_7->pict_type == VAR_3,
        VAR_7->pict_type == VAR_1,
        VAR_10->qscale_sum[VAR_12] / (double)VAR_10->frame_count[VAR_12],
        VAR_11->qcompress,
        VAR_10->i_cplx_sum[VAR_2] / (double)VAR_10->frame_count[VAR_2],
        VAR_10->i_cplx_sum[VAR_3] / (double)VAR_10->frame_count[VAR_3],
        VAR_10->p_cplx_sum[VAR_3] / (double)VAR_10->frame_count[VAR_3],
        VAR_10->p_cplx_sum[VAR_1] / (double)VAR_10->frame_count[VAR_1],
        (VAR_10->i_cplx_sum[VAR_12] + VAR_10->p_cplx_sum[VAR_12]) / (double)VAR_10->frame_count[VAR_12],
        0
    };

    VAR_15 = FUNC_0(VAR_10->rc_eq_eval, VAR_17, VAR_7);
    if (FUNC_3(VAR_15)) {
        FUNC_1(VAR_6->avctx, VAR_0, "Error evaluating rc_eq \"%s\"\n", VAR_6->rc_eq);
        return -1;
    }

    VAR_10->pass1_rc_eq_output_sum += VAR_15;
    VAR_15 *= VAR_8;
    if (VAR_15 < 0.0)
        VAR_15 = 0.0;
    VAR_15 += 1.0;


    for (VAR_16 = 0; VAR_16 < VAR_6->avctx->rc_override_count; VAR_16++) {
        RcOverride *VAR_18 = VAR_6->avctx->rc_override;
        if (VAR_18[VAR_16].start_frame > VAR_9)
            continue;
        if (VAR_18[VAR_16].end_frame < VAR_9)
            continue;

        if (VAR_18[VAR_16].qscale)
            VAR_15 = FUNC_4(VAR_7, VAR_18[VAR_16].qscale);
        else
            VAR_15 *= VAR_18[VAR_16].quality_factor;
    }

    VAR_14 = FUNC_2(VAR_7, VAR_15);


    if (VAR_12 == VAR_2 && VAR_6->avctx->i_quant_factor < 0.0)
        VAR_14 = -VAR_14 * VAR_6->avctx->i_quant_factor + VAR_6->avctx->i_quant_offset;
    else if (VAR_12 == VAR_1 && VAR_6->avctx->b_quant_factor < 0.0)
        VAR_14 = -VAR_14 * VAR_6->avctx->b_quant_factor + VAR_6->avctx->b_quant_offset;
    if (VAR_14 < 1)
        VAR_14 = 1;

    return VAR_14;
}
