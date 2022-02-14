
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lpfc_vport {int port_state; } ;
struct lpfc_hba {int mbox_mem_pool; TYPE_1__* pport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_9__ {scalar_t__ mbxStatus; } ;
struct TYPE_8__ {TYPE_3__ mb; } ;
struct TYPE_10__ {TYPE_2__ u; struct lpfc_vport* vport; } ;
struct TYPE_7__ {int fc_flag; } ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,scalar_t__,int ) ;
 struct Scsi_Host* FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct lpfc_hba *VAR_4, LPFC_MBOXQ_t *VAR_5)
{
 struct lpfc_vport *VAR_6 = VAR_5->vport;
 struct Scsi_Host *VAR_7 = FUNC_1(VAR_6);

 if (VAR_5->u.mb.mbxStatus) {
  FUNC_0(VAR_4, VAR_1, VAR_2|VAR_3,
   "2555 UNREG_VFI mbxStatus error x%x "
   "HBA state x%x\n",
   VAR_5->u.mb.mbxStatus, VAR_6->port_state);
 }
 FUNC_3(VAR_7->host_lock);
 VAR_4->pport->fc_flag &= ~VAR_0;
 FUNC_4(VAR_7->host_lock);
 FUNC_2(VAR_5, VAR_4->mbox_mem_pool);
 return;
}
