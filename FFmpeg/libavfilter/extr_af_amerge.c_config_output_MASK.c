
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {int nb_inputs; int bps; } ;
struct TYPE_16__ {int str; } ;
struct TYPE_15__ {TYPE_2__** outputs; TYPE_1__** inputs; TYPE_6__* priv; } ;
struct TYPE_14__ {scalar_t__ sample_rate; int time_base; TYPE_4__* src; } ;
struct TYPE_13__ {int channel_layout; int format; } ;
struct TYPE_12__ {scalar_t__ sample_rate; int channel_layout; int time_base; } ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;
typedef TYPE_5__ AVBPrint ;
typedef TYPE_6__ AMergeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,int,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int FUNC_3 (TYPE_5__*,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    AMergeContext *VAR_6 = VAR_5->priv;
    AVBPrint VAR_7;
    int VAR_8;

    for (VAR_8 = 1; VAR_8 < VAR_6->nb_inputs; VAR_8++) {
        if (VAR_5->inputs[VAR_8]->sample_rate != VAR_5->inputs[0]->sample_rate) {
            FUNC_5(VAR_5, VAR_1,
                   "Inputs must have the same sample rate "
                   "%d for in%d vs %d\n",
                   VAR_5->inputs[VAR_8]->sample_rate, VAR_8, VAR_5->inputs[0]->sample_rate);
            return FUNC_0(VAR_3);
        }
    }
    VAR_6->bps = FUNC_4(VAR_5->outputs[0]->format);
    VAR_4->sample_rate = VAR_5->inputs[0]->sample_rate;
    VAR_4->time_base = VAR_5->inputs[0]->time_base;

    FUNC_2(&VAR_7, 0, VAR_0);
    for (VAR_8 = 0; VAR_8 < VAR_6->nb_inputs; VAR_8++) {
        FUNC_3(&VAR_7, "%sin%d:", VAR_8 ? " + " : "", VAR_8);
        FUNC_1(&VAR_7, -1, VAR_5->inputs[VAR_8]->channel_layout);
    }
    FUNC_3(&VAR_7, " -> out:");
    FUNC_1(&VAR_7, -1, VAR_5->outputs[0]->channel_layout);
    FUNC_5(VAR_5, VAR_2, "%s\n", VAR_7.str);

    return 0;
}
