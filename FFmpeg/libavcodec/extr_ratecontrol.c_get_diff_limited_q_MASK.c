
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {double i_quant_factor; double const i_quant_offset; double b_quant_factor; double const b_quant_offset; int max_qdiff; } ;
struct TYPE_8__ {double* last_qscale_for; size_t last_non_b_pict_type; } ;
struct TYPE_9__ {TYPE_4__* avctx; TYPE_2__ rc_context; } ;
struct TYPE_7__ {int new_pict_type; } ;
typedef TYPE_1__ RateControlEntry ;
typedef TYPE_2__ RateControlContext ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ AVCodecContext ;


 int const VAR_0 ;
 int const VAR_1 ;
 size_t VAR_2 ;
 double const FUNC_0 (double) ;
 int VAR_3 ;

__attribute__((used)) static double FUNC_1(MpegEncContext *VAR_4, RateControlEntry *VAR_5, double VAR_6)
{
    RateControlContext *VAR_7 = &VAR_4->rc_context;
    AVCodecContext *VAR_8 = VAR_4->avctx;
    const int VAR_9 = VAR_5->new_pict_type;
    const double VAR_10 = VAR_7->last_qscale_for[VAR_2];
    const double VAR_11 = VAR_7->last_qscale_for[VAR_7->last_non_b_pict_type];

    if (VAR_9 == VAR_1 &&
        (VAR_8->i_quant_factor > 0.0 || VAR_7->last_non_b_pict_type == VAR_2))
        VAR_6 = VAR_10 * FUNC_0(VAR_8->i_quant_factor) + VAR_8->i_quant_offset;
    else if (VAR_9 == VAR_0 &&
             VAR_8->b_quant_factor > 0.0)
        VAR_6 = VAR_11 * VAR_8->b_quant_factor + VAR_8->b_quant_offset;
    if (VAR_6 < 1)
        VAR_6 = 1;


    if (VAR_7->last_non_b_pict_type == VAR_9 || VAR_9 != VAR_1) {
        double VAR_12 = VAR_7->last_qscale_for[VAR_9];
        const int VAR_13 = VAR_3 * VAR_8->max_qdiff;

        if (VAR_6 > VAR_12 + VAR_13)
            VAR_6 = VAR_12 + VAR_13;
        else if (VAR_6 < VAR_12 - VAR_13)
            VAR_6 = VAR_12 - VAR_13;
    }

    VAR_7->last_qscale_for[VAR_9] = VAR_6;

    if (VAR_9 != VAR_0)
        VAR_7->last_non_b_pict_type = VAR_9;

    return VAR_6;
}
