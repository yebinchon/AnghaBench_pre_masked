
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int unreg_vpi_cmpl; int vpi; struct lpfc_hba* phba; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct TYPE_6__ {int mbox_cmpl; struct lpfc_vport* vport; } ;
typedef TYPE_1__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_vport*,int ,int,char*) ;
 int FUNC_1 (struct lpfc_hba*,TYPE_1__*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

int
FUNC_5(struct lpfc_vport *VAR_8)
{
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 LPFC_MBOXQ_t *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_9->mbox_mem_pool, VAR_0);
 if (!VAR_10)
  return 1;

 FUNC_2(VAR_9, VAR_8->vpi, VAR_10);
 VAR_10->vport = VAR_8;
 VAR_10->mbox_cmpl = VAR_7;
 VAR_11 = FUNC_1(VAR_9, VAR_10, VAR_5);
 if (VAR_11 == VAR_4) {
  FUNC_0(VAR_8, VAR_1, VAR_2 | VAR_3,
     "1800 Could not issue unreg_vpi\n");
  FUNC_4(VAR_10, VAR_9->mbox_mem_pool);
  VAR_8->unreg_vpi_cmpl = VAR_6;
  return VAR_11;
 }
 return 0;
}
