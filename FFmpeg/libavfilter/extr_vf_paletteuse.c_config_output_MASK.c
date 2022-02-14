
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int opt_repeatlast; int on_event; TYPE_1__* in; } ;
struct TYPE_14__ {TYPE_2__** inputs; TYPE_3__* priv; } ;
struct TYPE_13__ {int time_base; int h; int w; TYPE_5__* src; } ;
struct TYPE_12__ {TYPE_6__ fs; } ;
struct TYPE_11__ {int time_base; int h; int w; } ;
struct TYPE_10__ {int after; int before; } ;
typedef TYPE_3__ PaletteUseContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    int VAR_3;
    AVFilterContext *VAR_4 = VAR_2->src;
    PaletteUseContext *VAR_5 = VAR_4->priv;

    VAR_3 = FUNC_1(&VAR_5->fs, VAR_4);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_5->fs.opt_repeatlast = 1;
    VAR_5->fs.in[1].before = VAR_5->fs.in[1].after = VAR_0;
    VAR_5->fs.on_event = VAR_1;

    VAR_2->w = VAR_4->inputs[0]->w;
    VAR_2->h = VAR_4->inputs[0]->h;

    VAR_2->time_base = VAR_4->inputs[0]->time_base;
    if ((VAR_3 = FUNC_0(&VAR_5->fs)) < 0)
        return VAR_3;
    return 0;
}
