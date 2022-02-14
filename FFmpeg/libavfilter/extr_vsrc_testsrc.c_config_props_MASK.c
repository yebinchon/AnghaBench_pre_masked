
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int time_base; int frame_rate; int sar; int h; int w; } ;
typedef TYPE_2__ TestSourceContext ;
struct TYPE_7__ {int time_base; int frame_rate; int sample_aspect_ratio; int h; int w; TYPE_1__* src; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_3__ AVFilterLink ;



__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    TestSourceContext *VAR_1 = VAR_0->src->priv;

    VAR_0->w = VAR_1->w;
    VAR_0->h = VAR_1->h;
    VAR_0->sample_aspect_ratio = VAR_1->sar;
    VAR_0->frame_rate = VAR_1->frame_rate;
    VAR_0->time_base = VAR_1->time_base;

    return 0;
}
