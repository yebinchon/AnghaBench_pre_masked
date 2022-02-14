
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_23__ {int fcp_prio_enabled; } ;
struct qla_hw_data {TYPE_6__ flags; TYPE_9__* fcp_prio_cfg; } ;
struct qla_fcp_prio_cfg {int dummy; } ;
struct TYPE_22__ {int payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_21__ {int payload_len; int sg_cnt; int sg_list; } ;
struct fc_bsg_job {int (* job_done ) (struct fc_bsg_job*) ;TYPE_7__* reply; TYPE_5__ request_payload; TYPE_4__ reply_payload; TYPE_3__* request; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_25__ {struct qla_hw_data* hw; } ;
typedef TYPE_8__ scsi_qla_host_t ;
struct TYPE_26__ {int attributes; } ;
struct TYPE_24__ {int result; int reply_payload_rcv_len; } ;
struct TYPE_18__ {int* vendor_cmd; } ;
struct TYPE_19__ {TYPE_1__ h_vendor; } ;
struct TYPE_20__ {TYPE_2__ rqst_data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;




 int FUNC_3 (TYPE_9__*,int ,int) ;
 int FUNC_4 (int ,TYPE_8__*,int,char*,int) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_8__*,struct qla_fcp_prio_cfg*,int) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ,int ,TYPE_9__*,int) ;
 int FUNC_8 (int ,int ,TYPE_9__*,int) ;
 TYPE_8__* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct fc_bsg_job*) ;
 int FUNC_11 (TYPE_9__*) ;
 TYPE_9__* FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(struct fc_bsg_job *VAR_7)
{
 struct Scsi_Host *VAR_8 = VAR_7->shost;
 scsi_qla_host_t *VAR_9 = FUNC_9(VAR_8);
 struct qla_hw_data *VAR_10 = VAR_9->hw;
 int VAR_11 = 0;
 uint32_t VAR_12;
 uint32_t VAR_13;

 if (!(FUNC_0(VAR_10) || FUNC_1(VAR_10) || FUNC_2(VAR_10))) {
  VAR_11 = -VAR_2;
  goto exit_fcp_prio_cfg;
 }


 VAR_13 = VAR_7->request->rqst_data.h_vendor.vendor_cmd[1];


 if (!VAR_10->fcp_prio_cfg && (VAR_13 != 128)) {
  VAR_11 = -VAR_2;
  goto exit_fcp_prio_cfg;
 }
 switch (VAR_13) {
 case 131:
  if (VAR_10->flags.fcp_prio_enabled) {
   VAR_10->flags.fcp_prio_enabled = 0;
   VAR_10->fcp_prio_cfg->attributes &=
    ~VAR_4;
   FUNC_6(VAR_9);
   VAR_7->reply->result = VAR_1;
  } else {
   VAR_11 = -VAR_2;
   VAR_7->reply->result = (VAR_0 << 16);
   goto exit_fcp_prio_cfg;
  }
  break;

 case 130:
  if (!VAR_10->flags.fcp_prio_enabled) {
   if (VAR_10->fcp_prio_cfg) {
    VAR_10->flags.fcp_prio_enabled = 1;
    VAR_10->fcp_prio_cfg->attributes |=
        VAR_4;
    FUNC_6(VAR_9);
    VAR_7->reply->result = VAR_1;
   } else {
    VAR_11 = -VAR_2;
    VAR_7->reply->result = (VAR_0 << 16);
    goto exit_fcp_prio_cfg;
   }
  }
  break;

 case 129:
  VAR_12 = VAR_7->reply_payload.payload_len;
  if (!VAR_12 || VAR_12 > VAR_5) {
   VAR_11 = -VAR_2;
   VAR_7->reply->result = (VAR_0 << 16);
   goto exit_fcp_prio_cfg;
  }

  VAR_7->reply->result = VAR_1;
  VAR_7->reply->reply_payload_rcv_len =
   FUNC_7(
   VAR_7->reply_payload.sg_list,
   VAR_7->reply_payload.sg_cnt, VAR_10->fcp_prio_cfg,
   VAR_12);

  break;

 case 128:
  VAR_12 = VAR_7->request_payload.payload_len;
  if (!VAR_12 || VAR_12 > VAR_5) {
   VAR_7->reply->result = (VAR_0 << 16);
   VAR_11 = -VAR_2;
   goto exit_fcp_prio_cfg;
  }

  if (!VAR_10->fcp_prio_cfg) {
   VAR_10->fcp_prio_cfg = FUNC_12(VAR_5);
   if (!VAR_10->fcp_prio_cfg) {
    FUNC_4(VAR_6, VAR_9, 0x7050,
        "Unable to allocate memory for fcp prio "
        "config data (%x).\n", VAR_5);
    VAR_7->reply->result = (VAR_0 << 16);
    VAR_11 = -VAR_3;
    goto exit_fcp_prio_cfg;
   }
  }

  FUNC_3(VAR_10->fcp_prio_cfg, 0, VAR_5);
  FUNC_8(VAR_7->request_payload.sg_list,
  VAR_7->request_payload.sg_cnt, VAR_10->fcp_prio_cfg,
   VAR_5);



  if (!FUNC_5(VAR_9,
      (struct qla_fcp_prio_cfg *) VAR_10->fcp_prio_cfg, 1)) {
   VAR_7->reply->result = (VAR_0 << 16);
   VAR_11 = -VAR_2;



   FUNC_11(VAR_10->fcp_prio_cfg);
   VAR_10->fcp_prio_cfg = ((void*)0);
   goto exit_fcp_prio_cfg;
  }

  VAR_10->flags.fcp_prio_enabled = 0;
  if (VAR_10->fcp_prio_cfg->attributes & VAR_4)
   VAR_10->flags.fcp_prio_enabled = 1;
  FUNC_6(VAR_9);
  VAR_7->reply->result = VAR_1;
  break;
 default:
  VAR_11 = -VAR_2;
  break;
 }
exit_fcp_prio_cfg:
 if (!VAR_11)
  VAR_7->job_done(VAR_7);
 return VAR_11;
}
