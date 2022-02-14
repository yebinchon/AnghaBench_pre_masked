
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sci_base_state_machine {size_t current_state_id; size_t previous_state_id; TYPE_1__* state_table; } ;
typedef int (* sci_state_transition_t ) (struct sci_base_state_machine*) ;
struct TYPE_2__ {int (* enter_state ) (struct sci_base_state_machine*) ;int (* exit_state ) (struct sci_base_state_machine*) ;} ;



void FUNC_0(struct sci_base_state_machine *VAR_0, u32 VAR_1)
{
 sci_state_transition_t VAR_2;

 VAR_2 = VAR_0->state_table[VAR_0->current_state_id].exit_state;
 if (VAR_2)
  VAR_2(VAR_0);

 VAR_0->previous_state_id = VAR_0->current_state_id;
 VAR_0->current_state_id = VAR_1;

 VAR_2 = VAR_0->state_table[VAR_0->current_state_id].enter_state;
 if (VAR_2)
  VAR_2(VAR_0);
}
