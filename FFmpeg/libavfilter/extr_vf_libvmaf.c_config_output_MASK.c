
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_7__ {int frame_rate; int sample_aspect_ratio; int time_base; int h; int w; TYPE_3__* src; } ;
struct TYPE_6__ {int fs; } ;
typedef TYPE_1__ LIBVMAFContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    LIBVMAFContext *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];
    int VAR_4;

    VAR_4 = FUNC_1(&VAR_2->fs, VAR_1);
    if (VAR_4 < 0)
        return VAR_4;
    VAR_0->w = VAR_3->w;
    VAR_0->h = VAR_3->h;
    VAR_0->time_base = VAR_3->time_base;
    VAR_0->sample_aspect_ratio = VAR_3->sample_aspect_ratio;
    VAR_0->frame_rate = VAR_3->frame_rate;
    if ((VAR_4 = FUNC_0(&VAR_2->fs)) < 0)
        return VAR_4;

    return 0;
}
