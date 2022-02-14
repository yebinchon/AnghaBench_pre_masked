
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_27__ {int scsi_status; int comp_status; } ;
typedef TYPE_9__ sts_entry_t ;
struct sts_entry_24xx {int scsi_status; int comp_status; } ;
struct req_que {size_t num_outstanding_cmds; int id; TYPE_10__** outstanding_cmds; } ;
struct qla_hw_data {int dummy; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_23__ {scalar_t__ payload_len; } ;
struct fc_bsg_job {int reply_len; TYPE_8__* reply; TYPE_5__ reply_payload; TYPE_4__* request; } ;
struct TYPE_19__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_17__ {int (* done ) (TYPE_11__*,TYPE_10__*,int) ;TYPE_1__ u; } ;
typedef TYPE_10__ srb_t ;
struct TYPE_18__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_11__ scsi_qla_host_t ;
struct TYPE_24__ {size_t* vendor_rsp; } ;
struct TYPE_25__ {TYPE_6__ vendor_reply; } ;
struct TYPE_26__ {TYPE_7__ reply_data; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_20__ {int* vendor_cmd; } ;
struct TYPE_21__ {TYPE_2__ h_vendor; } ;
struct TYPE_22__ {TYPE_3__ rqst_data; } ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_11__*,int,char*,int,...) ;
 int VAR_9 ;
 int FUNC_3 (int ,TYPE_11__*,int,char*,size_t,...) ;
 int VAR_10 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_11__*,TYPE_10__*,int) ;

__attribute__((used)) static void
FUNC_6(scsi_qla_host_t *VAR_11, void *VAR_12, struct req_que *VAR_13, uint32_t VAR_14)
{
 struct qla_hw_data *VAR_15 = VAR_11->hw;
 srb_t *VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 uint16_t VAR_19;
 uint32_t VAR_20 = VAR_5;
 struct fc_bsg_job *VAR_21 = ((void*)0);
 sts_entry_t *VAR_22;
 struct sts_entry_24xx *VAR_23;
 VAR_22 = (sts_entry_t *) VAR_12;
 VAR_23 = (struct sts_entry_24xx *) VAR_12;


 if (VAR_14 >= VAR_13->num_outstanding_cmds) {
  FUNC_3(VAR_10, VAR_11, 0x70af,
      "Invalid SCSI completion handle 0x%x.\n", VAR_14);
  FUNC_4(VAR_7, &VAR_11->dpc_flags);
  return;
 }

 VAR_16 = VAR_13->outstanding_cmds[VAR_14];
 if (VAR_16) {

  VAR_13->outstanding_cmds[VAR_14] = ((void*)0);
  VAR_21 = VAR_16->u.bsg_job;
 } else {
  FUNC_3(VAR_10, VAR_11, 0x70b0,
      "Req:%d: Invalid ISP SCSI completion handle(0x%x)\n",
      VAR_13->id, VAR_14);

  FUNC_4(VAR_7, &VAR_11->dpc_flags);
  return;
 }

 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_1(VAR_23->comp_status);
  VAR_18 = FUNC_1(VAR_23->scsi_status) & VAR_8;
 } else {
  VAR_17 = FUNC_1(VAR_22->comp_status);
  VAR_18 = FUNC_1(VAR_22->scsi_status) & VAR_8;
 }

 VAR_19 = VAR_21->request->rqst_data.h_vendor.vendor_cmd[1];
 switch (VAR_17) {
 case 131:
  if (VAR_18 == 0) {
   VAR_21->reply->reply_payload_rcv_len =
     VAR_21->reply_payload.payload_len;
   VAR_20 = VAR_5;
  }
  goto done;

 case 130:
  FUNC_2(VAR_9, VAR_11, 0x70b1,
      "Command completed with date overrun thread_id=%d\n",
      VAR_19);
  VAR_20 = VAR_1;
  break;

 case 129:
  FUNC_2(VAR_9, VAR_11, 0x70b2,
      "Command completed with date underrun thread_id=%d\n",
      VAR_19);
  VAR_20 = VAR_2;
  break;
 case 137:
  FUNC_2(VAR_9, VAR_11, 0x70b3,
      "Command completed with read data overrun thread_id=%d\n",
      VAR_19);
  VAR_20 = VAR_1;
  break;

 case 133:
  FUNC_2(VAR_9, VAR_11, 0x70b4,
      "Command completed with read and write data overrun "
      "thread_id=%d\n", VAR_19);
  VAR_20 = VAR_1;
  break;

 case 136:
  FUNC_2(VAR_9, VAR_11, 0x70b5,
      "Command completed with read data over and write data "
      "underrun thread_id=%d\n", VAR_19);
  VAR_20 = VAR_1;
  break;

 case 135:
  FUNC_2(VAR_9, VAR_11, 0x70b6,
      "Command completed with read data data underrun "
      "thread_id=%d\n", VAR_19);
  VAR_20 = VAR_2;
  break;

 case 134:
  FUNC_2(VAR_9, VAR_11, 0x70b7,
      "Command completed with read data under and write data "
      "overrun thread_id=%d\n", VAR_19);
  VAR_20 = VAR_2;
  break;

 case 132:
  FUNC_2(VAR_9, VAR_11, 0x70b8,
      "Command completed with read and write data underrun "
      "thread_id=%d\n", VAR_19);
  VAR_20 = VAR_2;
  break;

 case 138:
  FUNC_2(VAR_9, VAR_11, 0x70b9,
      "Command completed with data DMA error thread_id=%d\n",
      VAR_19);
  VAR_20 = VAR_3;
  break;

 case 128:
  FUNC_2(VAR_9, VAR_11, 0x70ba,
      "Command completed with timeout thread_id=%d\n",
      VAR_19);
  VAR_20 = VAR_6;
  break;
 default:
  FUNC_2(VAR_9, VAR_11, 0x70bb,
      "Command completed with completion status=0x%x "
      "thread_id=%d\n", VAR_17, VAR_19);
  VAR_20 = VAR_4;
  break;
 }
  VAR_21->reply->reply_payload_rcv_len = 0;

done:

        VAR_21->reply->reply_data.vendor_reply.vendor_rsp[0] = VAR_20;
        VAR_21->reply_len = sizeof(struct fc_bsg_reply);


 VAR_16->done(VAR_11, VAR_16, (VAR_0 << 6));

}
