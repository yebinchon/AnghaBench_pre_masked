
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sci_base_state_machine {size_t initial_state_id; size_t previous_state_id; size_t current_state_id; struct sci_base_state const* state_table; } ;
struct sci_base_state {int (* enter_state ) (struct sci_base_state_machine*) ;} ;
typedef int (* sci_state_transition_t ) (struct sci_base_state_machine*) ;



void FUNC_0(struct sci_base_state_machine *VAR_0,
   const struct sci_base_state *VAR_1, u32 VAR_2)
{
 sci_state_transition_t VAR_3;

 VAR_0->initial_state_id = VAR_2;
 VAR_0->previous_state_id = VAR_2;
 VAR_0->current_state_id = VAR_2;
 VAR_0->state_table = VAR_1;

 VAR_3 = VAR_0->state_table[VAR_2].enter_state;
 if (VAR_3)
  VAR_3(VAR_0);
}
