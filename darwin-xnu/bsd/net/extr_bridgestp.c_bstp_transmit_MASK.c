
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {scalar_t__ bs_running; scalar_t__ bs_txholdcount; } ;
struct TYPE_2__ {scalar_t__ active; } ;
struct bstp_port {scalar_t__ bp_txcount; scalar_t__ bp_protover; int bp_role; int bp_flags; int bp_desg_htime; TYPE_1__ bp_hello_timer; scalar_t__ bp_tc_ack; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_3 (struct bstp_state*,struct bstp_port*) ;

__attribute__((used)) static void
FUNC_4(struct bstp_state *VAR_2, struct bstp_port *VAR_3)
{
 if (VAR_2->bs_running == 0)
  return;





 if (VAR_3->bp_hello_timer.active == 0) {

  FUNC_0(VAR_2, VAR_3);
  return;
 }
 if (VAR_3->bp_txcount > VAR_2->bs_txholdcount)

  return;

 if (VAR_3->bp_protover == VAR_1) {
  FUNC_2(VAR_2, VAR_3);
  VAR_3->bp_tc_ack = 0;
 } else {
  switch (VAR_3->bp_role) {
   case 129:
    FUNC_2(VAR_2, VAR_3);
    VAR_3->bp_tc_ack = 0;
    break;

   case 128:
    FUNC_3(VAR_2, VAR_3);
    break;
  }
 }
 FUNC_1(&VAR_3->bp_hello_timer, VAR_3->bp_desg_htime);
 VAR_3->bp_flags &= ~VAR_0;
}
