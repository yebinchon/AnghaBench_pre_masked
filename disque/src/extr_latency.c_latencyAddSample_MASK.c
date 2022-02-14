
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct latencyTimeSeries {int idx; scalar_t__ max; TYPE_2__* samples; } ;
typedef scalar_t__ mstime_t ;
struct TYPE_4__ {scalar_t__ time; scalar_t__ latency; } ;
struct TYPE_3__ {int latency_events; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct latencyTimeSeries*) ;
 struct latencyTimeSeries* FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 struct latencyTimeSeries* FUNC_4 (int) ;
 int FUNC_5 (char*) ;

void FUNC_6(char *VAR_2, mstime_t VAR_3) {
    struct latencyTimeSeries *VAR_4 = FUNC_1(VAR_1.latency_events,VAR_2);
    time_t VAR_5 = FUNC_3(((void*)0));
    int VAR_6;


    if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_4(sizeof(*VAR_4));
        VAR_4->idx = 0;
        VAR_4->max = 0;
        FUNC_2(VAR_4->samples,0,sizeof(VAR_4->samples));
        FUNC_0(VAR_1.latency_events,FUNC_5(VAR_2),VAR_4);
    }



    VAR_6 = (VAR_4->idx + VAR_0 - 1) % VAR_0;
    if (VAR_4->samples[VAR_6].time == VAR_5) {
        if (VAR_3 > VAR_4->samples[VAR_6].latency)
            VAR_4->samples[VAR_6].latency = VAR_3;
        return;
    }

    VAR_4->samples[VAR_4->idx].time = FUNC_3(((void*)0));
    VAR_4->samples[VAR_4->idx].latency = VAR_3;
    if (VAR_3 > VAR_4->max) VAR_4->max = VAR_3;

    VAR_4->idx++;
    if (VAR_4->idx == VAR_0) VAR_4->idx = 0;
}
