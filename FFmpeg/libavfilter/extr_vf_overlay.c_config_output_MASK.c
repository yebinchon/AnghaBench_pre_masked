
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_9__ {int time_base; int h; int w; TYPE_4__* src; } ;
struct TYPE_8__ {int fs; } ;
struct TYPE_7__ {int time_base; int h; int w; } ;
typedef TYPE_2__ OverlayContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    OverlayContext *VAR_3 = VAR_2->priv;
    int VAR_4;

    if ((VAR_4 = FUNC_1(&VAR_3->fs, VAR_2)) < 0)
        return VAR_4;

    VAR_1->w = VAR_2->inputs[VAR_0]->w;
    VAR_1->h = VAR_2->inputs[VAR_0]->h;
    VAR_1->time_base = VAR_2->inputs[VAR_0]->time_base;

    return FUNC_0(&VAR_3->fs);
}
