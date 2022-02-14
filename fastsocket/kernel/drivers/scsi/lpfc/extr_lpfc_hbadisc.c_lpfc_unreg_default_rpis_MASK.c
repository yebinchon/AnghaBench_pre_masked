
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int vpi; struct lpfc_hba* phba; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_6__ {int * context1; int mbox_cmpl; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_vport*,int ,int,char*,int) ;
 int VAR_8 ;
 int FUNC_1 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(struct lpfc_vport *VAR_9)
{
 struct lpfc_hba *VAR_10 = VAR_9->phba;
 LPFC_MBOXQ_t *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_10->mbox_mem_pool, VAR_0);
 if (VAR_11) {
  FUNC_2(VAR_10, VAR_9->vpi, VAR_5,
          VAR_11);
  VAR_11->vport = VAR_9;
  VAR_11->mbox_cmpl = VAR_8;
  VAR_11->context1 = ((void*)0);
  VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_4);
  if (VAR_12 != VAR_7)
   FUNC_4(VAR_11, VAR_10->mbox_mem_pool);

  if ((VAR_12 == VAR_7) || (VAR_12 == VAR_6))
   FUNC_0(VAR_9, VAR_1, VAR_2 | VAR_3,
      "1815 Could not issue "
      "unreg_did (default rpis) status %d\n",
      VAR_12);
 }
}
