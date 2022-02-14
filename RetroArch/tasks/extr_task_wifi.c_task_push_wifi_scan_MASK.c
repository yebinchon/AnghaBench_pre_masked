
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int title; int callback; int handler; int * state; int type; } ;
typedef TYPE_1__ retro_task_t ;
typedef int retro_task_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;

bool FUNC_4(retro_task_callback_t VAR_3)
{
   retro_task_t *VAR_4 = FUNC_2();

   if (!VAR_4)
      return 0;



   VAR_4->type = VAR_1;
   VAR_4->state = ((void*)0);
   VAR_4->handler = VAR_2;
   VAR_4->callback = VAR_3;
   VAR_4->title = FUNC_1(FUNC_0(
                           VAR_0));

   FUNC_3(VAR_4);

   return 1;
}
