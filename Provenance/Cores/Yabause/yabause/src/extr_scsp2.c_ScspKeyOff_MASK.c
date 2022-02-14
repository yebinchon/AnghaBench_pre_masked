
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ env_phase; void* env_counter; void* env_target; int env_step_r; int env_step; } ;
typedef TYPE_1__ SlotState ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(SlotState *VAR_3)
{
   if (VAR_3->env_phase == VAR_2)
      return;


   if (VAR_3->env_phase == VAR_0)
      VAR_3->env_counter = VAR_1 - VAR_3->env_counter;

   VAR_3->env_phase = VAR_2;
   VAR_3->env_step = VAR_3->env_step_r;
   VAR_3->env_target = VAR_1;
}
