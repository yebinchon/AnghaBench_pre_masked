
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* front; } ;
typedef TYPE_1__ task_queue_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ retro_task_t ;



__attribute__((used)) static retro_task_t *FUNC_0(task_queue_t *VAR_0)
{
   retro_task_t *VAR_1 = VAR_0->front;

   if (VAR_1)
   {
      VAR_0->front = VAR_1->next;
      VAR_1->next = ((void*)0);
   }

   return VAR_1;
}
