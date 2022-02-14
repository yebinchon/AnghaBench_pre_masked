
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int port_state; } ;
struct port {scalar_t__ sm_mux_state; int sm_vars; int actor_oper_port_state; int ntt; int sm_mux_timer_counter; int actor_port_number; TYPE_2__* aggregator; TYPE_1__ partner_oper; } ;
typedef scalar_t__ mux_states_t ;
struct TYPE_5__ {int is_active; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct port*) ;
 int FUNC_3 (struct port*) ;
 int FUNC_4 (struct port*) ;
 int FUNC_5 (struct port*) ;
 int FUNC_6 (struct port*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct port*) ;
 int FUNC_9 (struct port*) ;
 int FUNC_10 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct port *VAR_9)
{
 mux_states_t VAR_10;


 VAR_10 = VAR_9->sm_mux_state;

 if (VAR_9->sm_vars & VAR_0) {
  VAR_9->sm_mux_state = 129;
 } else {
  switch (VAR_9->sm_mux_state) {
  case 129:
   if ((VAR_9->sm_vars & VAR_3) || (VAR_9->sm_vars & VAR_4)) {
    VAR_9->sm_mux_state = 128;
   }
   break;
  case 128:

   if (!(VAR_9->sm_vars & VAR_3)) {
    VAR_9->sm_vars &= ~VAR_2;


    FUNC_7(VAR_9->aggregator, FUNC_1(VAR_9->aggregator));
    VAR_9->sm_mux_state = 129;
    break;
   }


   if (VAR_9->sm_mux_timer_counter && !(--VAR_9->sm_mux_timer_counter)) {
    VAR_9->sm_vars |= VAR_2;
   }



   FUNC_7(VAR_9->aggregator, FUNC_1(VAR_9->aggregator));


   if ((VAR_9->sm_vars & VAR_1) && !VAR_9->sm_mux_timer_counter) {
    VAR_9->sm_mux_state = 131;
   }
   break;
  case 131:

   if ((VAR_9->sm_vars & VAR_3) && (VAR_9->partner_oper.port_state & VAR_7) && !FUNC_3(VAR_9)) {
    VAR_9->sm_mux_state = 130;
   } else if (!(VAR_9->sm_vars & VAR_3) || (VAR_9->sm_vars & VAR_4)) {
    VAR_9->sm_vars &= ~VAR_2;


    FUNC_7(VAR_9->aggregator, FUNC_1(VAR_9->aggregator));
    VAR_9->sm_mux_state = 129;
   }
   break;
  case 130:
   if (!(VAR_9->sm_vars & VAR_3) || (VAR_9->sm_vars & VAR_4) ||
       !(VAR_9->partner_oper.port_state & VAR_7)
      ) {
    VAR_9->sm_mux_state = 131;

   } else {



    if (VAR_9->aggregator &&
        VAR_9->aggregator->is_active &&
        !FUNC_6(VAR_9)) {

     FUNC_5(VAR_9);
    }
   }
   break;
  default:
   break;
  }
 }


 if (VAR_9->sm_mux_state != VAR_10) {
  FUNC_10("Mux Machine: Port=%d, Last State=%d, Curr State=%d\n", VAR_9->actor_port_number, VAR_10, VAR_9->sm_mux_state);
  switch (VAR_9->sm_mux_state) {
  case 129:
   FUNC_4(VAR_9);
   VAR_9->actor_oper_port_state &= ~VAR_7;
   FUNC_8(VAR_9);
   VAR_9->actor_oper_port_state &= ~VAR_5;
   VAR_9->actor_oper_port_state &= ~VAR_6;
   VAR_9->ntt = 1;
   break;
  case 128:
   VAR_9->sm_mux_timer_counter = FUNC_0(VAR_8, 0);
   break;
  case 131:
   FUNC_2(VAR_9);
   VAR_9->actor_oper_port_state |= VAR_7;
   VAR_9->actor_oper_port_state &= ~VAR_5;
   VAR_9->actor_oper_port_state &= ~VAR_6;
   FUNC_8(VAR_9);
   VAR_9->ntt = 1;
   break;
  case 130:
   VAR_9->actor_oper_port_state |= VAR_5;
   VAR_9->actor_oper_port_state |= VAR_6;
   FUNC_9(VAR_9);
   VAR_9->ntt = 1;
   break;
  default:
   break;
  }
 }
}
