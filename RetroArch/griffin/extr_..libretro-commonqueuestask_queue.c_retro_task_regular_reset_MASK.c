
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cancelled; struct TYPE_3__* next; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_4__ {TYPE_1__* front; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
   retro_task_t *VAR_1 = VAR_0.front;

   for (; VAR_1; VAR_1 = VAR_1->next)
      VAR_1->cancelled = 1;
}
