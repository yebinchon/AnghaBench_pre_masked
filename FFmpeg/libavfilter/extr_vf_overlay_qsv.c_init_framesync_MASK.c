
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* in; TYPE_2__* opaque; int on_event; } ;
struct TYPE_12__ {int nb_inputs; TYPE_1__** inputs; TYPE_2__* priv; } ;
struct TYPE_11__ {int sync; int time_base; int after; int before; } ;
struct TYPE_10__ {TYPE_6__ fs; } ;
struct TYPE_9__ {int time_base; } ;
typedef TYPE_2__ QSVOverlayContext ;
typedef TYPE_3__ FFFrameSyncIn ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_4__*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_3)
{
    QSVOverlayContext *VAR_4 = VAR_3->priv;
    int VAR_5, VAR_6;

    VAR_4->fs.on_event = VAR_2;
    VAR_4->fs.opaque = VAR_4;
    VAR_5 = FUNC_1(&VAR_4->fs, VAR_3, VAR_3->nb_inputs);
    if (VAR_5 < 0)
        return VAR_5;

    for (VAR_6 = 0; VAR_6 < VAR_3->nb_inputs; VAR_6++) {
        FFFrameSyncIn *VAR_7 = &VAR_4->fs.in[VAR_6];
        VAR_7->before = VAR_1;
        VAR_7->after = VAR_0;
        VAR_7->sync = VAR_6 ? 1 : 2;
        VAR_7->time_base = VAR_3->inputs[VAR_6]->time_base;
    }

    return FUNC_0(&VAR_4->fs);
}
