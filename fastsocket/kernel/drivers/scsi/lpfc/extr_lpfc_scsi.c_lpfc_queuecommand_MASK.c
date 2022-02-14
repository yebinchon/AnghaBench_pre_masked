
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int* cmnd; unsigned char* host_scribble; void (* scsi_done ) (struct scsi_cmnd*) ;int request; TYPE_2__* device; } ;
struct lpfc_vport {struct lpfc_hba* phba; scalar_t__ cfg_max_scsicmpl_time; } ;
struct lpfc_scsi_buf {int cur_iocbq; int start_time; scalar_t__ timeout; struct lpfc_rport_data* rdata; struct scsi_cmnd* pCmd; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {scalar_t__ cmd_qdepth; int cmd_pending; } ;
struct TYPE_3__ {int * ring; } ;
struct lpfc_hba {int sli3_options; int cfg_poll; TYPE_1__ sli; scalar_t__ cfg_enable_bg; } ;
struct fc_rport {int dummy; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
struct TYPE_4__ {struct lpfc_rport_data* hostdata; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * VAR_14 ;
 int FUNC_5 (struct fc_rport*) ;
 int VAR_15 ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;
 struct lpfc_scsi_buf* FUNC_7 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*,int ,int ,char*,int,size_t,int ) ;
 int FUNC_10 (struct lpfc_vport*,int ,int ,char*,...) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;
 int FUNC_13 (struct lpfc_vport*,struct lpfc_scsi_buf*,struct lpfc_nodelist*) ;
 int FUNC_14 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;
 int FUNC_15 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;
 int FUNC_16 (struct lpfc_hba*,int *,int ) ;
 int FUNC_17 (struct lpfc_hba*,size_t,int *,int ) ;
 scalar_t__ FUNC_18 (struct scsi_cmnd*) ;
 size_t FUNC_19 (struct scsi_cmnd*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 struct fc_rport* FUNC_23 (int ) ;

__attribute__((used)) static int
FUNC_24(struct scsi_cmnd *VAR_16, void (*VAR_17) (struct scsi_cmnd *))
{
 struct Scsi_Host *VAR_18 = VAR_16->device->host;
 struct lpfc_vport *VAR_19 = (struct lpfc_vport *) VAR_18->hostdata;
 struct lpfc_hba *VAR_20 = VAR_19->phba;
 struct lpfc_rport_data *VAR_21 = VAR_16->device->hostdata;
 struct lpfc_nodelist *VAR_22;
 struct lpfc_scsi_buf *VAR_23;
 struct fc_rport *VAR_24 = FUNC_23(FUNC_20(VAR_16->device));
 int VAR_25;

 VAR_25 = FUNC_5(VAR_24);
 if (VAR_25) {
  VAR_16->result = VAR_25;
  goto out_fail_command;
 }
 VAR_22 = VAR_21->pnode;

 if ((FUNC_19(VAR_16) != VAR_12) &&
  (!(VAR_20->sli3_options & VAR_9))) {

  FUNC_9(VAR_20, VAR_3, VAR_5,
    "9058 BLKGRD: ERROR: rcvd protected cmd:%02x"
    " op:%02x str=%s without registering for"
    " BlockGuard - Rejecting command\n",
    VAR_16->cmnd[0], FUNC_19(VAR_16),
    VAR_14[FUNC_19(VAR_16)]);
  goto out_fail_command;
 }





 if (!VAR_22 || !FUNC_0(VAR_22))
  goto out_tgt_busy;
 if (VAR_19->cfg_max_scsicmpl_time &&
  (FUNC_3(&VAR_22->cmd_pending) >= VAR_22->cmd_qdepth))
  goto out_tgt_busy;

 VAR_23 = FUNC_7(VAR_20, VAR_22);
 if (VAR_23 == ((void*)0)) {
  FUNC_11(VAR_20);

  FUNC_10(VAR_19, VAR_4, VAR_6,
     "0707 driver's buffer pool is empty, "
     "IO busied\n");
  goto out_host_busy;
 }





 VAR_23->pCmd = VAR_16;
 VAR_23->rdata = VAR_21;
 VAR_23->timeout = 0;
 VAR_23->start_time = VAR_15;
 VAR_16->host_scribble = (unsigned char *)VAR_23;
 VAR_16->scsi_done = VAR_17;

 if (FUNC_19(VAR_16) != VAR_12) {
  if (VAR_19->phba->cfg_enable_bg) {
   FUNC_10(VAR_19,
      VAR_4, VAR_7,
      "9033 BLKGRD: rcvd %s cmd:x%x "
      "sector x%llx cnt %u pt %x\n",
      VAR_14[FUNC_19(VAR_16)],
      VAR_16->cmnd[0],
      (unsigned long long)FUNC_18(VAR_16),
      FUNC_4(VAR_16->request),
      (VAR_16->cmnd[1]>>5));
  }
  VAR_25 = FUNC_6(VAR_20, VAR_23);
 } else {
  if (VAR_19->phba->cfg_enable_bg) {
   FUNC_10(VAR_19,
      VAR_4, VAR_7,
      "9038 BLKGRD: rcvd PROT_NORMAL cmd: "
      "x%x sector x%llx cnt %u pt %x\n",
      VAR_16->cmnd[0],
      (unsigned long long)FUNC_18(VAR_16),
      FUNC_4(VAR_16->request),
      (VAR_16->cmnd[1]>>5));
  }
  VAR_25 = FUNC_14(VAR_20, VAR_23);
 }

 if (VAR_25)
  goto out_host_busy_free_buf;

 FUNC_13(VAR_19, VAR_23, VAR_22);

 FUNC_2(&VAR_22->cmd_pending);
 VAR_25 = FUNC_17(VAR_20, VAR_8,
      &VAR_23->cur_iocbq, VAR_13);
 if (VAR_25) {
  FUNC_1(&VAR_22->cmd_pending);
  goto out_host_busy_free_buf;
 }
 if (VAR_20->cfg_poll & VAR_1) {
  FUNC_22(VAR_18->host_lock);
  FUNC_16(VAR_20,
   &VAR_20->sli.ring[VAR_8], VAR_2);

  FUNC_21(VAR_18->host_lock);
  if (VAR_20->cfg_poll & VAR_0)
   FUNC_8(VAR_20);
 }

 return 0;

 out_host_busy_free_buf:
 FUNC_15(VAR_20, VAR_23);
 FUNC_12(VAR_20, VAR_23);
 out_host_busy:
 return VAR_10;

 out_tgt_busy:
 return VAR_11;

 out_fail_command:
 VAR_17(VAR_16);
 return 0;
}
