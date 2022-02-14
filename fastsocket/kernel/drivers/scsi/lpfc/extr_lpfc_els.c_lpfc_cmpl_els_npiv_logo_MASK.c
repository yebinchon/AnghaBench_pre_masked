
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_vport {int fc_flag; int num_disc_nodes; int unreg_vpi_cmpl; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct TYPE_4__ {int remoteID; } ;
struct TYPE_5__ {int * ulpWord; TYPE_1__ rcvels; } ;
struct TYPE_6__ {scalar_t__ ulpStatus; int ulpTimeout; TYPE_2__ un; } ;
struct lpfc_iocbq {TYPE_3__ iocb; scalar_t__ context1; struct lpfc_vport* vport; } ;
struct lpfc_hba {int dummy; } ;
struct Scsi_Host {int host_lock; } ;
typedef TYPE_3__ IOCB_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_nodelist*) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,int ,scalar_t__,int ,int ,int ) ;
 struct Scsi_Host* FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_6, struct lpfc_iocbq *VAR_7,
   struct lpfc_iocbq *VAR_8)
{
 struct lpfc_vport *VAR_9 = VAR_7->vport;
 IOCB_t *VAR_10;
 struct lpfc_nodelist *VAR_11;
 struct Scsi_Host *VAR_12 = FUNC_4(VAR_9);

 VAR_11 = (struct lpfc_nodelist *)VAR_7->context1;
 VAR_10 = &VAR_8->iocb;
 FUNC_0(VAR_9, VAR_4,
  "LOGO npiv cmpl:  status:x%x/x%x did:x%x",
  VAR_10->ulpStatus, VAR_10->un.ulpWord[4], VAR_10->un.rcvels.remoteID);

 FUNC_1(VAR_6, VAR_7);
 VAR_9->unreg_vpi_cmpl = VAR_5;


 FUNC_2(VAR_11);


 FUNC_3(VAR_9, VAR_2, VAR_3,
    "2928 NPIV LOGO completes to NPort x%x "
    "Data: x%x x%x x%x x%x\n",
    VAR_11->nlp_DID, VAR_10->ulpStatus, VAR_10->un.ulpWord[4],
    VAR_10->ulpTimeout, VAR_9->num_disc_nodes);

 if (VAR_10->ulpStatus == VAR_1) {
  FUNC_5(VAR_12->host_lock);
  VAR_9->fc_flag &= ~VAR_0;
  FUNC_6(VAR_12->host_lock);
 }
}
