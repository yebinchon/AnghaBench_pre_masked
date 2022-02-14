
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fcoe_rport {int flags; int fcoe_len; int enode_mac; } ;
struct fcoe_ctlr {int state; TYPE_2__* lp; int port_id; } ;
struct TYPE_3__ {int port_name; int port_id; } ;
struct fc_rport_priv {TYPE_1__ ids; } ;
struct TYPE_4__ {int wwpn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int FUNC_0 (struct fcoe_ctlr*) ;
 struct fcoe_rport* FUNC_1 (struct fc_rport_priv*) ;
 int FUNC_2 (struct fcoe_ctlr*,struct fc_rport_priv*) ;
 int FUNC_3 (struct fcoe_ctlr*) ;
 int FUNC_4 (struct fcoe_ctlr*,int ,int ,int ) ;
 int FUNC_5 (struct fcoe_ctlr*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct fcoe_ctlr *VAR_4,
          struct fc_rport_priv *VAR_5)
{
 struct fcoe_rport *VAR_6 = FUNC_1(VAR_5);

 if (VAR_6->flags & VAR_0) {
  FUNC_4(VAR_4, VAR_2, VAR_3, 0);
  return;
 }
 switch (VAR_4->state) {
 case 129:
 case 131:
 case 130:
  if (VAR_5->ids.port_id == VAR_4->port_id)
   FUNC_3(VAR_4);
  break;
 case 132:
 case 128:
  if (VAR_5->ids.port_id == VAR_4->port_id) {
   if (VAR_5->ids.port_name > VAR_4->lp->wwpn) {
    FUNC_3(VAR_4);
    break;
   }
   FUNC_5(VAR_4);
   break;
  }
  FUNC_4(VAR_4, VAR_1, VAR_6->enode_mac,
      FUNC_6((u32)VAR_6->fcoe_len,
          FUNC_0(VAR_4)));
  FUNC_2(VAR_4, VAR_5);
  break;
 default:
  break;
 }
}
