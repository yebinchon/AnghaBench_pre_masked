
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int link_up; int link_status; void* flow_ctrl; void* duplex; void* line_speed; int mac_type; } ;
struct TYPE_5__ {int* speed_cap_mask; int switch_cfg; void** req_line_speed; void** req_flow_ctrl; void** req_duplex; int port; struct bnx2x* bp; } ;
struct TYPE_4__ {int* supported; int* advertising; } ;
struct bnx2x {scalar_t__ state; TYPE_3__ link_vars; TYPE_2__ link_params; TYPE_1__ port; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (struct bnx2x*,int ) ;

void FUNC_7(struct bnx2x *VAR_22)
{
 if (VAR_22->state != VAR_1)
  return;


 if (FUNC_1(VAR_22)) {
  FUNC_3(VAR_22);
  FUNC_5(&VAR_22->link_params, &VAR_22->link_vars);
  if (VAR_22->link_vars.link_up)
   FUNC_6(VAR_22, VAR_7);
  else
   FUNC_6(VAR_22, VAR_8);

  FUNC_4(VAR_22);

 } else {
  VAR_22->port.supported[0] |= (VAR_14 |
       VAR_13 |
       VAR_12 |
       VAR_11 |
       VAR_10 |
       VAR_15 |
       VAR_9 |
       VAR_20 |
       VAR_18 |
       VAR_17 |
       VAR_19 |
       VAR_16);
  VAR_22->port.advertising[0] = VAR_22->port.supported[0];

  VAR_22->link_params.bp = VAR_22;
  VAR_22->link_params.port = FUNC_0(VAR_22);
  VAR_22->link_params.req_duplex[0] = VAR_2;
  VAR_22->link_params.req_flow_ctrl[0] = VAR_0;
  VAR_22->link_params.req_line_speed[0] = VAR_6;
  VAR_22->link_params.speed_cap_mask[0] = 0x7f0000;
  VAR_22->link_params.switch_cfg = VAR_21;
  VAR_22->link_vars.mac_type = VAR_5;
  VAR_22->link_vars.line_speed = VAR_6;
  VAR_22->link_vars.link_status =
   (VAR_3 |
    VAR_4);
  VAR_22->link_vars.link_up = 1;
  VAR_22->link_vars.duplex = VAR_2;
  VAR_22->link_vars.flow_ctrl = VAR_0;
  FUNC_2(VAR_22);
  FUNC_6(VAR_22, VAR_7);
 }
}
