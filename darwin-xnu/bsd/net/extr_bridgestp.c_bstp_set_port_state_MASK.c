
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_port {int bp_state; int bp_statetask; int bp_forward_transitions; int bp_forward_delay_timer; TYPE_1__* bp_ifp; int bp_desg_fdelay; int bp_desg_htime; int bp_protover; } ;
struct TYPE_2__ {int if_xname; } ;





 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct bstp_port *VAR_1, int VAR_2)
{
 if (VAR_1->bp_state == VAR_2)
  return;

 VAR_1->bp_state = VAR_2;

 switch (VAR_1->bp_state) {
  case 130:
   FUNC_0("state changed to DISCARDING on %s\n",
       VAR_1->bp_ifp->if_xname);
   break;

  case 128:
   FUNC_0("state changed to LEARNING on %s\n",
       VAR_1->bp_ifp->if_xname);

   FUNC_2(&VAR_1->bp_forward_delay_timer,
       VAR_1->bp_protover == VAR_0 ?
       VAR_1->bp_desg_htime : VAR_1->bp_desg_fdelay);
   break;

  case 129:
   FUNC_0("state changed to FORWARDING on %s\n",
       VAR_1->bp_ifp->if_xname);

   FUNC_3(&VAR_1->bp_forward_delay_timer);

   VAR_1->bp_forward_transitions++;
   break;
 }


 FUNC_1(&VAR_1->bp_statetask);
}
