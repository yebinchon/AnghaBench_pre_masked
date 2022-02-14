
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int frame_rate; int time_base; int sample_aspect_ratio; int h; int w; TYPE_1__* src; } ;
struct TYPE_4__ {TYPE_2__** inputs; } ;
typedef TYPE_2__ AVFilterLink ;



__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    AVFilterLink *VAR_1 = VAR_0->src->inputs[1];

    VAR_0->w = VAR_1->w;
    VAR_0->h = VAR_1->h;
    VAR_0->sample_aspect_ratio = VAR_1->sample_aspect_ratio;
    VAR_0->time_base = VAR_1->time_base;
    VAR_0->frame_rate = VAR_1->frame_rate;

    return 0;
}
