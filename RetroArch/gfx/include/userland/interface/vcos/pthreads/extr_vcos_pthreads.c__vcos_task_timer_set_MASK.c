
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VCOS_UNSIGNED ;
struct TYPE_4__ {void (* orig_task_timer_expiration_routine ) (void*) ;int task_timer_created; int task_timer; void* orig_task_timer_context; } ;
typedef TYPE_1__ VCOS_THREAD_T ;
typedef scalar_t__ VCOS_STATUS_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(void (*VAR_2)(void*), void *VAR_3, VCOS_UNSIGNED VAR_4)
{
   VCOS_THREAD_T *VAR_5 = FUNC_1();

   if (VAR_5 == ((void*)0))
      return;

   FUNC_0(VAR_5->orig_task_timer_expiration_routine == ((void*)0));

   if (!VAR_5->task_timer_created)
   {
      VCOS_STATUS_T VAR_6 = FUNC_2(&VAR_5->task_timer, ((void*)0),
                                VAR_1, VAR_5);
      (void)VAR_6;
      FUNC_0(VAR_6 == VAR_0);
      VAR_5->task_timer_created = 1;
   }

   VAR_5->orig_task_timer_expiration_routine = VAR_2;
   VAR_5->orig_task_timer_context = VAR_3;

   FUNC_3(&VAR_5->task_timer, VAR_4);
}
