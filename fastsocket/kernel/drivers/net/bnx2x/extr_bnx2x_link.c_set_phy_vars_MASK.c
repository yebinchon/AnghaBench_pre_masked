
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct link_vars {int link_status; } ;
struct link_params {scalar_t__ multi_phy_config; scalar_t__ num_phys; scalar_t__* req_line_speed; TYPE_1__* phy; int * req_duplex; int * speed_cap_mask; int * req_flow_ctrl; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {scalar_t__ req_line_speed; int speed_cap_mask; int req_flow_ctrl; int req_duplex; } ;


 int FUNC_0 (int ,char*,int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_2(struct link_params *VAR_7,
    struct link_vars *VAR_8)
{
 struct bnx2x *VAR_9 = VAR_7->bp;
 u8 VAR_10, VAR_11, VAR_12;
 u8 VAR_13 = VAR_7->multi_phy_config &
   VAR_5;
 for (VAR_11 = VAR_2; VAR_11 < VAR_7->num_phys;
       VAR_11++) {
  VAR_12 = FUNC_1(VAR_11);
  VAR_10 = VAR_11;
  if (VAR_13) {
   if (VAR_11 == VAR_0)
    VAR_10 = VAR_1;
   else if (VAR_11 == VAR_1)
    VAR_10 = VAR_0;
  }
  VAR_7->phy[VAR_10].req_flow_ctrl =
   VAR_7->req_flow_ctrl[VAR_12];

  VAR_7->phy[VAR_10].req_line_speed =
   VAR_7->req_line_speed[VAR_12];

  VAR_7->phy[VAR_10].speed_cap_mask =
   VAR_7->speed_cap_mask[VAR_12];

  VAR_7->phy[VAR_10].req_duplex =
   VAR_7->req_duplex[VAR_12];

  if (VAR_7->req_line_speed[VAR_12] ==
      VAR_6)
   VAR_8->link_status |= VAR_3;

  FUNC_0(VAR_4, "req_flow_ctrl %x, req_line_speed %x,"
      " speed_cap_mask %x\n",
      VAR_7->phy[VAR_10].req_flow_ctrl,
      VAR_7->phy[VAR_10].req_line_speed,
      VAR_7->phy[VAR_10].speed_cap_mask);
 }
}
