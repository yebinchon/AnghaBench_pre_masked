
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_params {scalar_t__ port_number; scalar_t__ port_priority; scalar_t__ system_priority; scalar_t__ key; int port_state; int system; } ;
struct port {int sm_vars; struct port_params partner_oper; struct port_params partner_admin; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct port *VAR_2)
{
 if (VAR_2) {
  const struct port_params *VAR_3 = &VAR_2->partner_admin;
  const struct port_params *VAR_4 = &VAR_2->partner_oper;


  if (VAR_3->port_number != VAR_4->port_number
      || VAR_3->port_priority != VAR_4->port_priority
      || FUNC_0(&VAR_3->system, &VAR_4->system)
      || VAR_3->system_priority != VAR_4->system_priority
      || VAR_3->key != VAR_4->key
      || (VAR_3->port_state & VAR_1)
   != (VAR_4->port_state & VAR_1)) {

   VAR_2->sm_vars &= ~VAR_0;
  }
 }
}
