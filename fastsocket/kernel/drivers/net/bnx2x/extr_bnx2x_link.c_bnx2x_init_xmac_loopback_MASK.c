
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct link_vars {int link_up; int phy_flags; int mac_type; int flow_ctrl; int duplex; scalar_t__ line_speed; } ;
struct link_params {int port; TYPE_1__* phy; scalar_t__* req_line_speed; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {int (* config_loopback ) (TYPE_1__*,struct link_params*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct link_params*,TYPE_1__*) ;
 int FUNC_2 (struct bnx2x*,TYPE_1__*,int ) ;
 int FUNC_3 (struct link_params*,struct link_vars*,int) ;
 int FUNC_4 (TYPE_1__*,struct link_params*) ;

__attribute__((used)) static void FUNC_5(struct link_params *VAR_7,
         struct link_vars *VAR_8)
{
 struct bnx2x *VAR_9 = VAR_7->bp;
 VAR_8->link_up = 1;
 if (!VAR_7->req_line_speed[0])
  VAR_8->line_speed = VAR_6;
 else
  VAR_8->line_speed = VAR_7->req_line_speed[0];
 VAR_8->duplex = VAR_1;
 VAR_8->flow_ctrl = VAR_0;
 VAR_8->mac_type = VAR_3;
 VAR_8->phy_flags = VAR_5;



 FUNC_1(VAR_7, &VAR_7->phy[0]);
 FUNC_2(VAR_9, &VAR_7->phy[0], 0);
 VAR_7->phy[VAR_2].config_loopback(
   &VAR_7->phy[VAR_2],
   VAR_7);

 FUNC_3(VAR_7, VAR_8, 1);
 FUNC_0(VAR_9, VAR_4 + VAR_7->port*4, 0);
}
