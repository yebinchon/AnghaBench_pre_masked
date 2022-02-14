
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* orig_task_timer_expiration_routine ) (int ) ;int orig_task_timer_context; } ;
typedef TYPE_1__ VCOS_THREAD_T ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (int )) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   VCOS_THREAD_T *VAR_1 = (VCOS_THREAD_T *)VAR_0;

   FUNC_1(VAR_1->orig_task_timer_expiration_routine);
   VAR_1->orig_task_timer_expiration_routine(VAR_1->orig_task_timer_context);
   VAR_1->orig_task_timer_expiration_routine = ((void*)0);
}
