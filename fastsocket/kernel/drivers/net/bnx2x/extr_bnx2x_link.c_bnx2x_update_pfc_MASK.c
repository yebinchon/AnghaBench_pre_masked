
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_vars {scalar_t__ mac_type; int flow_ctrl; int link_up; int link_status; } ;
struct link_params {scalar_t__ loopback_mode; int feature_config_flags; int port; struct bnx2x* bp; } ;
struct bnx2x_nig_brb_pfc_port_params {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_5 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_6 (struct link_params*,int ) ;
 int FUNC_7 (struct link_params*,struct link_vars*) ;
 int FUNC_8 (struct link_params*,struct link_vars*,int) ;
 int FUNC_9 (struct link_params*,struct link_vars*,struct bnx2x_nig_brb_pfc_port_params*) ;
 int FUNC_10 (struct link_params*,struct link_vars*,int ) ;

int FUNC_11(struct link_params *VAR_9,
        struct link_vars *VAR_10,
        struct bnx2x_nig_brb_pfc_port_params *VAR_11)
{




 u32 VAR_12;
 struct bnx2x *VAR_13 = VAR_9->bp;
 int VAR_14 = 0;
 u8 VAR_15 = (VAR_9->loopback_mode == VAR_3);

 if (VAR_9->feature_config_flags & VAR_1)
  VAR_10->link_status |= VAR_2;
 else
  VAR_10->link_status &= ~VAR_2;

 FUNC_6(VAR_9, VAR_10->link_status);


 FUNC_9(VAR_9, VAR_10, VAR_11);

 if (!VAR_10->link_up)
  return VAR_14;

 FUNC_2(VAR_7, "About to update PFC in BMAC\n");

 if (FUNC_1(VAR_13)) {
  if (VAR_10->mac_type == VAR_4)
   FUNC_10(VAR_9, VAR_10, 0);
 } else {
  VAR_12 = FUNC_3(VAR_13, VAR_6);
  if ((VAR_12 &
       (VAR_5 << VAR_9->port))
      == 0) {
   FUNC_2(VAR_7, "About to update PFC in EMAC\n");
   FUNC_5(VAR_9, VAR_10, 0);
   return VAR_14;
  }
  if (FUNC_0(VAR_13))
   FUNC_8(VAR_9, VAR_10, VAR_15);
  else
   FUNC_7(VAR_9, VAR_10);

  VAR_12 = 0;
  if ((VAR_9->feature_config_flags &
       VAR_1) ||
      (VAR_10->flow_ctrl & VAR_0))
   VAR_12 = 1;
  FUNC_4(VAR_13, VAR_8 + VAR_9->port*4, VAR_12);
 }
 return VAR_14;
}
