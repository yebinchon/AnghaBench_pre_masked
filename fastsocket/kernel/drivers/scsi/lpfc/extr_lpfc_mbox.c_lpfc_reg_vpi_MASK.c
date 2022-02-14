
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; size_t vpi; size_t vfi; int fc_portname; struct lpfc_hba* phba; int fc_myDID; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_10__ {scalar_t__* vfi_ids; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ vfi_base; TYPE_2__ sli4_hba; int * vpi_ids; } ;
struct TYPE_11__ {int upd; void** wwn; scalar_t__ vfi; int sid; int vpi; } ;
struct TYPE_12__ {TYPE_3__ varRegVpi; } ;
struct TYPE_13__ {int mbxOwner; int mbxCommand; TYPE_4__ un; } ;
struct TYPE_9__ {TYPE_5__ mb; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
typedef TYPE_5__ MAILBOX_t ;
typedef TYPE_6__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (void**,int *,int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;

void
FUNC_3(struct lpfc_vport *VAR_4, LPFC_MBOXQ_t *VAR_5)
{
 MAILBOX_t *VAR_6 = &VAR_5->u.mb;
 struct lpfc_hba *VAR_7 = VAR_4->phba;

 FUNC_2(VAR_5, 0, sizeof (LPFC_MBOXQ_t));



 if ((VAR_7->sli_rev == VAR_1) &&
  !(VAR_4->fc_flag & VAR_0))
  VAR_6->un.varRegVpi.upd = 1;

 VAR_6->un.varRegVpi.vpi = VAR_7->vpi_ids[VAR_4->vpi];
 VAR_6->un.varRegVpi.sid = VAR_4->fc_myDID;
 if (VAR_7->sli_rev == VAR_1)
  VAR_6->un.varRegVpi.vfi = VAR_7->sli4_hba.vfi_ids[VAR_4->vfi];
 else
  VAR_6->un.varRegVpi.vfi = VAR_4->vfi + VAR_4->phba->vfi_base;
 FUNC_1(VAR_6->un.varRegVpi.wwn, &VAR_4->fc_portname,
        sizeof(struct lpfc_name));
 VAR_6->un.varRegVpi.wwn[0] = FUNC_0(VAR_6->un.varRegVpi.wwn[0]);
 VAR_6->un.varRegVpi.wwn[1] = FUNC_0(VAR_6->un.varRegVpi.wwn[1]);

 VAR_6->mbxCommand = VAR_2;
 VAR_6->mbxOwner = VAR_3;
 return;

}
