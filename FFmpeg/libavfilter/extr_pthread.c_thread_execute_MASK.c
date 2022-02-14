
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int avfilter_action_func ;
struct TYPE_8__ {int* rets; int thread; int * func; void* arg; TYPE_4__* ctx; } ;
typedef TYPE_3__ ThreadContext ;
struct TYPE_9__ {TYPE_2__* graph; } ;
struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_6__ {TYPE_3__* thread; } ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, avfilter_action_func *VAR_1,
                          void *VAR_2, int *VAR_3, int VAR_4)
{
    ThreadContext *VAR_5 = VAR_0->graph->internal->thread;

    if (VAR_4 <= 0)
        return 0;
    VAR_5->ctx = VAR_0;
    VAR_5->arg = VAR_2;
    VAR_5->func = VAR_1;
    VAR_5->rets = VAR_3;

    FUNC_0(VAR_5->thread, VAR_4, 0);
    return 0;
}
