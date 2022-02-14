
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {int dummy; } ;
struct TYPE_7__ {int sli_intf; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_1__ sli4_hba; } ;
struct TYPE_8__ {scalar_t__ mbxStatus; } ;
struct TYPE_9__ {TYPE_2__ mb; } ;
struct TYPE_10__ {TYPE_3__ u; struct lpfc_vport* vport; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (struct lpfc_vport*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;

void
FUNC_5(struct lpfc_hba *VAR_6, LPFC_MBOXQ_t *VAR_7)
{
 struct lpfc_vport *VAR_8 = VAR_7->vport;





 if (VAR_7->u.mb.mbxStatus &&
     (FUNC_0(VAR_5, &VAR_6->sli4_hba.sli_intf) !=
   VAR_3) &&
     VAR_7->u.mb.mbxStatus != VAR_4) {
  FUNC_2(VAR_8, VAR_1,
    VAR_2,
    "2891 Init VFI mailbox failed 0x%x\n",
    VAR_7->u.mb.mbxStatus);
  FUNC_4(VAR_7, VAR_6->mbox_mem_pool);
  FUNC_3(VAR_8, VAR_0);
  return;
 }

 FUNC_1(VAR_8);
 FUNC_4(VAR_7, VAR_6->mbox_mem_pool);
 return;
}
