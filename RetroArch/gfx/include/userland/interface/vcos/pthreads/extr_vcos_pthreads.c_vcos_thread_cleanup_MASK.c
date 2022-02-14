
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int task_timer; scalar_t__ task_timer_created; int suspend; } ;
typedef TYPE_1__ VCOS_THREAD_T ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(VCOS_THREAD_T *VAR_0)
{
   FUNC_0(&VAR_0->suspend);
   if (VAR_0->task_timer_created)
   {
      FUNC_1(&VAR_0->task_timer);
   }
}
