
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {scalar_t__ type; void* sample_rate; int src; TYPE_5__ frame_rate; TYPE_5__ time_base; TYPE_3__* dst; } ;
struct TYPE_6__ {scalar_t__ type; void** var_values; } ;
typedef TYPE_1__ SetPTSContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 void* FUNC_0 () ;
 int FUNC_1 (int ,int ,char*,void*,void*,void*) ;
 void* FUNC_2 (TYPE_5__) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_9)
{
    AVFilterContext *VAR_10 = VAR_9->dst;
    SetPTSContext *VAR_11 = VAR_10->priv;

    VAR_11->type = VAR_9->type;
    VAR_11->var_values[VAR_8] = FUNC_2(VAR_9->time_base);
    VAR_11->var_values[VAR_5] = FUNC_0();

    VAR_11->var_values[VAR_7] =
    VAR_11->var_values[VAR_6] =
        VAR_11->type == VAR_0 ? VAR_9->sample_rate : VAR_2;

    VAR_11->var_values[VAR_4] =
    VAR_11->var_values[VAR_3] = VAR_9->frame_rate.num &&
                                         VAR_9->frame_rate.den ?
                                            FUNC_2(VAR_9->frame_rate) : VAR_2;

    FUNC_1(VAR_9->src, VAR_1, "TB:%f FRAME_RATE:%f SAMPLE_RATE:%f\n",
           VAR_11->var_values[VAR_8],
           VAR_11->var_values[VAR_4],
           VAR_11->var_values[VAR_6]);
    return 0;
}
