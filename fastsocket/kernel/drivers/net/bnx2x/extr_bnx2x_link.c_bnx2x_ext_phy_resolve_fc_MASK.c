
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_vars {scalar_t__ flow_ctrl; int link_status; } ;
struct link_params {scalar_t__ req_fc_auto_adv; } ;
struct bnx2x_phy {scalar_t__ req_flow_ctrl; scalar_t__ req_line_speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;

__attribute__((used)) static u8 FUNC_1(struct bnx2x_phy *VAR_4,
       struct link_params *VAR_5,
       struct link_vars *VAR_6)
{
 u8 VAR_7 = 0;
 VAR_6->flow_ctrl = VAR_1;
 if (VAR_4->req_flow_ctrl != VAR_0) {

  if (VAR_4->req_line_speed == VAR_3)
   FUNC_0(VAR_4, VAR_5, VAR_6);

  VAR_6->flow_ctrl = VAR_4->req_flow_ctrl;
 } else if (VAR_4->req_line_speed != VAR_3)
  VAR_6->flow_ctrl = VAR_5->req_fc_auto_adv;
 else if (VAR_6->link_status & VAR_2) {
  VAR_7 = 1;
  FUNC_0(VAR_4, VAR_5, VAR_6);
 }
 return VAR_7;
}
