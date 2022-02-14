
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_base_state_machine {int current_state_id; } ;
struct isci_port {int ready_exit; struct sci_base_state_machine sm; } ;
typedef enum sci_port_states { ____Placeholder_sci_port_states } sci_port_states ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sci_base_state_machine*,int) ;

__attribute__((used)) static void FUNC_2(struct isci_port *VAR_0,
          enum sci_port_states VAR_1)
{
 struct sci_base_state_machine *VAR_2 = &VAR_0->sm;
 enum sci_port_states VAR_3 = VAR_2->current_state_id;

 if (FUNC_0(VAR_3) && !FUNC_0(VAR_1))
  VAR_0->ready_exit = 1;

 FUNC_1(VAR_2, VAR_1);
 VAR_0->ready_exit = 0;
}
