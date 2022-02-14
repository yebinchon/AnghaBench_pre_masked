
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sequence {scalar_t__ length; } ;
struct latencyTimeSeries {int idx; scalar_t__ max; TYPE_1__* samples; } ;
typedef int sds ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ time; scalar_t__ latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sequence* FUNC_0 () ;
 int FUNC_1 (struct sequence*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int ,struct sequence*,int,int,int ) ;
 int FUNC_7 (struct sequence*,scalar_t__,char*) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (char*) ;

sds FUNC_10(char *VAR_3, struct latencyTimeSeries *VAR_4) {
    int VAR_5;
    struct sequence *VAR_6 = FUNC_0();
    sds VAR_7 = FUNC_4();
    uint32_t VAR_8 = 0, VAR_9 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        int VAR_10 = (VAR_4->idx + VAR_5) % VAR_1;
        int VAR_11;
        char *VAR_12;
        char VAR_13[64];

        if (VAR_4->samples[VAR_10].time == 0) continue;

        if (VAR_6->length == 0) {
            VAR_8 = VAR_9 = VAR_4->samples[VAR_10].latency;
        } else {
            if (VAR_4->samples[VAR_10].latency > VAR_9) VAR_9 = VAR_4->samples[VAR_10].latency;
            if (VAR_4->samples[VAR_10].latency < VAR_8) VAR_8 = VAR_4->samples[VAR_10].latency;
        }


        VAR_11 = FUNC_8(((void*)0)) - VAR_4->samples[VAR_10].time;
        if (VAR_11 < 60)
            FUNC_5(VAR_13,sizeof(VAR_13),"%ds",VAR_11);
        else if (VAR_11 < 3600)
            FUNC_5(VAR_13,sizeof(VAR_13),"%dm",VAR_11/60);
        else if (VAR_11 < 3600*24)
            FUNC_5(VAR_13,sizeof(VAR_13),"%dh",VAR_11/3600);
        else
            FUNC_5(VAR_13,sizeof(VAR_13),"%dd",VAR_11/(3600*24));
        VAR_12 = FUNC_9(VAR_13);
        FUNC_7(VAR_6,VAR_4->samples[VAR_10].latency,VAR_12);
    }

    VAR_7 = FUNC_3(VAR_7,
        "%s - high %lu ms, low %lu ms (all time high %lu ms)\n", VAR_3,
        (unsigned long) VAR_9, (unsigned long) VAR_8, (unsigned long) VAR_4->max);
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        VAR_7 = FUNC_2(VAR_7,"-",1);
    VAR_7 = FUNC_2(VAR_7,"\n",1);
    VAR_7 = FUNC_6(VAR_7,VAR_6,VAR_0,4,VAR_2);
    FUNC_1(VAR_6);
    return VAR_7;
}
