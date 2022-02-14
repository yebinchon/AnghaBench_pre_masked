
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_13__ {TYPE_2__* internal; TYPE_4__ avg_frame_rate; TYPE_4__ r_frame_rate; } ;
struct TYPE_12__ {TYPE_1__* avctx; } ;
struct TYPE_11__ {int ticks_per_frame; TYPE_4__ framerate; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef int AVFrame ;
typedef int AVFormatContext ;


 TYPE_4__ FUNC_0 (TYPE_4__,TYPE_4__) ;
 double FUNC_1 (TYPE_4__) ;
 double FUNC_2 (double) ;

AVRational FUNC_3(AVFormatContext *VAR_0, AVStream *VAR_1, AVFrame *VAR_2)
{
    AVRational VAR_3 = VAR_1->r_frame_rate;
    AVRational VAR_4 = VAR_1->internal->avctx->framerate;
    AVRational VAR_5 = VAR_1->avg_frame_rate;

    if (VAR_5.num > 0 && VAR_5.den > 0 && VAR_3.num > 0 && VAR_3.den > 0 &&
        FUNC_1(VAR_5) < 70 && FUNC_1(VAR_3) > 210) {
        VAR_3 = VAR_5;
    }


    if (VAR_1->internal->avctx->ticks_per_frame > 1) {
        if ( VAR_4.num > 0 && VAR_4.den > 0 &&
            (VAR_3.num == 0 || FUNC_1(VAR_4) < FUNC_1(VAR_3)*0.7 && FUNC_2(1.0 - FUNC_1(FUNC_0(VAR_5, VAR_3))) > 0.1))
            VAR_3 = VAR_4;
    }

    return VAR_3;
}
