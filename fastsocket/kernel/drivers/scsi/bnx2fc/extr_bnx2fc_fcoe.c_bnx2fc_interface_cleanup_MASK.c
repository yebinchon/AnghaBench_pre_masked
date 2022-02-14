
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_port {int timer; } ;
struct fcoe_ctlr {struct fc_lport* lp; } ;
struct fc_lport {int dummy; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {int dummy; } ;


 int FUNC_0 (struct bnx2fc_hba*,struct fc_lport*) ;
 int FUNC_1 (struct bnx2fc_interface*) ;
 struct fcoe_ctlr* FUNC_2 (struct bnx2fc_interface*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fc_lport*) ;
 struct fcoe_port* FUNC_5 (struct fc_lport*) ;

__attribute__((used)) static void FUNC_6(struct bnx2fc_interface *VAR_0)
{
 struct fcoe_ctlr *VAR_1 = FUNC_2(VAR_0);
 struct fc_lport *VAR_2 = VAR_1->lp;
 struct fcoe_port *VAR_3 = FUNC_5(VAR_2);
 struct bnx2fc_hba *VAR_4 = VAR_0->hba;


 FUNC_3(&VAR_3->timer);


 FUNC_4(VAR_2);

 FUNC_1(VAR_0);

 FUNC_0(VAR_4, VAR_2);
}
