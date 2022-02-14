
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfa_mbox_cmd_s {int msg; int qe; } ;
struct TYPE_2__ {int hfn_mbox_cmd; } ;
struct bfa_ioc_mbox_mod_s {int cmd_q; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; struct bfa_ioc_mbox_mod_s mbox_mod; } ;


 int FUNC_0 (struct bfa_ioc_s*,int ,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(struct bfa_ioc_s *VAR_0, struct bfa_mbox_cmd_s *VAR_1)
{
 struct bfa_ioc_mbox_mod_s *VAR_2 = &VAR_0->mbox_mod;
 u32 VAR_3;




 if (!FUNC_2(&VAR_2->cmd_q)) {
  FUNC_1(&VAR_1->qe, &VAR_2->cmd_q);
  return;
 }




 VAR_3 = FUNC_3(VAR_0->ioc_regs.hfn_mbox_cmd);
 if (VAR_3) {
  FUNC_1(&VAR_1->qe, &VAR_2->cmd_q);
  return;
 }




 FUNC_0(VAR_0, VAR_1->msg, sizeof(VAR_1->msg));
}
