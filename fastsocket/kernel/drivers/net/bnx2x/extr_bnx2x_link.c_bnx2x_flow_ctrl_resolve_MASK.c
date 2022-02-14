
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_vars {scalar_t__ flow_ctrl; int phy_flags; } ;
struct link_params {scalar_t__ req_fc_auto_adv; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_flow_ctrl; scalar_t__ req_line_speed; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_6,
        struct link_params *VAR_7,
        struct link_vars *VAR_8,
        u32 VAR_9)
{
 struct bnx2x *VAR_10 = VAR_7->bp;
 VAR_8->flow_ctrl = VAR_1;


 if (VAR_6->req_flow_ctrl != VAR_0) {

  if (VAR_6->req_line_speed == VAR_5)
   FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);

  VAR_8->flow_ctrl = VAR_6->req_flow_ctrl;
 } else if (VAR_6->req_line_speed != VAR_5)
  VAR_8->flow_ctrl = VAR_7->req_fc_auto_adv;
 else if ((VAR_9 & VAR_2) &&
   (!(VAR_8->phy_flags & VAR_4))) {
  if (FUNC_1(VAR_6, VAR_7)) {
   VAR_8->flow_ctrl = VAR_7->req_fc_auto_adv;
   return;
  }
  FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);
 }
 FUNC_0(VAR_3, "flow_ctrl 0x%x\n", VAR_8->flow_ctrl);
}
