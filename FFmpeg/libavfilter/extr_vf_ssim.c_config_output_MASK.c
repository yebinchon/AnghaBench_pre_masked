
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int den; int num; } ;
struct TYPE_14__ {TYPE_9__ time_base; } ;
struct TYPE_13__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_12__ {TYPE_9__ time_base; int frame_rate; int sample_aspect_ratio; int h; int w; TYPE_3__* src; } ;
struct TYPE_11__ {TYPE_4__ fs; } ;
typedef TYPE_1__ SSIMContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_9__,TYPE_9__) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    SSIMContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_2->inputs[0];
    int VAR_5;

    VAR_5 = FUNC_3(&VAR_3->fs, VAR_2);
    if (VAR_5 < 0)
        return VAR_5;
    VAR_1->w = VAR_4->w;
    VAR_1->h = VAR_4->h;
    VAR_1->time_base = VAR_4->time_base;
    VAR_1->sample_aspect_ratio = VAR_4->sample_aspect_ratio;
    VAR_1->frame_rate = VAR_4->frame_rate;

    if ((VAR_5 = FUNC_2(&VAR_3->fs)) < 0)
        return VAR_5;

    VAR_1->time_base = VAR_3->fs.time_base;

    if (FUNC_0(VAR_4->time_base, VAR_1->time_base) &&
        FUNC_0(VAR_2->inputs[1]->time_base, VAR_1->time_base))
        FUNC_1(VAR_2, VAR_0, "not matching timebases found between first input: %d/%d and second input %d/%d, results may be incorrect!\n",
               VAR_4->time_base.num, VAR_4->time_base.den,
               VAR_2->inputs[1]->time_base.num, VAR_2->inputs[1]->time_base.den);

    return 0;
}
