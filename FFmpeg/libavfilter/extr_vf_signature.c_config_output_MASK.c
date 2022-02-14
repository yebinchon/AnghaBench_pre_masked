
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** inputs; } ;
struct TYPE_4__ {int h; int w; int sample_aspect_ratio; int frame_rate; int time_base; TYPE_2__* src; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    AVFilterLink *VAR_2 = VAR_1->inputs[0];

    VAR_0->time_base = VAR_2->time_base;
    VAR_0->frame_rate = VAR_2->frame_rate;
    VAR_0->sample_aspect_ratio = VAR_2->sample_aspect_ratio;
    VAR_0->w = VAR_2->w;
    VAR_0->h = VAR_2->h;

    return 0;
}
