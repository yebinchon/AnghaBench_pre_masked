
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mute; int callback; int handler; int * state; int type; } ;
typedef TYPE_1__ retro_task_t ;
typedef int powerstate_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(void)
{
   retro_task_t *VAR_3 = FUNC_2();
   powerstate_t *VAR_4 = ((void*)0);

   if (!VAR_3)
      return;
   VAR_4 = (powerstate_t*)FUNC_0(1, sizeof(*VAR_4));
   if (!VAR_4)
   {
      FUNC_1(VAR_3);
      return;
   }

   VAR_3->type = VAR_0;
   VAR_3->state = VAR_4;
   VAR_3->handler = VAR_2;
   VAR_3->callback = VAR_1;
   VAR_3->mute = 1;

   FUNC_3(VAR_3);
}
