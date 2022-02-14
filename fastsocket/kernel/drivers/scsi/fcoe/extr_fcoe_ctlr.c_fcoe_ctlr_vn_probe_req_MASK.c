
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fcoe_rport {int flags; int enode_mac; } ;
struct fcoe_ctlr {scalar_t__ port_id; int state; TYPE_2__* lp; } ;
struct TYPE_3__ {scalar_t__ port_id; int port_name; } ;
struct fc_rport_priv {TYPE_1__ ids; } ;
struct TYPE_4__ {int wwpn; } ;


 int VAR_0 ;
 int VAR_1 ;





 struct fcoe_rport* FUNC_0 (struct fc_rport_priv*) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 int FUNC_2 (struct fcoe_ctlr*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fcoe_ctlr *VAR_2,
       struct fc_rport_priv *VAR_3)
{
 struct fcoe_rport *VAR_4 = FUNC_0(VAR_3);

 if (VAR_3->ids.port_id != VAR_2->port_id)
  return;

 switch (VAR_2->state) {
 case 132:
 case 128:
  FUNC_2(VAR_2, VAR_1,
      VAR_4->enode_mac, 0);
  break;
 case 131:
 case 130:







  if (VAR_2->lp->wwpn > VAR_3->ids.port_name &&
      !(VAR_4->flags & VAR_0)) {
   FUNC_2(VAR_2, VAR_1,
       VAR_4->enode_mac, 0);
   break;
  }

 case 129:
  FUNC_1(VAR_2);
  break;
 default:
  break;
 }
}
