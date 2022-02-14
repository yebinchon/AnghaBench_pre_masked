
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {scalar_t__ port_state; int fc_flag; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {int link_flag; int mbox_mem_pool; struct lpfc_vport* pport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_6__ {scalar_t__ mbxStatus; } ;
struct TYPE_7__ {TYPE_1__ mb; } ;
struct TYPE_8__ {TYPE_2__ u; struct lpfc_vport* vport; } ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct lpfc_nodelist* FUNC_0 (struct lpfc_vport*,int ) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,...) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(struct lpfc_hba *VAR_10, LPFC_MBOXQ_t *VAR_11)
{
 struct lpfc_vport *VAR_12 = VAR_11->vport;
 struct lpfc_nodelist *VAR_13;
 struct Scsi_Host *VAR_14 = FUNC_4(VAR_12);

 if (VAR_11->u.mb.mbxStatus) {
  FUNC_2(VAR_12, VAR_4,
    VAR_7,
    "2609 Init VPI mailbox failed 0x%x\n",
    VAR_11->u.mb.mbxStatus);
  FUNC_6(VAR_11, VAR_10->mbox_mem_pool);
  FUNC_5(VAR_12, VAR_0);
  return;
 }
 FUNC_7(VAR_14->host_lock);
 VAR_12->fc_flag &= ~VAR_1;
 FUNC_8(VAR_14->host_lock);


 if ((VAR_10->pport == VAR_12) || (VAR_12->port_state == VAR_8)) {
   VAR_13 = FUNC_0(VAR_12, VAR_3);
   if (!VAR_13)
    FUNC_2(VAR_12, VAR_4,
     VAR_5,
     "2731 Cannot find fabric "
     "controller node\n");
   else
    FUNC_3(VAR_10, VAR_12, VAR_13);
   FUNC_6(VAR_11, VAR_10->mbox_mem_pool);
   return;
 }

 if (VAR_10->link_flag & VAR_9)
  FUNC_1(VAR_12);
 else {
  FUNC_5(VAR_12, VAR_2);
  FUNC_2(VAR_12, VAR_4, VAR_6,
     "2606 No NPIV Fabric support\n");
 }
 FUNC_6(VAR_11, VAR_10->mbox_mem_pool);
 return;
}
