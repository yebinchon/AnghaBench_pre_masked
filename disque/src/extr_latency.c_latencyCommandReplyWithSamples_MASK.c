
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct latencyTimeSeries {int idx; TYPE_1__* samples; } ;
typedef int client ;
struct TYPE_2__ {scalar_t__ time; scalar_t__ latency; } ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,void*,int) ;

void FUNC_4(client *VAR_1, struct latencyTimeSeries *VAR_2) {
    void *VAR_3 = FUNC_0(VAR_1);
    int VAR_4 = 0, VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        int VAR_6 = (VAR_2->idx + VAR_5) % VAR_0;

        if (VAR_2->samples[VAR_6].time == 0) continue;
        FUNC_2(VAR_1,2);
        FUNC_1(VAR_1,VAR_2->samples[VAR_6].time);
        FUNC_1(VAR_1,VAR_2->samples[VAR_6].latency);
        VAR_4++;
    }
    FUNC_3(VAR_1,VAR_3,VAR_4);
}
