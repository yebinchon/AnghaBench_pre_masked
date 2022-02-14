
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2fc_hba {struct bnx2fc_hba* tgt_ofld_list; int * cmd_mgr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bnx2fc_hba*) ;
 int FUNC_2 (struct bnx2fc_hba*) ;

__attribute__((used)) static void FUNC_3(struct bnx2fc_hba *VAR_0)
{

 if (VAR_0->cmd_mgr) {
  FUNC_0(VAR_0->cmd_mgr);
  VAR_0->cmd_mgr = ((void*)0);
 }
 FUNC_2(VAR_0->tgt_ofld_list);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
}
