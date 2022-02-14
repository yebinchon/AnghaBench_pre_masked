
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__** inputs; TYPE_2__* priv; } ;
struct TYPE_11__ {int h; int w; int frame_rate; int sample_aspect_ratio; int time_base; int format; TYPE_5__* src; } ;
struct TYPE_10__ {TYPE_1__* comp; } ;
struct TYPE_9__ {int bpc; scalar_t__ ppsrc; } ;
struct TYPE_8__ {int depth; } ;
typedef TYPE_2__ FieldMatchContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    FieldMatchContext *VAR_4 = VAR_3->priv;
    const AVFilterLink *VAR_5 =
        VAR_3->inputs[VAR_4->ppsrc ? VAR_0 : VAR_1];
    const AVPixFmtDescriptor *VAR_6 = FUNC_0(VAR_5->format);

    VAR_4->bpc = (VAR_6->comp[0].depth + 7) / 8;
    VAR_2->time_base = VAR_5->time_base;
    VAR_2->sample_aspect_ratio = VAR_5->sample_aspect_ratio;
    VAR_2->frame_rate = VAR_5->frame_rate;
    VAR_2->w = VAR_5->w;
    VAR_2->h = VAR_5->h;
    return 0;
}
