
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {scalar_t__ port_type; int fc_flag; int port_state; } ;
struct lpfc_sli {size_t extra_ring; size_t fcp_ring; size_t next_ring; int sli_flag; TYPE_2__* ring; } ;
struct lpfc_hba {int hbalock; int HCregaddr; int mbox_mem_pool; int link_state; struct lpfc_sli sli; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_9__ {int mbxStatus; } ;
struct TYPE_7__ {TYPE_3__ mb; } ;
struct TYPE_10__ {TYPE_1__ u; struct lpfc_vport* vport; } ;
struct TYPE_8__ {int flag; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


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
 int VAR_10 ;
 int FUNC_0 (struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,...) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_11, LPFC_MBOXQ_t *VAR_12)
{
 struct lpfc_vport *VAR_13 = VAR_12->vport;
 struct Scsi_Host *VAR_14 = FUNC_2(VAR_13);
 struct lpfc_sli *VAR_15 = &VAR_11->sli;
 MAILBOX_t *VAR_16 = &VAR_12->u.mb;
 uint32_t VAR_17;


 VAR_15->ring[VAR_15->extra_ring].flag &= ~VAR_10;
 VAR_15->ring[VAR_15->fcp_ring].flag &= ~VAR_10;
 VAR_15->ring[VAR_15->next_ring].flag &= ~VAR_10;


 if ((VAR_16->mbxStatus) && (VAR_16->mbxStatus != 0x1601)) {

  FUNC_1(VAR_13, VAR_2, VAR_5,
     "0320 CLEAR_LA mbxStatus error x%x hba "
     "state x%x\n",
     VAR_16->mbxStatus, VAR_13->port_state);
  VAR_11->link_state = VAR_6;
  goto out;
 }

 if (VAR_13->port_type == VAR_8)
  VAR_11->link_state = VAR_7;

 FUNC_5(&VAR_11->hbalock);
 VAR_15->sli_flag |= VAR_9;
 VAR_17 = FUNC_4(VAR_11->HCregaddr);
 VAR_17 |= VAR_1;
 FUNC_7(VAR_17, VAR_11->HCregaddr);
 FUNC_4(VAR_11->HCregaddr);
 FUNC_6(&VAR_11->hbalock);
 FUNC_3(VAR_12, VAR_11->mbox_mem_pool);
 return;

out:

 FUNC_1(VAR_13, VAR_3, VAR_4,
    "0225 Device Discovery completes\n");
 FUNC_3(VAR_12, VAR_11->mbox_mem_pool);

 FUNC_5(VAR_14->host_lock);
 VAR_13->fc_flag &= ~VAR_0;
 FUNC_6(VAR_14->host_lock);

 FUNC_0(VAR_13);



 FUNC_5(&VAR_11->hbalock);
 VAR_15->sli_flag |= VAR_9;
 VAR_17 = FUNC_4(VAR_11->HCregaddr);
 VAR_17 |= VAR_1;
 FUNC_7(VAR_17, VAR_11->HCregaddr);
 FUNC_4(VAR_11->HCregaddr);
 FUNC_6(&VAR_11->hbalock);

 return;
}
