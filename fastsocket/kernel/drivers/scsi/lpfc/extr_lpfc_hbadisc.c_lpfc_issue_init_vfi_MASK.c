
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_6__ {int mbox_cmpl; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,struct lpfc_vport*) ;
 int VAR_5 ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_2 (struct lpfc_hba*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct lpfc_vport *VAR_6)
{
 LPFC_MBOXQ_t *VAR_7;
 int VAR_8;
 struct lpfc_hba *VAR_9 = VAR_6->phba;

 VAR_7 = FUNC_3(VAR_9->mbox_mem_pool, VAR_0);
 if (!VAR_7) {
  FUNC_1(VAR_6, VAR_1,
   VAR_2, "2892 Failed to allocate "
   "init_vfi mailbox\n");
  return;
 }
 FUNC_0(VAR_7, VAR_6);
 VAR_7->mbox_cmpl = VAR_5;
 VAR_8 = FUNC_2(VAR_9, VAR_7, VAR_4);
 if (VAR_8 == VAR_3) {
  FUNC_1(VAR_6, VAR_1,
   VAR_2, "2893 Failed to issue init_vfi mailbox\n");
  FUNC_4(VAR_7, VAR_6->phba->mbox_mem_pool);
 }
}
