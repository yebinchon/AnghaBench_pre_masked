
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr {scalar_t__ state; } ;
struct TYPE_2__ {int port_id; } ;
struct fc_rport_priv {TYPE_1__ ids; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fcoe_ctlr*,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fcoe_ctlr*,struct fc_rport_priv*) ;

__attribute__((used)) static void FUNC_3(struct fcoe_ctlr *VAR_2,
        struct fc_rport_priv *VAR_3)
{
 FUNC_0(VAR_2, "claim resp from from rport %x - state %s\n",
   VAR_3->ids.port_id, FUNC_1(VAR_2->state));
 if (VAR_2->state == VAR_1 || VAR_2->state == VAR_0)
  FUNC_2(VAR_2, VAR_3);
}
