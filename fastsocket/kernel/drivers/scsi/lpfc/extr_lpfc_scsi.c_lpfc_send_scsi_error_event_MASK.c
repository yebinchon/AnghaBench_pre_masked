
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct scsi_cmnd {scalar_t__ result; scalar_t__* cmnd; int* sense_buffer; scalar_t__ sc_data_direction; TYPE_9__* device; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_scsi_buf {TYPE_4__* rdata; struct fcp_rsp* fcp_rsp; struct scsi_cmnd* pCmd; } ;
struct lpfc_nodelist {int nlp_nodename; int nlp_portname; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_16__ {scalar_t__ fcpi_parm; } ;
struct TYPE_17__ {TYPE_1__ fcpi; } ;
struct TYPE_18__ {TYPE_2__ un; } ;
struct lpfc_iocbq {TYPE_3__ iocb; } ;
struct lpfc_hba {int hbalock; int work_list; } ;
struct TYPE_15__ {int evt_listp; } ;
struct TYPE_23__ {int wwnn; int wwpn; int subcategory; int event_type; } ;
struct TYPE_13__ {scalar_t__ opcode; scalar_t__ fcpiparam; int lun; TYPE_8__ header; } ;
struct TYPE_21__ {int wwnn; int wwpn; int lun; int subcategory; void* event_type; } ;
struct TYPE_22__ {int sense_key; int asc; int ascq; TYPE_6__ scsi_event; } ;
struct TYPE_20__ {int wwnn; int wwpn; int lun; int subcategory; void* event_type; } ;
struct TYPE_14__ {TYPE_10__ read_check_error; TYPE_7__ check_cond_evt; TYPE_5__ scsi_evt; } ;
struct lpfc_fast_path_event {TYPE_12__ work_evt; struct lpfc_vport* vport; TYPE_11__ un; } ;
struct fcp_rsp {scalar_t__ rspStatus2; scalar_t__ rspStatus3; int rspResId; scalar_t__ rspSnsLen; } ;
struct TYPE_24__ {int lun; } ;
struct TYPE_19__ {struct lpfc_nodelist* pnode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 struct lpfc_fast_path_event* FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_hba *VAR_15, struct lpfc_vport *VAR_16,
  struct lpfc_scsi_buf *VAR_17, struct lpfc_iocbq *VAR_18) {
 struct scsi_cmnd *VAR_19 = VAR_17->pCmd;
 struct fcp_rsp *VAR_20 = VAR_17->fcp_rsp;
 uint32_t VAR_21 = VAR_20->rspStatus2;
 uint32_t VAR_22 = VAR_20->rspStatus3;
 uint32_t VAR_23 = VAR_18->iocb.un.fcpi.fcpi_parm;
 struct lpfc_fast_path_event *VAR_24 = ((void*)0);
 struct lpfc_nodelist *VAR_25 = VAR_17->rdata->pnode;
 unsigned long VAR_26;

 if (!VAR_25 || !FUNC_0(VAR_25))
  return;


 if ((VAR_19->result == VAR_12) ||
  (VAR_19->result == VAR_10)) {
  VAR_24 = FUNC_3(VAR_15);
  if (!VAR_24)
   return;
  VAR_24->un.scsi_evt.event_type =
   VAR_2;
  VAR_24->un.scsi_evt.subcategory =
  (VAR_19->result == VAR_12) ?
  VAR_6 : VAR_4;
  VAR_24->un.scsi_evt.lun = VAR_19->device->lun;
  FUNC_5(&VAR_24->un.scsi_evt.wwpn,
   &VAR_25->nlp_portname, sizeof(struct lpfc_name));
  FUNC_5(&VAR_24->un.scsi_evt.wwnn,
   &VAR_25->nlp_nodename, sizeof(struct lpfc_name));
 } else if ((VAR_21 & VAR_13) && VAR_20->rspSnsLen &&
  ((VAR_19->cmnd[0] == VAR_7) || (VAR_19->cmnd[0] == VAR_14))) {
  VAR_24 = FUNC_3(VAR_15);
  if (!VAR_24)
   return;
  VAR_24->un.check_cond_evt.scsi_event.event_type =
   VAR_2;
  VAR_24->un.check_cond_evt.scsi_event.subcategory =
   VAR_3;
  VAR_24->un.check_cond_evt.scsi_event.lun =
   VAR_19->device->lun;
  FUNC_5(&VAR_24->un.check_cond_evt.scsi_event.wwpn,
   &VAR_25->nlp_portname, sizeof(struct lpfc_name));
  FUNC_5(&VAR_24->un.check_cond_evt.scsi_event.wwnn,
   &VAR_25->nlp_nodename, sizeof(struct lpfc_name));
  VAR_24->un.check_cond_evt.sense_key =
   VAR_19->sense_buffer[2] & 0xf;
  VAR_24->un.check_cond_evt.asc = VAR_19->sense_buffer[12];
  VAR_24->un.check_cond_evt.ascq = VAR_19->sense_buffer[13];
 } else if ((VAR_19->sc_data_direction == VAR_0) &&
       VAR_23 &&
       ((FUNC_1(VAR_20->rspResId) != VAR_23) ||
   ((VAR_22 == VAR_11) &&
   !(VAR_21 & (VAR_9 | VAR_8))))) {




  VAR_24 = FUNC_3(VAR_15);
  if (!VAR_24)
   return;
  VAR_24->un.read_check_error.header.event_type =
   VAR_1;
  VAR_24->un.read_check_error.header.subcategory =
   VAR_5;
  FUNC_5(&VAR_24->un.read_check_error.header.wwpn,
   &VAR_25->nlp_portname, sizeof(struct lpfc_name));
  FUNC_5(&VAR_24->un.read_check_error.header.wwnn,
   &VAR_25->nlp_nodename, sizeof(struct lpfc_name));
  VAR_24->un.read_check_error.lun = VAR_19->device->lun;
  VAR_24->un.read_check_error.opcode = VAR_19->cmnd[0];
  VAR_24->un.read_check_error.fcpiparam =
   VAR_23;
 } else
  return;

 VAR_24->vport = VAR_16;
 FUNC_6(&VAR_15->hbalock, VAR_26);
 FUNC_2(&VAR_24->work_evt.evt_listp, &VAR_15->work_list);
 FUNC_7(&VAR_15->hbalock, VAR_26);
 FUNC_4(VAR_15);
 return;
}
