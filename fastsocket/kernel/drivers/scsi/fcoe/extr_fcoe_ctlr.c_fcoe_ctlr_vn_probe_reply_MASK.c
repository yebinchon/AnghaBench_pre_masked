
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr {scalar_t__ port_id; int state; } ;
struct TYPE_2__ {scalar_t__ port_id; } ;
struct fc_rport_priv {TYPE_1__ ids; } ;







 int FUNC_0 (struct fcoe_ctlr*) ;
 int FUNC_1 (struct fcoe_ctlr*) ;

__attribute__((used)) static void FUNC_2(struct fcoe_ctlr *VAR_0,
       struct fc_rport_priv *VAR_1)
{
 if (VAR_1->ids.port_id != VAR_0->port_id)
  return;
 switch (VAR_0->state) {
 case 129:
 case 131:
 case 130:
 case 132:
  FUNC_0(VAR_0);
  break;
 case 128:
  FUNC_1(VAR_0);
  break;
 default:
  break;
 }
}
