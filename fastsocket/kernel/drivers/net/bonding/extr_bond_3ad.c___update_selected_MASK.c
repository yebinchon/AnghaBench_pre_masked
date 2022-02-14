
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_params {scalar_t__ port_number; scalar_t__ port_priority; scalar_t__ system_priority; scalar_t__ key; int port_state; int system; } ;
struct port {int sm_vars; struct port_params partner_oper; } ;
struct lacpdu {int actor_state; int actor_key; int actor_system_priority; int actor_system; int actor_port_priority; int actor_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct lacpdu *VAR_2, struct port *VAR_3)
{
 if (VAR_2 && VAR_3) {
  const struct port_params *VAR_4 = &VAR_3->partner_oper;


  if (FUNC_1(VAR_2->actor_port) != VAR_4->port_number
      || FUNC_1(VAR_2->actor_port_priority) != VAR_4->port_priority
      || FUNC_0(&VAR_2->actor_system, &VAR_4->system)
      || FUNC_1(VAR_2->actor_system_priority) != VAR_4->system_priority
      || FUNC_1(VAR_2->actor_key) != VAR_4->key
      || (VAR_2->actor_state & VAR_1) != (VAR_4->port_state & VAR_1)) {

   VAR_3->sm_vars &= ~VAR_0;
  }
 }
}
