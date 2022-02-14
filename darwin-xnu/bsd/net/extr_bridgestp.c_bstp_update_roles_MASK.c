
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bstp_state {int bs_allsynced; } ;
struct TYPE_8__ {int active; } ;
struct TYPE_7__ {int active; } ;
struct TYPE_6__ {int active; } ;
struct bstp_port {int bp_role; int bp_synced; int bp_agree; int bp_flags; int const bp_state; int bp_proposing; TYPE_1__* bp_ifp; int bp_desg_fdelay; int bp_desg_htime; int bp_protover; TYPE_4__ bp_forward_delay_timer; int bp_operedge; TYPE_3__ bp_recent_root_timer; int bp_reroot; int bp_sync; int bp_agreed; int bp_desg_max_age; int bp_ptp_link; TYPE_4__ bp_edge_delay_timer; TYPE_2__ bp_recent_backup_timer; int bp_proposed; } ;
struct TYPE_5__ {int if_xname; } ;


 int VAR_0 ;

 int const VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_2 (struct bstp_state*) ;
 int FUNC_3 (struct bstp_state*) ;
 int FUNC_4 (struct bstp_port*,int const) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct bstp_state*,struct bstp_port*) ;

__attribute__((used)) static void
FUNC_8(struct bstp_state *VAR_5, struct bstp_port *VAR_6)
{
 switch (VAR_6->bp_role) {
 case 129:

  if (VAR_6->bp_sync || !VAR_6->bp_synced || VAR_6->bp_reroot) {
   VAR_6->bp_sync = 0;
   VAR_6->bp_synced = 1;
   VAR_6->bp_reroot = 0;
  }
  break;

 case 132:
 case 131:
  if ((VAR_5->bs_allsynced && !VAR_6->bp_agree) ||
      (VAR_6->bp_proposed && VAR_6->bp_agree)) {
   VAR_6->bp_proposed = 0;
   VAR_6->bp_agree = 1;
   VAR_6->bp_flags |= VAR_3;
   FUNC_0("%s -> ALTERNATE_AGREED\n",
       VAR_6->bp_ifp->if_xname);
  }

  if (VAR_6->bp_proposed && !VAR_6->bp_agree) {
   FUNC_3(VAR_5);
   VAR_6->bp_proposed = 0;
   FUNC_0("%s -> ALTERNATE_PROPOSED\n",
       VAR_6->bp_ifp->if_xname);
  }


  if (VAR_6->bp_sync || !VAR_6->bp_synced || VAR_6->bp_reroot) {
   VAR_6->bp_sync = 0;
   VAR_6->bp_synced = 1;
   VAR_6->bp_reroot = 0;
   FUNC_0("%s -> ALTERNATE_PORT\n", VAR_6->bp_ifp->if_xname);
  }
  break;

 case 128:
  if (VAR_6->bp_state != VAR_1 && !VAR_6->bp_reroot) {
   FUNC_2(VAR_5);
   FUNC_0("%s -> ROOT_REROOT\n", VAR_6->bp_ifp->if_xname);
  }

  if ((VAR_5->bs_allsynced && !VAR_6->bp_agree) ||
      (VAR_6->bp_proposed && VAR_6->bp_agree)) {
   VAR_6->bp_proposed = 0;
   VAR_6->bp_sync = 0;
   VAR_6->bp_agree = 1;
   VAR_6->bp_flags |= VAR_3;
   FUNC_0("%s -> ROOT_AGREED\n", VAR_6->bp_ifp->if_xname);
  }

  if (VAR_6->bp_proposed && !VAR_6->bp_agree) {
   FUNC_3(VAR_5);
   VAR_6->bp_proposed = 0;
   FUNC_0("%s -> ROOT_PROPOSED\n", VAR_6->bp_ifp->if_xname);
  }

  if (VAR_6->bp_state != VAR_1 &&
      (VAR_6->bp_forward_delay_timer.active == 0 ||
      (FUNC_1(VAR_5, VAR_6) &&
      VAR_6->bp_recent_backup_timer.active == 0 &&
      VAR_6->bp_protover == VAR_4))) {
   switch (VAR_6->bp_state) {
   case 134:
    FUNC_4(VAR_6, 133);
    break;
   case 133:
    FUNC_4(VAR_6,
        VAR_1);
    break;
   }
  }

  if (VAR_6->bp_state == VAR_1 && VAR_6->bp_reroot) {
   VAR_6->bp_reroot = 0;
   FUNC_0("%s -> ROOT_REROOTED\n", VAR_6->bp_ifp->if_xname);
  }
  break;

 case 130:
  if (VAR_6->bp_recent_root_timer.active == 0 && VAR_6->bp_reroot) {
   VAR_6->bp_reroot = 0;
   FUNC_0("%s -> DESIGNATED_RETIRED\n",
       VAR_6->bp_ifp->if_xname);
  }

  if ((VAR_6->bp_state == 134 &&
      !VAR_6->bp_synced) || (VAR_6->bp_agreed && !VAR_6->bp_synced) ||
      (VAR_6->bp_operedge && !VAR_6->bp_synced) ||
      (VAR_6->bp_sync && VAR_6->bp_synced)) {
   FUNC_6(&VAR_6->bp_recent_root_timer);
   VAR_6->bp_synced = 1;
   VAR_6->bp_sync = 0;
   FUNC_0("%s -> DESIGNATED_SYNCED\n",
       VAR_6->bp_ifp->if_xname);
  }

  if (VAR_6->bp_state != VAR_1 &&
      !VAR_6->bp_agreed && !VAR_6->bp_proposing &&
      !VAR_6->bp_operedge) {
   VAR_6->bp_proposing = 1;
   VAR_6->bp_flags |= VAR_3;
   FUNC_5(&VAR_6->bp_edge_delay_timer,
       (VAR_6->bp_ptp_link ? VAR_0 :
        VAR_6->bp_desg_max_age));
   FUNC_0("%s -> DESIGNATED_PROPOSE\n",
       VAR_6->bp_ifp->if_xname);
  }

  if (VAR_6->bp_state != VAR_1 &&
      (VAR_6->bp_forward_delay_timer.active == 0 || VAR_6->bp_agreed ||
      VAR_6->bp_operedge) &&
      (VAR_6->bp_recent_root_timer.active == 0 || !VAR_6->bp_reroot) &&
      !VAR_6->bp_sync) {
   if (VAR_6->bp_agreed || VAR_6->bp_operedge ||
       VAR_6->bp_state == 133) {
    FUNC_4(VAR_6,
        VAR_1);
    VAR_6->bp_agreed = VAR_6->bp_protover;
   } else if (VAR_6->bp_state == 134)
    FUNC_4(VAR_6, 133);
  }

  if (((VAR_6->bp_sync && !VAR_6->bp_synced) ||
      (VAR_6->bp_reroot && VAR_6->bp_recent_root_timer.active) ||
      (VAR_6->bp_flags & VAR_2)) && !VAR_6->bp_operedge &&
      VAR_6->bp_state != 134) {
   FUNC_4(VAR_6, 134);
   VAR_6->bp_flags &= ~VAR_2;
   FUNC_5(&VAR_6->bp_forward_delay_timer,
       VAR_6->bp_protover == VAR_4 ?
       VAR_6->bp_desg_htime : VAR_6->bp_desg_fdelay);
   FUNC_0("%s -> DESIGNATED_DISCARD\n",
       VAR_6->bp_ifp->if_xname);
  }
  break;
 }

 if (VAR_6->bp_flags & VAR_3)
  FUNC_7(VAR_5, VAR_6);
}
