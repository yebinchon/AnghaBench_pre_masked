
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_flags; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct bstp_state {int dummy; } ;
struct bstp_port {int bp_flags; int bp_ptp_link; scalar_t__ bp_role; scalar_t__ bp_protover; int bp_operedge; scalar_t__ bp_infois; int bp_path_cost; struct ifnet* bp_ifp; } ;
typedef int ifmr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bstp_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bstp_port*) ;
 int FUNC_2 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_3 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct ifnet*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct bstp_state *VAR_10, struct bstp_port *VAR_11)
{
 struct ifnet *VAR_12 = VAR_11->bp_ifp;
 struct ifmediareq VAR_13;
 int VAR_14 = 0;

 FUNC_0(VAR_10);

 FUNC_4((char *)&VAR_13, sizeof(VAR_13));
 VAR_14 = (*VAR_12->if_ioctl)(VAR_12, VAR_9, (caddr_t)&VAR_13);

 if ((VAR_14 == 0) && (VAR_12->if_flags & VAR_6)) {
  if (VAR_13.ifm_status & VAR_7) {

   if (VAR_11->bp_flags & VAR_2) {
    VAR_11->bp_ptp_link =
        VAR_13.ifm_active & VAR_8 ? 1 : 0;
   }


   if (VAR_11->bp_flags & VAR_3) {
    VAR_11->bp_path_cost = FUNC_1(VAR_11);
    VAR_11->bp_flags &= ~VAR_3;
   }

   if (VAR_11->bp_role == VAR_5)
    FUNC_3(VAR_10, VAR_11);
  } else {
   if (VAR_11->bp_role != VAR_5) {
    FUNC_2(VAR_10, VAR_11);
    if ((VAR_11->bp_flags & VAR_1) &&
        VAR_11->bp_protover == VAR_4)
     VAR_11->bp_operedge = 1;
   }
  }
  return;
 }

 if (VAR_11->bp_infois != VAR_0)
  FUNC_2(VAR_10, VAR_11);
}
