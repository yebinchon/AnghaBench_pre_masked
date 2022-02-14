
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_cmnd {int sc_data_direction; scalar_t__ cmd_len; int cmnd; TYPE_2__* device; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_13__ {int icd; } ;
struct TYPE_14__ {TYPE_5__ fcp_ext; } ;
struct TYPE_11__ {scalar_t__ fcpi_parm; } ;
struct TYPE_12__ {TYPE_3__ fcpi; } ;
struct TYPE_16__ {size_t ulpContext; int ulpFCP2Rcvy; int ulpClass; int ulpTimeout; TYPE_6__ unsli3; void* ulpPU; TYPE_4__ un; int ulpCommand; } ;
struct lpfc_iocbq {struct lpfc_vport* vport; TYPE_8__ iocb; int iocb_cmpl; struct lpfc_scsi_buf* context1; } ;
struct lpfc_scsi_buf {int timeout; struct fcp_cmnd* fcp_cmnd; struct scsi_cmnd* pCmd; TYPE_1__* fcp_rsp; struct lpfc_iocbq cur_iocbq; } ;
struct lpfc_nodelist {size_t nlp_rpi; int nlp_fcp_info; } ;
struct TYPE_15__ {size_t* rpi_ids; } ;
struct lpfc_hba {int sli_rev; int sli3_options; TYPE_7__ sli4_hba; int fc4ControlRequests; int fc4InputRequests; int fc4OutputRequests; } ;
struct fcp_cmnd {scalar_t__ fcpCntl3; void* fcpCntl1; int * fcpCdb; int fcp_lun; scalar_t__ fcpCntl2; } ;
struct TYPE_10__ {int lun; } ;
struct TYPE_9__ {scalar_t__ rspSnsLen; } ;
typedef TYPE_8__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;

 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_8 ;
 void* VAR_9 ;

 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct fcp_cmnd*) ;
 int VAR_14 ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*,char*) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_vport *VAR_15, struct lpfc_scsi_buf *VAR_16,
      struct lpfc_nodelist *VAR_17)
{
 struct lpfc_hba *VAR_18 = VAR_15->phba;
 struct scsi_cmnd *VAR_19 = VAR_16->pCmd;
 struct fcp_cmnd *VAR_20 = VAR_16->fcp_cmnd;
 IOCB_t *VAR_21 = &VAR_16->cur_iocbq.iocb;
 struct lpfc_iocbq *VAR_22 = &(VAR_16->cur_iocbq);
 int VAR_23 = VAR_19->sc_data_direction;
 char VAR_24[2];
 uint8_t *VAR_25;
 bool VAR_26;

 if (!VAR_17 || !FUNC_0(VAR_17))
  return;

 VAR_16->fcp_rsp->rspSnsLen = 0;

 VAR_16->fcp_cmnd->fcpCntl2 = 0;

 FUNC_1(VAR_16->pCmd->device->lun,
   &VAR_16->fcp_cmnd->fcp_lun);

 VAR_25 = &VAR_20->fcpCdb[0];
 FUNC_3(VAR_25, VAR_19->cmnd, VAR_19->cmd_len);
 if (VAR_19->cmd_len < VAR_5) {
  VAR_25 += VAR_19->cmd_len;
  FUNC_4(VAR_25, 0, (VAR_5 - VAR_19->cmd_len));
 }

 if (FUNC_5(VAR_19, VAR_24)) {
  switch (VAR_24[0]) {
  case 129:
   VAR_20->fcpCntl1 = VAR_4;
   break;
  case 128:
   VAR_20->fcpCntl1 = VAR_9;
   break;
  default:
   VAR_20->fcpCntl1 = VAR_12;
   break;
  }
 } else
  VAR_20->fcpCntl1 = VAR_12;

 VAR_26 = (VAR_18->sli_rev == VAR_7);







 if (FUNC_6(VAR_19)) {
  if (VAR_23 == VAR_3) {
   VAR_21->ulpCommand = VAR_2;
   if (VAR_26)
    VAR_21->ulpPU = VAR_10;
   else {
    VAR_21->un.fcpi.fcpi_parm = 0;
    VAR_21->ulpPU = 0;
   }
   VAR_20->fcpCntl3 = VAR_13;
   VAR_18->fc4OutputRequests++;
  } else {
   VAR_21->ulpCommand = VAR_1;
   VAR_21->ulpPU = VAR_10;
   VAR_20->fcpCntl3 = VAR_11;
   VAR_18->fc4InputRequests++;
  }
 } else {
  VAR_21->ulpCommand = VAR_0;
  VAR_21->un.fcpi.fcpi_parm = 0;
  VAR_21->ulpPU = 0;
  VAR_20->fcpCntl3 = 0;
  VAR_18->fc4ControlRequests++;
 }
 if (VAR_18->sli_rev == 3 &&
     !(VAR_18->sli3_options & VAR_6))
  FUNC_2(VAR_21->unsli3.fcp_ext.icd, VAR_20);




 VAR_22->iocb.ulpContext = VAR_17->nlp_rpi;
 if (VAR_26)
  VAR_22->iocb.ulpContext =
    VAR_18->sli4_hba.rpi_ids[VAR_17->nlp_rpi];
 if (VAR_17->nlp_fcp_info & VAR_8)
  VAR_22->iocb.ulpFCP2Rcvy = 1;
 else
  VAR_22->iocb.ulpFCP2Rcvy = 0;

 VAR_22->iocb.ulpClass = (VAR_17->nlp_fcp_info & 0x0f);
 VAR_22->context1 = VAR_16;
 VAR_22->iocb_cmpl = VAR_14;
 VAR_22->iocb.ulpTimeout = VAR_16->timeout;
 VAR_22->vport = VAR_15;
}
