
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_vport {int load_flag; int unreg_vpi_cmpl; int fc_flag; int vpi_state; int vpi; } ;
struct lpfc_hba {struct lpfc_vport* pport; int mbox_mem_pool; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_7__ {int mbxStatus; } ;
struct TYPE_6__ {TYPE_2__ mb; } ;
struct TYPE_8__ {struct lpfc_vport* vport; TYPE_1__ u; } ;
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
 int FUNC_0 (struct lpfc_vport*,int *) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,int,...) ;
 struct Scsi_Host* FUNC_2 (struct lpfc_vport*) ;
 int FUNC_3 (struct lpfc_hba*,int *,int *,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (struct Scsi_Host*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_8, LPFC_MBOXQ_t *VAR_9)
{
 MAILBOX_t *VAR_10 = &VAR_9->u.mb;
 struct lpfc_vport *VAR_11 = VAR_9->vport;
 struct Scsi_Host *VAR_12 = FUNC_2(VAR_11);

 switch (VAR_10->mbxStatus) {
 case 0x0011:
 case 0x0020:
  FUNC_1(VAR_11, VAR_3, VAR_4,
     "0911 cmpl_unreg_vpi, mb status = 0x%x\n",
     VAR_10->mbxStatus);
  break;

 case 0x9700:
  FUNC_1(VAR_11, VAR_2, VAR_4,
   "2798 Unreg_vpi failed vpi 0x%x, mb status = 0x%x\n",
   VAR_11->vpi, VAR_10->mbxStatus);
  if (!(VAR_8->pport->load_flag & VAR_0))
   FUNC_3(VAR_8, ((void*)0), ((void*)0),
    VAR_5);
 }
 FUNC_6(VAR_12->host_lock);
 VAR_11->vpi_state &= ~VAR_6;
 VAR_11->fc_flag |= VAR_1;
 FUNC_7(VAR_12->host_lock);
 VAR_11->unreg_vpi_cmpl = VAR_7;
 FUNC_4(VAR_9, VAR_8->mbox_mem_pool);
 FUNC_0(VAR_11, ((void*)0));




 if ((VAR_11->load_flag & VAR_0) && (VAR_11 != VAR_8->pport))
  FUNC_5(VAR_12);
}
