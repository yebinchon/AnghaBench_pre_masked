
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; int port_state; scalar_t__ num_disc_nodes; scalar_t__ fc_npr_cnt; int vpi_state; int fc_myDID; } ;
struct lpfc_hba {int mbox_mem_pool; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_7__ {int mbxStatus; } ;
struct TYPE_6__ {TYPE_2__ mb; } ;
struct TYPE_8__ {TYPE_1__ u; struct lpfc_vport* vport; } ;
typedef TYPE_2__ MAILBOX_t ;
typedef TYPE_3__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,int) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_vport*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_9, LPFC_MBOXQ_t *VAR_10)
{
 struct lpfc_vport *VAR_11 = VAR_10->vport;
 struct Scsi_Host *VAR_12 = FUNC_3(VAR_11);
 MAILBOX_t *VAR_13 = &VAR_10->u.mb;

 switch (VAR_13->mbxStatus) {
 case 0x0011:
 case 0x9601:
 case 0x9602:
  FUNC_2(VAR_11, VAR_5, VAR_6,
     "0912 cmpl_reg_vpi, mb status = 0x%x\n",
     VAR_13->mbxStatus);
  FUNC_4(VAR_11, VAR_3);
  FUNC_6(VAR_12->host_lock);
  VAR_11->fc_flag &= ~(VAR_0 | VAR_2);
  FUNC_7(VAR_12->host_lock);
  VAR_11->fc_myDID = 0;
  goto out;
 }

 FUNC_6(VAR_12->host_lock);
 VAR_11->vpi_state |= VAR_7;
 VAR_11->fc_flag &= ~VAR_4;
 FUNC_7(VAR_12->host_lock);
 VAR_11->num_disc_nodes = 0;

 if (VAR_11->fc_npr_cnt)
  FUNC_1(VAR_11);

 if (!VAR_11->num_disc_nodes) {
  FUNC_6(VAR_12->host_lock);
  VAR_11->fc_flag &= ~VAR_1;
  FUNC_7(VAR_12->host_lock);
  FUNC_0(VAR_11);
 }
 VAR_11->port_state = VAR_8;

out:
 FUNC_5(VAR_10, VAR_9->mbox_mem_pool);
 return;
}
