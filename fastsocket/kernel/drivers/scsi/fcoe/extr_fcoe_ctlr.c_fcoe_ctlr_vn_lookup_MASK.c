
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fcoe_rport {int enode_mac; } ;
struct fcoe_ctlr {struct fc_lport* lp; } ;
struct fc_rport_priv {int dummy; } ;
struct TYPE_2__ {struct fc_rport_priv* (* rport_lookup ) (struct fc_lport*,int ) ;} ;
struct fc_lport {TYPE_1__ tt; } ;


 int VAR_0 ;
 struct fcoe_rport* FUNC_0 (struct fc_rport_priv*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct fc_rport_priv* FUNC_4 (struct fc_lport*,int ) ;

__attribute__((used)) static int FUNC_5(struct fcoe_ctlr *VAR_1, u32 VAR_2, u8 *VAR_3)
{
 struct fc_lport *VAR_4 = VAR_1->lp;
 struct fc_rport_priv *VAR_5;
 struct fcoe_rport *VAR_6;
 int VAR_7 = -1;

 FUNC_2();
 VAR_5 = VAR_4->tt.rport_lookup(VAR_4, VAR_2);
 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_5);
  FUNC_1(VAR_3, VAR_6->enode_mac, VAR_0);
  VAR_7 = 0;
 }
 FUNC_3();
 return VAR_7;
}
