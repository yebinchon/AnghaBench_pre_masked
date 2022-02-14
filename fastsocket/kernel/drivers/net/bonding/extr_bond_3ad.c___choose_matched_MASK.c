
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {scalar_t__ actor_port_number; scalar_t__ actor_port_priority; scalar_t__ actor_system_priority; scalar_t__ actor_oper_port_key; int actor_oper_port_state; int sm_vars; int actor_system; } ;
struct lacpdu {int partner_state; int actor_state; int partner_key; int partner_system_priority; int partner_system; int partner_port_priority; int partner_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct lacpdu *VAR_2, struct port *VAR_3)
{

 if (((FUNC_1(VAR_2->partner_port) == VAR_3->actor_port_number) &&
      (FUNC_1(VAR_2->partner_port_priority) == VAR_3->actor_port_priority) &&
      !FUNC_0(&(VAR_2->partner_system), &(VAR_3->actor_system)) &&
      (FUNC_1(VAR_2->partner_system_priority) == VAR_3->actor_system_priority) &&
      (FUNC_1(VAR_2->partner_key) == VAR_3->actor_oper_port_key) &&
      ((VAR_2->partner_state & VAR_1) == (VAR_3->actor_oper_port_state & VAR_1))) ||

     ((VAR_2->actor_state & VAR_1) == 0)
  ) {

  VAR_3->sm_vars |= VAR_0;
 } else {
  VAR_3->sm_vars &= ~VAR_0;
 }
}
