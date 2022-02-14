
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ retro_task_t ;
typedef scalar_t__ (* retro_task_finder_t ) (TYPE_1__*,void*) ;
struct TYPE_6__ {TYPE_1__* front; } ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(retro_task_finder_t VAR_1, void *VAR_2)
{
   retro_task_t *VAR_3 = VAR_0.front;

   for (; VAR_3; VAR_3 = VAR_3->next)
   {
      if (VAR_1(VAR_3, VAR_2))
         return 1;
   }

   return 0;
}
