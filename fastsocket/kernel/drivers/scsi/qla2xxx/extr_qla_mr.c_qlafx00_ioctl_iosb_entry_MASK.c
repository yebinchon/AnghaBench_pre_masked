
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int flags; void* req_data; void* result; void* fw_flags; void* seq_number; } ;
struct TYPE_12__ {TYPE_1__ fxiocb; } ;
struct srb_iocb {TYPE_2__ u; } ;
struct req_que {int dummy; } ;
struct qla_mt_iocb_rsp_fx00 {int * reserved_3; int seq_number; int status; int res_count; int reserved_2; int adapid_hi; int adapid; int ioctl_data; int ioctl_flags; int func_type; int reserved_1; } ;
struct ioctl_iocb_entry_fx00 {int * reserved_2; int seq_no; int status; int residuallen; int reserved_1; int adapid_hi; int adapid; int dataword_r; int fw_iotcl_flags; int comp_func_num; int reserved_0; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_17__ {int payload_len; } ;
struct fc_bsg_job {int reply_len; TYPE_7__ reply_payload; TYPE_6__* reply; TYPE_4__* req; } ;
struct TYPE_13__ {struct fc_bsg_job* bsg_job; struct srb_iocb iocb_cmd; } ;
struct TYPE_18__ {scalar_t__ type; int (* done ) (int *,TYPE_8__*,int) ;TYPE_5__* fcport; TYPE_3__ u; } ;
typedef TYPE_8__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_16__ {int result; int reply_payload_rcv_len; } ;
struct TYPE_15__ {int vha; } ;
struct TYPE_14__ {scalar_t__ sense; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct qla_mt_iocb_rsp_fx00*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,int ,int,int *,int) ;
 TYPE_8__* FUNC_4 (int *,char const*,struct req_que*,struct ioctl_iocb_entry_fx00*) ;
 int FUNC_5 (int *,TYPE_8__*,int) ;

__attribute__((used)) static void
FUNC_6(scsi_qla_host_t *VAR_5, struct req_que *VAR_6,
    struct ioctl_iocb_entry_fx00 *VAR_7)
{
 const char VAR_8[] = "IOSB_IOCB";
 srb_t *VAR_9;
 struct fc_bsg_job *VAR_10;
 struct srb_iocb *VAR_11;
 int VAR_12;
 struct qla_mt_iocb_rsp_fx00 VAR_13;
 uint8_t *VAR_14;

 VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_6, VAR_7);
 if (!VAR_9)
  return;

 if (VAR_9->type == VAR_2) {
  VAR_11 = &VAR_9->u.iocb_cmd;
  VAR_11->u.fxiocb.seq_number = FUNC_0(VAR_7->seq_no);
  VAR_11->u.fxiocb.fw_flags = FUNC_0(VAR_7->fw_iotcl_flags);
  VAR_11->u.fxiocb.result = FUNC_0(VAR_7->status);
  if (VAR_11->u.fxiocb.flags & VAR_1)
   VAR_11->u.fxiocb.req_data =
       FUNC_0(VAR_7->dataword_r);
 } else {
  VAR_10 = VAR_9->u.bsg_job;

  FUNC_2(&VAR_13, 0, sizeof(struct qla_mt_iocb_rsp_fx00));

  VAR_13.reserved_1 = VAR_7->reserved_0;
  VAR_13.func_type = VAR_7->comp_func_num;
  VAR_13.ioctl_flags = VAR_7->fw_iotcl_flags;
  VAR_13.ioctl_data = VAR_7->dataword_r;
  VAR_13.adapid = VAR_7->adapid;
  VAR_13.adapid_hi = VAR_7->adapid_hi;
  VAR_13.reserved_2 = VAR_7->reserved_1;
  VAR_13.res_count = VAR_7->residuallen;
  VAR_13.status = VAR_7->status;
  VAR_13.seq_number = VAR_7->seq_no;
  FUNC_1(VAR_13.reserved_3,
      VAR_7->reserved_2, 20 * sizeof(uint8_t));

  VAR_14 = ((uint8_t *)VAR_10->req->sense) +
      sizeof(struct fc_bsg_reply);

  FUNC_1(VAR_14, (uint8_t *)&VAR_13,
      sizeof(struct qla_mt_iocb_rsp_fx00));
  VAR_10->reply_len = sizeof(struct fc_bsg_reply) +
   sizeof(struct qla_mt_iocb_rsp_fx00) + sizeof(uint8_t);

  FUNC_3(VAR_3 + VAR_4,
      VAR_9->fcport->vha, 0x5080,
      (uint8_t *)VAR_7, sizeof(struct ioctl_iocb_entry_fx00));

  FUNC_3(VAR_3 + VAR_4,
      VAR_9->fcport->vha, 0x5074,
      (uint8_t *)VAR_14, sizeof(struct qla_mt_iocb_rsp_fx00));

  VAR_12 = VAR_10->reply->result = VAR_0 << 16;
  VAR_10->reply->reply_payload_rcv_len =
      VAR_10->reply_payload.payload_len;
 }
 VAR_9->done(VAR_5, VAR_9, VAR_12);
}
