
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct link_vars {int link_up; scalar_t__ line_speed; int duplex; int flow_ctrl; } ;
struct link_params {scalar_t__* req_line_speed; scalar_t__ loopback_mode; size_t num_phys; int port; struct bnx2x_phy* phy; struct bnx2x* bp; } ;
struct bnx2x_phy {int flags; int (* config_loopback ) (struct bnx2x_phy*,struct link_params*) ;} ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct link_params*,struct link_vars*,int ,int) ;
 int FUNC_3 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_4 (struct link_params*,struct link_vars*) ;
 int FUNC_5 (struct link_params*,struct link_vars*) ;
 int FUNC_6 (struct link_params*,struct link_vars*,int ,scalar_t__) ;
 int FUNC_7 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_8 (struct link_params*) ;
 int FUNC_9 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_10 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_11 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_12(struct link_params *VAR_11,
         struct link_vars *VAR_12)
{
 struct bnx2x *VAR_13 = VAR_11->bp;
 struct bnx2x_phy *VAR_14 = &VAR_11->phy[VAR_4];
 VAR_12->link_up = 1;
 VAR_12->flow_ctrl = VAR_0;
 VAR_12->duplex = VAR_1;
 if (VAR_11->req_line_speed[0] == VAR_8)
  VAR_12->line_speed = VAR_8;
 else if ((VAR_11->req_line_speed[0] == VAR_10) ||
   (VAR_14->flags & VAR_3))
  VAR_12->line_speed = VAR_10;
 else
  VAR_12->line_speed = VAR_9;

 if (!FUNC_1(VAR_13))
  FUNC_8(VAR_11);
 FUNC_5(VAR_11, VAR_12);

 if (VAR_11->req_line_speed[0] == VAR_8) {
  if (FUNC_1(VAR_13))
   FUNC_7(VAR_11, VAR_12, 0);
  else {
   FUNC_4(VAR_11, VAR_12);
   FUNC_3(VAR_11, VAR_12, 0);
  }
 } else {
  if (FUNC_1(VAR_13))
   FUNC_9(VAR_11, VAR_12, 0);
  else
   FUNC_2(VAR_11, VAR_12, 0, 1);
 }

 if (VAR_11->loopback_mode == VAR_6) {

  VAR_14->config_loopback(VAR_14, VAR_11);
 } else {

  u8 VAR_15;
  for (VAR_15 = VAR_2;
        VAR_15 < VAR_11->num_phys; VAR_15++)
   if (VAR_11->phy[VAR_15].config_loopback)
    VAR_11->phy[VAR_15].config_loopback(
     &VAR_11->phy[VAR_15],
     VAR_11);
 }
 FUNC_0(VAR_13, VAR_7 + VAR_11->port*4, 0);

 FUNC_6(VAR_11, VAR_12, VAR_5, VAR_12->line_speed);
}
