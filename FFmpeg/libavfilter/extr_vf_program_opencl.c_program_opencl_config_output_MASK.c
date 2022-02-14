
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* in; int * on_event; TYPE_1__* opaque; } ;
struct TYPE_13__ {TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_12__ {int time_base; TYPE_4__* src; } ;
struct TYPE_11__ {int sync; int after; int before; int time_base; } ;
struct TYPE_10__ {scalar_t__ nb_inputs; int source_rate; TYPE_7__ fs; } ;
typedef TYPE_1__ ProgramOpenCLContext ;
typedef TYPE_2__ FFFrameSyncIn ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->src;
    ProgramOpenCLContext *VAR_5 = VAR_4->priv;
    int VAR_6;

    VAR_6 = FUNC_3(VAR_3);
    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_5->nb_inputs > 0) {
        FFFrameSyncIn *VAR_7;
        int VAR_8;

        VAR_6 = FUNC_2(&VAR_5->fs, VAR_4, VAR_5->nb_inputs);
        if (VAR_6 < 0)
            return VAR_6;

        VAR_5->fs.opaque = VAR_5;
        VAR_5->fs.on_event = &VAR_2;

        VAR_7 = VAR_5->fs.in;
        for (VAR_8 = 0; VAR_8 < VAR_5->nb_inputs; VAR_8++) {
            const AVFilterLink *VAR_9 = VAR_4->inputs[VAR_8];

            VAR_7[VAR_8].time_base = VAR_9->time_base;
            VAR_7[VAR_8].sync = 1;
            VAR_7[VAR_8].before = VAR_1;
            VAR_7[VAR_8].after = VAR_0;
        }

        VAR_6 = FUNC_1(&VAR_5->fs);
        if (VAR_6 < 0)
            return VAR_6;

    } else {
        VAR_3->time_base = FUNC_0(VAR_5->source_rate);
    }

    return 0;
}
