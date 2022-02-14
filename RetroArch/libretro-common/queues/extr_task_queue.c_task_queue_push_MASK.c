
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* next; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_8__ {int (* push_running ) (TYPE_1__*) ;} ;
struct TYPE_7__ {TYPE_1__* front; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_3 ;

bool FUNC_3(retro_task_t *VAR_4)
{

   if (VAR_4->type == VAR_0)
   {
      retro_task_t *VAR_5 = ((void*)0);
      bool VAR_6 = 0;

      FUNC_0(VAR_2);
      VAR_5 = VAR_3.front;

      for (; VAR_5; VAR_5 = VAR_5->next)
      {
         if (VAR_5->type == VAR_0)
         {
            VAR_6 = 1;
            break;
         }
      }

      FUNC_1(VAR_2);


      if (VAR_6)
         return 0;
   }



   VAR_1->push_running(VAR_4);

   return 1;
}
