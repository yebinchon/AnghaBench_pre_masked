
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_call_group_t ;
struct TYPE_4__ {int idle_waitq; int dealloc_timer; int * delayed_timers; int * delayed_queues; int pending_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(thread_call_group_t VAR_6)
{
 FUNC_0(&VAR_6->pending_queue);
 FUNC_0(&VAR_6->delayed_queues[VAR_2]);
 FUNC_0(&VAR_6->delayed_queues[VAR_3]);


 FUNC_1(&VAR_6->delayed_timers[VAR_2], VAR_5, VAR_6);
 FUNC_1(&VAR_6->delayed_timers[VAR_3], VAR_5, VAR_6);
 FUNC_1(&VAR_6->dealloc_timer, VAR_4, VAR_6);


 FUNC_2(&VAR_6->idle_waitq, VAR_1|VAR_0);
}
