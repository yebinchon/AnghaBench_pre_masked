
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


typedef int u32 ;
struct zfcp_fsf_req {int issued; int seq_no; int req_id; TYPE_4__* qtcb; } ;
struct zfcp_dbf_scsi_record {unsigned long scsi_cmnd; int rsp_validity; int sns_info_len; unsigned long old_fsf_reqid; int fsf_issued; int fsf_seqno; int fsf_reqid; int sns_info; int rsp_code; int rsp_resid; int rsp_scsi_status; int scsi_allowed; int scsi_retries; int scsi_opcode; int scsi_serial; int scsi_result; int scsi_lun; int scsi_id; int tag2; int tag; } ;
struct zfcp_dbf_dump {int total_size; int offset; int size; int data; int tag; } ;
struct zfcp_dbf {int scsi_lock; int scsi; struct zfcp_dbf_scsi_record scsi_buf; } ;
struct scsi_cmnd {char* cmnd; int allowed; int retries; scalar_t__ cmd_len; int serial_number; int result; TYPE_1__* device; } ;
struct TYPE_12__ {int fr_sns_len; int fr_resid; } ;
struct TYPE_11__ {int fr_flags; int fr_status; } ;
struct fcp_resp_with_ext {TYPE_6__ ext; TYPE_5__ resp; } ;
struct fcp_resp_rsp_info {int rsp_code; } ;
struct TYPE_8__ {int fcp_rsp; } ;
struct TYPE_9__ {TYPE_2__ io; } ;
struct TYPE_10__ {TYPE_3__ bottom; } ;
struct TYPE_7__ {int lun; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_scsi_record*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct zfcp_dbf_scsi_record*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,char const*,int ) ;

void FUNC_7(const char *VAR_6, const char *VAR_7, int VAR_8,
      struct zfcp_dbf *VAR_9, struct scsi_cmnd *VAR_10,
      struct zfcp_fsf_req *VAR_11, unsigned long VAR_12)
{
 struct zfcp_dbf_scsi_record *VAR_13 = &VAR_9->scsi_buf;
 struct zfcp_dbf_dump *VAR_14 = (struct zfcp_dbf_dump *)VAR_13;
 unsigned long VAR_15;
 struct fcp_resp_with_ext *VAR_16;
 struct fcp_resp_rsp_info *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 int VAR_19 = 0, VAR_20 = 0;

 FUNC_4(&VAR_9->scsi_lock, VAR_15);
 do {
  FUNC_2(VAR_13, 0, sizeof(*VAR_13));
  if (VAR_19 == 0) {
   FUNC_6(VAR_13->tag, VAR_6, VAR_5);
   FUNC_6(VAR_13->tag2, VAR_7, VAR_5);
   if (VAR_10 != ((void*)0)) {
    if (VAR_10->device) {
     VAR_13->scsi_id = VAR_10->device->id;
     VAR_13->scsi_lun = VAR_10->device->lun;
    }
    VAR_13->scsi_result = VAR_10->result;
    VAR_13->scsi_cmnd = (unsigned long)VAR_10;
    VAR_13->scsi_serial = VAR_10->serial_number;
    FUNC_1(VAR_13->scsi_opcode, VAR_10->cmnd,
     FUNC_3((int)VAR_10->cmd_len,
      VAR_4));
    VAR_13->scsi_retries = VAR_10->retries;
    VAR_13->scsi_allowed = VAR_10->allowed;
   }
   if (VAR_11 != ((void*)0)) {
    VAR_16 = (struct fcp_resp_with_ext *)
     &(VAR_11->qtcb->bottom.io.fcp_rsp);
    VAR_17 = (struct fcp_resp_rsp_info *)
     &VAR_16[1];
    VAR_18 = (char *) &VAR_16[1];
    if (VAR_16->resp.fr_flags & VAR_0)
     VAR_18 += VAR_16->ext.fr_sns_len;

    VAR_13->rsp_validity = VAR_16->resp.fr_flags;
    VAR_13->rsp_scsi_status = VAR_16->resp.fr_status;
    VAR_13->rsp_resid = VAR_16->ext.fr_resid;
    if (VAR_16->resp.fr_flags & VAR_0)
     VAR_13->rsp_code = VAR_17->rsp_code;
    if (VAR_16->resp.fr_flags & VAR_1) {
     VAR_20 = FUNC_3(VAR_16->ext.fr_sns_len,
        (u32)VAR_3);
     VAR_13->sns_info_len = VAR_20;
     FUNC_1(VAR_13->sns_info, VAR_18,
            FUNC_3(VAR_20,
         VAR_2));
     VAR_19 += FUNC_3(VAR_20,
            VAR_2);
    }

    VAR_13->fsf_reqid = VAR_11->req_id;
    VAR_13->fsf_seqno = VAR_11->seq_no;
    VAR_13->fsf_issued = VAR_11->issued;
   }
   VAR_13->old_fsf_reqid = VAR_12;
  } else {
   FUNC_6(VAR_14->tag, "dump", VAR_5);
   VAR_14->total_size = VAR_20;
   VAR_14->offset = VAR_19;
   VAR_14->size = FUNC_3(VAR_20 - VAR_19,
      (int)sizeof(struct
           zfcp_dbf_scsi_record) -
      (int)sizeof(struct zfcp_dbf_dump));
   FUNC_1(VAR_14->data, VAR_18 + VAR_19, VAR_14->size);
   VAR_19 += VAR_14->size;
  }
  FUNC_0(VAR_9->scsi, VAR_8, VAR_13, sizeof(*VAR_13));
 } while (VAR_19 < VAR_20);
 FUNC_5(&VAR_9->scsi_lock, VAR_15);
}
