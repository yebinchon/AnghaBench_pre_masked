
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bstp_state {scalar_t__ bs_allsynced; } ;
struct bstp_port {int bp_role; int bp_desg_max_age; int bp_desg_htime; int bp_desg_fdelay; int bp_synced; int bp_agree; int bp_hello_timer; TYPE_1__* bp_ifp; scalar_t__ bp_proposing; int bp_recent_root_timer; int bp_reroot; int bp_sync; int bp_forward_delay_timer; int bp_recent_backup_timer; struct bstp_state* bp_bs; } ;
struct TYPE_2__ {int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bstp_port*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bstp_port*) ;

__attribute__((used)) static void
FUNC_6(struct bstp_port *VAR_2, int VAR_3)
{
 struct bstp_state *VAR_4 = VAR_2->bp_bs;

 if (VAR_2->bp_role == VAR_3)
  return;


 switch (VAR_2->bp_role) {
  case 129:
   FUNC_3(&VAR_2->bp_forward_delay_timer,
       VAR_2->bp_desg_max_age);
   break;

  case 131:
   FUNC_3(&VAR_2->bp_recent_backup_timer,
       VAR_2->bp_desg_htime * 2);

  case 132:
   FUNC_3(&VAR_2->bp_forward_delay_timer,
       VAR_2->bp_desg_fdelay);
   VAR_2->bp_sync = 0;
   VAR_2->bp_synced = 1;
   VAR_2->bp_reroot = 0;
   break;

  case 128:
   FUNC_3(&VAR_2->bp_recent_root_timer,
       VAR_0);
   break;
 }

 VAR_2->bp_role = VAR_3;

 VAR_2->bp_proposing = 0;
 VAR_4->bs_allsynced = 0;


 switch (VAR_2->bp_role) {
  case 129:
  case 132:
  case 131:
   FUNC_0("%s role -> ALT/BACK/DISABLED\n",
       VAR_2->bp_ifp->if_xname);
   FUNC_1(VAR_2, VAR_1);
   FUNC_4(&VAR_2->bp_recent_root_timer);
   FUNC_2(&VAR_2->bp_forward_delay_timer);
   VAR_2->bp_sync = 0;
   VAR_2->bp_synced = 1;
   VAR_2->bp_reroot = 0;
   break;

  case 128:
   FUNC_0("%s role -> ROOT\n",
       VAR_2->bp_ifp->if_xname);
   FUNC_1(VAR_2, VAR_1);
   FUNC_2(&VAR_2->bp_recent_root_timer);
   VAR_2->bp_proposing = 0;
   break;

  case 130:
   FUNC_0("%s role -> DESIGNATED\n",
       VAR_2->bp_ifp->if_xname);
   FUNC_3(&VAR_2->bp_hello_timer,
       VAR_2->bp_desg_htime);
   VAR_2->bp_agree = 0;
   break;
 }


 FUNC_5(VAR_2);
}
