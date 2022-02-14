
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_params {int port_state; void* key; void* system_priority; int system; void* port_priority; void* port_number; } ;
struct port {int sm_vars; int actor_oper_port_state; struct port_params partner_oper; } ;
struct lacpdu {int actor_state; int actor_key; int actor_system_priority; int actor_system; int actor_port_priority; int actor_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lacpdu*,struct port*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct lacpdu *VAR_3, struct port *VAR_4)
{
 if (VAR_3 && VAR_4) {
  struct port_params *VAR_5 = &VAR_4->partner_oper;

  FUNC_0(VAR_3, VAR_4);

  VAR_5->port_number = FUNC_1(VAR_3->actor_port);
  VAR_5->port_priority = FUNC_1(VAR_3->actor_port_priority);
  VAR_5->system = VAR_3->actor_system;
  VAR_5->system_priority = FUNC_1(VAR_3->actor_system_priority);
  VAR_5->key = FUNC_1(VAR_3->actor_key);
  VAR_5->port_state = VAR_3->actor_state;


  VAR_4->actor_oper_port_state &= ~VAR_1;


  if ((VAR_4->sm_vars & VAR_0) && (VAR_3->actor_state & VAR_2)) {
   VAR_5->port_state |= VAR_2;
  } else {
   VAR_5->port_state &= ~VAR_2;
  }
 }
}
