
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {scalar_t__ actor_port_number; scalar_t__ actor_port_priority; scalar_t__ actor_system_priority; scalar_t__ actor_oper_port_key; int actor_oper_port_state; int ntt; int actor_system; } ;
struct lacpdu {int partner_state; int partner_key; int partner_system_priority; int partner_system; int partner_port_priority; int partner_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct lacpdu *VAR_4, struct port *VAR_5)
{

 if (VAR_4 && VAR_5) {

  if ((FUNC_1(VAR_4->partner_port) != VAR_5->actor_port_number) ||
      (FUNC_1(VAR_4->partner_port_priority) != VAR_5->actor_port_priority) ||
      FUNC_0(&(VAR_4->partner_system), &(VAR_5->actor_system)) ||
      (FUNC_1(VAR_4->partner_system_priority) != VAR_5->actor_system_priority) ||
      (FUNC_1(VAR_4->partner_key) != VAR_5->actor_oper_port_key) ||
      ((VAR_4->partner_state & VAR_1) != (VAR_5->actor_oper_port_state & VAR_1)) ||
      ((VAR_4->partner_state & VAR_2) != (VAR_5->actor_oper_port_state & VAR_2)) ||
      ((VAR_4->partner_state & VAR_3) != (VAR_5->actor_oper_port_state & VAR_3)) ||
      ((VAR_4->partner_state & VAR_0) != (VAR_5->actor_oper_port_state & VAR_0))
     ) {

   VAR_5->ntt = 1;
  }
 }
}
