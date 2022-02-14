
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_13__ {int den; int num; } ;
struct TYPE_14__ {TYPE_2__ par; int height; int width; } ;
struct TYPE_18__ {TYPE_5__ vrate; int pix_fmt; TYPE_3__ geometry; } ;
typedef TYPE_7__ hb_filter_init_t ;
struct TYPE_19__ {TYPE_1__* output; } ;
typedef TYPE_8__ hb_avfilter_graph_t ;
struct TYPE_17__ {scalar_t__ num; scalar_t__ den; } ;
struct TYPE_15__ {int den; int num; } ;
struct TYPE_20__ {TYPE_6__ frame_rate; int format; TYPE_4__ sample_aspect_ratio; int h; int w; } ;
struct TYPE_12__ {TYPE_9__** inputs; } ;
typedef TYPE_9__ AVFilterLink ;



void FUNC_0(hb_avfilter_graph_t * VAR_0,
                                   hb_filter_init_t * VAR_1)
{

    AVFilterLink *VAR_2 = VAR_0->output->inputs[0];
    VAR_1->geometry.width = VAR_2->w;
    VAR_1->geometry.height = VAR_2->h;
    VAR_1->geometry.par.num = VAR_2->sample_aspect_ratio.num;
    VAR_1->geometry.par.den = VAR_2->sample_aspect_ratio.den;
    VAR_1->pix_fmt = VAR_2->format;


    if (VAR_2->frame_rate.num > 0 && VAR_2->frame_rate.den > 0)
    {
        VAR_1->vrate.num = VAR_2->frame_rate.num;
        VAR_1->vrate.den = VAR_2->frame_rate.den;
    }
}
