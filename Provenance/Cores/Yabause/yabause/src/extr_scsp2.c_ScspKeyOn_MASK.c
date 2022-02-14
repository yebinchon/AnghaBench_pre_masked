
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ env_phase; int env_target; int env_step_a; int env_step; int env_counter; scalar_t__ addr_counter; } ;
typedef TYPE_1__ SlotState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(SlotState *VAR_4)
{
   if (VAR_4->env_phase != VAR_3)
      return;

   FUNC_0(VAR_4);

   VAR_4->addr_counter = 0;
   VAR_4->env_phase = VAR_0;
   VAR_4->env_counter = VAR_2;
   VAR_4->env_step = VAR_4->env_step_a;
   VAR_4->env_target = VAR_1;
}
