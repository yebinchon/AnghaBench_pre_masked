
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int num; int den; } ;
struct TYPE_8__ {int quarter_sample; int vo_type; int workaround_bugs; int aspect_ratio_info; int low_delay; int time_increment_bits; int width; int height; int mpeg_quant; int pb; TYPE_2__* avctx; scalar_t__ data_partitioning; scalar_t__ rtp_mode; scalar_t__ progressive_sequence; scalar_t__ max_b_frames; } ;
struct TYPE_6__ {int den; } ;
struct TYPE_7__ {int flags; int inter_matrix; int intra_matrix; TYPE_1__ time_base; TYPE_5__ sample_aspect_ratio; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int*,int,int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_5__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static void FUNC_6(MpegEncContext *VAR_8,
                                    int VAR_9,
                                    int VAR_10)
{
    int VAR_11;

    if (!VAR_2)
        return;

    if (VAR_8->max_b_frames || VAR_8->quarter_sample) {
        VAR_11 = 5;
        VAR_8->vo_type = VAR_0;
    } else {
        VAR_11 = 1;
        VAR_8->vo_type = VAR_7;
    }

    FUNC_5(&VAR_8->pb, 16, 0);
    FUNC_5(&VAR_8->pb, 16, 0x100 + VAR_9);
    FUNC_5(&VAR_8->pb, 16, 0);
    FUNC_5(&VAR_8->pb, 16, 0x120 + VAR_10);

    FUNC_5(&VAR_8->pb, 1, 0);
    FUNC_5(&VAR_8->pb, 8, VAR_8->vo_type);
    if (VAR_8->workaround_bugs & VAR_4) {
        FUNC_5(&VAR_8->pb, 1, 0);
    } else {
        FUNC_5(&VAR_8->pb, 1, 1);
        FUNC_5(&VAR_8->pb, 4, VAR_11);
        FUNC_5(&VAR_8->pb, 3, 1);
    }

    VAR_8->aspect_ratio_info = FUNC_2(VAR_8->avctx->sample_aspect_ratio);

    FUNC_5(&VAR_8->pb, 4, VAR_8->aspect_ratio_info);
    if (VAR_8->aspect_ratio_info == VAR_3) {
        FUNC_0(&VAR_8->avctx->sample_aspect_ratio.num, &VAR_8->avctx->sample_aspect_ratio.den,
                   VAR_8->avctx->sample_aspect_ratio.num, VAR_8->avctx->sample_aspect_ratio.den, 255);
        FUNC_5(&VAR_8->pb, 8, VAR_8->avctx->sample_aspect_ratio.num);
        FUNC_5(&VAR_8->pb, 8, VAR_8->avctx->sample_aspect_ratio.den);
    }

    if (VAR_8->workaround_bugs & VAR_4) {
        FUNC_5(&VAR_8->pb, 1, 0);
    } else {
        FUNC_5(&VAR_8->pb, 1, 1);
        FUNC_5(&VAR_8->pb, 2, 1);
        FUNC_5(&VAR_8->pb, 1, VAR_8->low_delay);
        FUNC_5(&VAR_8->pb, 1, 0);
    }

    FUNC_5(&VAR_8->pb, 2, VAR_6);
    FUNC_5(&VAR_8->pb, 1, 1);

    FUNC_5(&VAR_8->pb, 16, VAR_8->avctx->time_base.den);
    if (VAR_8->time_increment_bits < 1)
        VAR_8->time_increment_bits = 1;
    FUNC_5(&VAR_8->pb, 1, 1);
    FUNC_5(&VAR_8->pb, 1, 0);
    FUNC_5(&VAR_8->pb, 1, 1);
    FUNC_5(&VAR_8->pb, 13, VAR_8->width);
    FUNC_5(&VAR_8->pb, 1, 1);
    FUNC_5(&VAR_8->pb, 13, VAR_8->height);
    FUNC_5(&VAR_8->pb, 1, 1);
    FUNC_5(&VAR_8->pb, 1, VAR_8->progressive_sequence ? 0 : 1);
    FUNC_5(&VAR_8->pb, 1, 1);
    if (VAR_11 == 1)
        FUNC_5(&VAR_8->pb, 1, 0);
    else
        FUNC_5(&VAR_8->pb, 2, 0);

    FUNC_5(&VAR_8->pb, 1, 0);
    FUNC_5(&VAR_8->pb, 1, VAR_8->mpeg_quant);

    if (VAR_8->mpeg_quant) {
        FUNC_4(&VAR_8->pb, VAR_8->avctx->intra_matrix);
        FUNC_4(&VAR_8->pb, VAR_8->avctx->inter_matrix);
    }

    if (VAR_11 != 1)
        FUNC_5(&VAR_8->pb, 1, VAR_8->quarter_sample);
    FUNC_5(&VAR_8->pb, 1, 1);
    FUNC_5(&VAR_8->pb, 1, VAR_8->rtp_mode ? 0 : 1);
    FUNC_5(&VAR_8->pb, 1, VAR_8->data_partitioning ? 1 : 0);
    if (VAR_8->data_partitioning)
        FUNC_5(&VAR_8->pb, 1, 0);

    if (VAR_11 != 1) {
        FUNC_5(&VAR_8->pb, 1, 0);
        FUNC_5(&VAR_8->pb, 1, 0);
    }
    FUNC_5(&VAR_8->pb, 1, 0);

    FUNC_3(&VAR_8->pb);


    if (!(VAR_8->avctx->flags & VAR_1)) {
        FUNC_5(&VAR_8->pb, 16, 0);
        FUNC_5(&VAR_8->pb, 16, 0x1B2);
        FUNC_1(&VAR_8->pb, VAR_5, 0);
    }
}
