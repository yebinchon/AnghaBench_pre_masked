
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_7__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ link_state; TYPE_5__* pport; int hbalock; int link_flag; TYPE_1__ sli4_hba; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_6__* reply; TYPE_4__* request; struct Scsi_Host* shost; } ;
struct diag_mode_set {int timeout; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_12__ {int result; } ;
struct TYPE_11__ {scalar_t__ fc_myDID; } ;
struct TYPE_8__ {scalar_t__ vendor_cmd; } ;
struct TYPE_9__ {TYPE_2__ h_vendor; } ;
struct TYPE_10__ {TYPE_3__ rqst_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*,int ) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_8(struct fc_bsg_job *VAR_10)
{
 struct Scsi_Host *VAR_11;
 struct lpfc_vport *VAR_12;
 struct lpfc_hba *VAR_13;
 struct diag_mode_set *VAR_14;
 uint32_t VAR_15;
 int VAR_16, VAR_17;

 VAR_11 = VAR_10->shost;
 if (!VAR_11)
  return -VAR_0;
 VAR_12 = (struct lpfc_vport *)VAR_10->shost->hostdata;
 if (!VAR_12)
  return -VAR_0;
 VAR_13 = VAR_12->phba;
 if (!VAR_13)
  return -VAR_0;

 if (VAR_13->sli_rev < VAR_7)
  return -VAR_0;
 if (FUNC_0(VAR_9, &VAR_13->sli4_hba.sli_intf) !=
     VAR_6)
  return -VAR_0;


 FUNC_5(&VAR_13->hbalock);
 VAR_13->link_flag &= ~VAR_8;
 FUNC_6(&VAR_13->hbalock);
 VAR_14 = (struct diag_mode_set *)
   VAR_10->request->rqst_data.h_vendor.vendor_cmd;
 VAR_15 = VAR_14->timeout * 100;

 VAR_16 = FUNC_3(VAR_13, 0);
 if (VAR_16) {
  FUNC_1(VAR_13, VAR_3, VAR_4,
    "3139 Failed to bring link to diagnostic "
    "state, rc:x%x\n", VAR_16);
  goto loopback_mode_end_exit;
 }


 VAR_17 = 0;
 while (VAR_13->link_state != VAR_5) {
  if (VAR_17++ > VAR_15) {
   VAR_16 = -VAR_1;
   FUNC_1(VAR_13, VAR_2, VAR_4,
     "3140 Timeout waiting for link to "
     "diagnostic mode_end, timeout:%d ms\n",
     VAR_15 * 10);

   break;
  }
  FUNC_4(10);
 }


 VAR_16 = FUNC_2(VAR_13);
 VAR_13->pport->fc_myDID = 0;

loopback_mode_end_exit:

 VAR_10->reply->result = VAR_16;

 if (VAR_16 == 0)
  VAR_10->job_done(VAR_10);
 return VAR_16;
}
