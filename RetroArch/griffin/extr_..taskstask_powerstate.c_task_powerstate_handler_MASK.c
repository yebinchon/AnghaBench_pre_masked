
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_10__ {int percent; int state; } ;
typedef TYPE_2__ powerstate_t ;
struct TYPE_11__ {int (* get_powerstate ) (int*,int *) ;} ;
typedef TYPE_3__ frontend_ctx_driver_t ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(retro_task_t *VAR_0)
{
   const frontend_ctx_driver_t *VAR_1 = FUNC_0();
   powerstate_t *VAR_2 = (powerstate_t*)VAR_0->state;

   if (VAR_1 && VAR_1->get_powerstate)
   {
      int VAR_3 = 0;
      VAR_2->state = VAR_1->get_powerstate(
            &VAR_3, &VAR_2->percent);
   }

   FUNC_2(VAR_0, VAR_2);
   FUNC_3(VAR_0, 1);
}
