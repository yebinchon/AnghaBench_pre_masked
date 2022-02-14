
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; int command; int arg; } ;
struct TYPE_5__ {TYPE_2__* command_queue; } ;
typedef TYPE_1__ AVFilterContext ;
typedef TYPE_2__ AVFilterCommand ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(AVFilterContext *VAR_0)
{
    AVFilterCommand *VAR_1= VAR_0->command_queue;
    FUNC_1(&VAR_1->arg);
    FUNC_1(&VAR_1->command);
    VAR_0->command_queue= VAR_1->next;
    FUNC_0(VAR_1);
}
