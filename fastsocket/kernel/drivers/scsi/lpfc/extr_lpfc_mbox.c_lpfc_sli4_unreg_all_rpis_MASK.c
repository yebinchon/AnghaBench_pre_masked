
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct lpfc_vport {size_t vpi; struct lpfc_hba* phba; } ;
struct lpfc_hba {int mbox_mem_pool; int * vpi_ids; } ;
struct TYPE_10__ {int rsvd1; } ;
struct TYPE_11__ {TYPE_1__ varUnregLogin; } ;
struct TYPE_12__ {TYPE_2__ un; } ;
struct TYPE_13__ {TYPE_3__ mb; } ;
struct TYPE_14__ {int * context1; int mbox_cmpl; struct lpfc_vport* vport; TYPE_4__ u; } ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,TYPE_5__*,int ) ;
 int FUNC_1 (struct lpfc_hba*,size_t,int ,TYPE_5__*) ;
 TYPE_5__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;

void
FUNC_4(struct lpfc_vport *VAR_4)
{
 struct lpfc_hba *VAR_5 = VAR_4->phba;
 LPFC_MBOXQ_t *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5->mbox_mem_pool, VAR_0);
 if (VAR_6) {







  FUNC_1(VAR_5, VAR_4->vpi, VAR_5->vpi_ids[VAR_4->vpi],
     VAR_6);
  VAR_6->u.mb.un.varUnregLogin.rsvd1 = 0x4000;
  VAR_6->vport = VAR_4;
  VAR_6->mbox_cmpl = VAR_3;
  VAR_6->context1 = ((void*)0);
  VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_2);
  if (VAR_7 == VAR_1)
   FUNC_3(VAR_6, VAR_5->mbox_mem_pool);
 }
}
