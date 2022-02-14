
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* command_queue; } ;
struct TYPE_11__ {int time; int flags; int arg; int command; } ;
struct TYPE_10__ {TYPE_6__* dst; int time_base; } ;
struct TYPE_9__ {int pts; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterCommand ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,char*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;

int FUNC_4(AVFilterLink *VAR_1, const AVFrame *VAR_2)
{
    AVFilterCommand *VAR_3 = VAR_1->dst->command_queue;

    while(VAR_3 && VAR_3->time <= VAR_2->pts * FUNC_1(VAR_1->time_base)){
        FUNC_0(VAR_1->dst, VAR_0,
               "Processing command time:%f command:%s arg:%s\n",
               VAR_3->time, VAR_3->command, VAR_3->arg);
        FUNC_2(VAR_1->dst, VAR_3->command, VAR_3->arg, 0, 0, VAR_3->flags);
        FUNC_3(VAR_1->dst);
        VAR_3= VAR_1->dst->command_queue;
    }
    return 0;
}
