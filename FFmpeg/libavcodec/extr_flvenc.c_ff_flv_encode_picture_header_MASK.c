
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int h263_flv; int width; int height; scalar_t__ pict_type; int qscale; int c_dc_scale_table; int y_dc_scale_table; scalar_t__ h263_aic; int pb; TYPE_2__* avctx; scalar_t__ picture_number; } ;
struct TYPE_5__ {int num; int den; } ;
struct TYPE_6__ {TYPE_1__ time_base; } ;
typedef TYPE_3__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(MpegEncContext *VAR_3, int VAR_4)
{
    int VAR_5;

    FUNC_0(&VAR_3->pb);

    FUNC_1(&VAR_3->pb, 17, 1);

    FUNC_1(&VAR_3->pb, 5, (VAR_3->h263_flv - 1));
    FUNC_1(&VAR_3->pb, 8,
             (((int64_t) VAR_3->picture_number * 30 * VAR_3->avctx->time_base.num) /
              VAR_3->avctx->time_base.den) & 0xff);
    if (VAR_3->width == 352 && VAR_3->height == 288)
        VAR_5 = 2;
    else if (VAR_3->width == 176 && VAR_3->height == 144)
        VAR_5 = 3;
    else if (VAR_3->width == 128 && VAR_3->height == 96)
        VAR_5 = 4;
    else if (VAR_3->width == 320 && VAR_3->height == 240)
        VAR_5 = 5;
    else if (VAR_3->width == 160 && VAR_3->height == 120)
        VAR_5 = 6;
    else if (VAR_3->width <= 255 && VAR_3->height <= 255)
        VAR_5 = 0;
    else
        VAR_5 = 1;
    FUNC_1(&VAR_3->pb, 3, VAR_5);
    if (VAR_5 == 0) {
        FUNC_1(&VAR_3->pb, 8, VAR_3->width);
        FUNC_1(&VAR_3->pb, 8, VAR_3->height);
    } else if (VAR_5 == 1) {
        FUNC_1(&VAR_3->pb, 16, VAR_3->width);
        FUNC_1(&VAR_3->pb, 16, VAR_3->height);
    }
    FUNC_1(&VAR_3->pb, 2, VAR_3->pict_type == VAR_0);
    FUNC_1(&VAR_3->pb, 1, 1);
    FUNC_1(&VAR_3->pb, 5, VAR_3->qscale);
    FUNC_1(&VAR_3->pb, 1, 0);

    if (VAR_3->h263_aic) {
        VAR_3->y_dc_scale_table =
        VAR_3->c_dc_scale_table = VAR_1;
    } else {
        VAR_3->y_dc_scale_table =
        VAR_3->c_dc_scale_table = VAR_2;
    }
}
