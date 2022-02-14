
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int vpi; struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ sli_rev; int mbox_mem_pool; } ;
struct TYPE_6__ {int * context1; int mbox_cmpl; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_vport*,int ,int,char*,int) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int VAR_9 ;
 int FUNC_2 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(struct lpfc_vport *VAR_10)
{
 struct lpfc_hba *VAR_11 = VAR_10->phba;
 LPFC_MBOXQ_t *VAR_12;
 int VAR_13;

 if (VAR_11->sli_rev == VAR_5) {
  FUNC_1(VAR_10);
  return;
 }

 VAR_12 = FUNC_4(VAR_11->mbox_mem_pool, VAR_0);
 if (VAR_12) {
  FUNC_3(VAR_11, VAR_10->vpi, VAR_6,
     VAR_12);
  VAR_12->vport = VAR_10;
  VAR_12->mbox_cmpl = VAR_9;
  VAR_12->context1 = ((void*)0);
  VAR_13 = FUNC_2(VAR_11, VAR_12, VAR_4);
  if (VAR_13 != VAR_8)
   FUNC_5(VAR_12, VAR_11->mbox_mem_pool);

  if ((VAR_13 == VAR_8) || (VAR_13 == VAR_7))
   FUNC_0(VAR_10, VAR_1, VAR_2 | VAR_3,
    "1836 Could not issue "
    "unreg_login(all_rpis) status %d\n", VAR_13);
 }
}
