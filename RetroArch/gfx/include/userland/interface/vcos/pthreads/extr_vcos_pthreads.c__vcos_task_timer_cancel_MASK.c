
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * orig_task_timer_expiration_routine; int task_timer; int task_timer_created; } ;
typedef TYPE_1__ VCOS_THREAD_T ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
   VCOS_THREAD_T *VAR_0 = FUNC_0();

   if (VAR_0 == ((void*)0) || !VAR_0->task_timer_created)
     return;

   FUNC_1(&VAR_0->task_timer);
   VAR_0->orig_task_timer_expiration_routine = ((void*)0);
}
