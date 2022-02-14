
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int buf ;
struct TYPE_16__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_15__ {int type; TYPE_6__* dst; int graph; int time_base; } ;
struct TYPE_14__ {scalar_t__ pts; } ;
struct TYPE_13__ {int flags; int index; int arg; int command; int target; } ;
struct TYPE_12__ {int enabled; int nb_commands; TYPE_3__* commands; scalar_t__ end_ts; scalar_t__ start_ts; int index; } ;
struct TYPE_11__ {int nb_intervals; TYPE_2__* intervals; } ;
typedef TYPE_1__ SendCmdContext ;
typedef TYPE_2__ Interval ;
typedef TYPE_3__ Command ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,int ,char*,int ,int ,...) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,char*,int,int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_7, AVFrame *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_7->dst;
    SendCmdContext *VAR_10 = VAR_9->priv;
    int64_t VAR_11;
    int VAR_12, VAR_13, VAR_14;

    if (VAR_8->pts == VAR_2)
        goto end;

    VAR_11 = FUNC_4(VAR_8->pts, VAR_7->time_base, VAR_3);



    for (VAR_12 = 0; VAR_12 < VAR_10->nb_intervals; VAR_12++) {
        Interval *VAR_15 = &VAR_10->intervals[VAR_12];
        int VAR_16 = 0;

        if (!VAR_15->enabled && ((VAR_11) >= (VAR_15->start_ts) && (VAR_11) < (VAR_15->end_ts))) {
            VAR_16 += VAR_4;
            VAR_15->enabled = 1;
        }
        if (VAR_15->enabled && !((VAR_11) >= (VAR_15->start_ts) && (VAR_11) < (VAR_15->end_ts))) {
            VAR_16 += VAR_5;
            VAR_15->enabled = 0;
        }

        if (VAR_16) {
            AVBPrint VAR_17;
            FUNC_3(VAR_9, VAR_1,
                   "[%s] interval #%d start_ts:%f end_ts:%f ts:%f\n",
                   FUNC_7(&VAR_17, VAR_16), VAR_15->index,
                   (double)VAR_15->start_ts/1000000, (double)VAR_15->end_ts/1000000,
                   (double)VAR_11/1000000);

            for (VAR_13 = 0; VAR_16 && VAR_13 < VAR_15->nb_commands; VAR_13++) {
                Command *VAR_18 = &VAR_15->commands[VAR_13];
                char VAR_19[1024];

                if (VAR_18->flags & VAR_16) {
                    FUNC_3(VAR_9, VAR_1,
                           "Processing command #%d target:%s command:%s arg:%s\n",
                           VAR_18->index, VAR_18->target, VAR_18->command, VAR_18->arg);
                    VAR_14 = FUNC_5(VAR_7->graph,
                                                      VAR_18->target, VAR_18->command, VAR_18->arg,
                                                      VAR_19, sizeof(VAR_19),
                                                      VAR_0);
                    FUNC_3(VAR_9, VAR_1,
                           "Command reply for command #%d: ret:%s res:%s\n",
                           VAR_18->index, FUNC_2(VAR_14), VAR_19);
                }
            }
        }
    }

end:
    switch (VAR_7->type) {
    case 128:
    case 129:
        return FUNC_6(VAR_7->dst->outputs[0], VAR_8);
    }

    return FUNC_0(VAR_6);
}
