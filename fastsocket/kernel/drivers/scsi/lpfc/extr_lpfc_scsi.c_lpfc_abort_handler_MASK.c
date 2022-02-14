
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {TYPE_4__* device; scalar_t__ host_scribble; } ;
struct lpfc_vport {int cfg_devloss_tmo; struct lpfc_hba* phba; } ;
struct TYPE_6__ {int abortIoTag; int abortContextTag; int abortType; } ;
struct TYPE_7__ {TYPE_1__ acxri; } ;
struct TYPE_10__ {int ulpLe; int ulpCommand; int ulpClass; int ulpIoTag; TYPE_2__ un; int ulpContext; } ;
struct lpfc_iocbq {int iocb_flag; int sli4_xritag; struct lpfc_vport* vport; int iocb_cmpl; int fcp_wqidx; TYPE_5__ iocb; struct lpfc_scsi_buf* context1; } ;
struct lpfc_scsi_buf {struct scsi_cmnd* pCmd; int * waitq; struct lpfc_iocbq cur_iocbq; } ;
struct TYPE_8__ {int * ring; } ;
struct lpfc_hba {int hba_flag; scalar_t__ sli_rev; int cfg_poll; int hbalock; TYPE_3__ sli; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_9__ {int lun; int id; struct Scsi_Host* host; } ;
typedef TYPE_5__ IOCB_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct lpfc_iocbq* FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,...) ;
 int VAR_16 ;
 int FUNC_6 (struct lpfc_hba*,int *,int ) ;
 scalar_t__ FUNC_7 (struct lpfc_hba*,size_t,struct lpfc_iocbq*,int ) ;
 int FUNC_8 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,int,int ) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_13(struct scsi_cmnd *VAR_18)
{
 struct Scsi_Host *VAR_19 = VAR_18->device->host;
 struct lpfc_vport *VAR_20 = (struct lpfc_vport *) VAR_19->hostdata;
 struct lpfc_hba *VAR_21 = VAR_20->phba;
 struct lpfc_iocbq *VAR_22;
 struct lpfc_iocbq *VAR_23;
 struct lpfc_scsi_buf *VAR_24;
 IOCB_t *VAR_25, *VAR_26;
 int VAR_27 = VAR_15, VAR_28 = 0;
 unsigned long VAR_29;
 FUNC_1(VAR_17);

 VAR_28 = FUNC_3(VAR_18);
 if (VAR_28 != 0 && VAR_28 != VAR_15)
  return VAR_28;

 FUNC_10(&VAR_21->hbalock, VAR_29);

 if (VAR_21->hba_flag & VAR_6) {
  FUNC_11(&VAR_21->hbalock, VAR_29);
  FUNC_5(VAR_20, VAR_9, VAR_10,
   "3168 SCSI Layer abort requested I/O has been "
   "flushed by LLD.\n");
  return VAR_4;
 }

 VAR_24 = (struct lpfc_scsi_buf *)VAR_18->host_scribble;
 if (!VAR_24 || !VAR_24->pCmd) {
  FUNC_11(&VAR_21->hbalock, VAR_29);
  FUNC_5(VAR_20, VAR_9, VAR_10,
    "2873 SCSI Layer I/O Abort Request IO CMPL Status "
    "x%x ID %d LUN %d\n",
    VAR_15, VAR_18->device->id, VAR_18->device->lun);
  return VAR_15;
 }

 VAR_22 = &VAR_24->cur_iocbq;

 if (!(VAR_22->iocb_flag & VAR_12)) {
  FUNC_11(&VAR_21->hbalock, VAR_29);
  FUNC_5(VAR_20, VAR_9, VAR_10,
   "3169 SCSI Layer abort requested I/O has been "
   "cancelled by LLD.\n");
  return VAR_4;
 }






 if (VAR_24->pCmd != VAR_18) {
  FUNC_5(VAR_20, VAR_9, VAR_10,
   "3170 SCSI Layer abort requested I/O has been "
   "completed by LLD.\n");
  goto out_unlock;
 }

 FUNC_0(VAR_22->context1 != VAR_24);

 VAR_23 = FUNC_2(VAR_21);
 if (VAR_23 == ((void*)0)) {
  VAR_27 = VAR_4;
  goto out_unlock;
 }







 VAR_25 = &VAR_22->iocb;
 VAR_26 = &VAR_23->iocb;
 VAR_26->un.acxri.abortType = VAR_0;
 VAR_26->un.acxri.abortContextTag = VAR_25->ulpContext;
 if (VAR_21->sli_rev == VAR_13)
  VAR_26->un.acxri.abortIoTag = VAR_22->sli4_xritag;
 else
  VAR_26->un.acxri.abortIoTag = VAR_25->ulpIoTag;

 VAR_26->ulpLe = 1;
 VAR_26->ulpClass = VAR_25->ulpClass;


 VAR_23->fcp_wqidx = VAR_22->fcp_wqidx;
 VAR_23->iocb_flag |= VAR_14;

 if (FUNC_4(VAR_21))
  VAR_26->ulpCommand = VAR_1;
 else
  VAR_26->ulpCommand = VAR_2;

 VAR_23->iocb_cmpl = VAR_16;
 VAR_23->vport = VAR_20;

 FUNC_11(&VAR_21->hbalock, VAR_29);

 if (FUNC_7(VAR_21, VAR_11, VAR_23, 0) ==
     VAR_7) {
  FUNC_8(VAR_21, VAR_23);
  VAR_27 = VAR_4;
  goto out;
 }

 if (VAR_21->cfg_poll & VAR_3)
  FUNC_6(VAR_21,
   &VAR_21->sli.ring[VAR_11], VAR_5);

 VAR_24->waitq = &VAR_17;

 FUNC_12(VAR_17,
     (VAR_24->pCmd != VAR_18),
      FUNC_9(2*VAR_20->cfg_devloss_tmo*1000));
 VAR_24->waitq = ((void*)0);

 if (VAR_24->pCmd == VAR_18) {
  VAR_27 = VAR_4;
  FUNC_5(VAR_20, VAR_8, VAR_10,
     "0748 abort handler timed out waiting "
     "for abortng I/O (xri:x%x) to complete: "
     "ret %#x, ID %d, LUN %d\n",
     VAR_22->sli4_xritag, VAR_27,
     VAR_18->device->id, VAR_18->device->lun);
 }
 goto out;

out_unlock:
 FUNC_11(&VAR_21->hbalock, VAR_29);
out:
 FUNC_5(VAR_20, VAR_9, VAR_10,
    "0749 SCSI Layer I/O Abort Request Status x%x ID %d "
    "LUN %d\n", VAR_27, VAR_18->device->id,
    VAR_18->device->lun);
 return VAR_27;
}
