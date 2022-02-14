
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct qla_hw_data {scalar_t__ current_topology; TYPE_9__* pdev; TYPE_4__* isp_ops; } ;
struct msg_echo_lb {char* req_sg_cnt; char* rsp_sg_cnt; char* options; char* iteration_count; scalar_t__ transfer_size; void* rcv_dma; void* send_dma; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_24__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct TYPE_33__ {scalar_t__ sg_cnt; int sg_list; } ;
struct fc_bsg_job {int reply_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_10__ request_payload; TYPE_8__ reply_payload; TYPE_6__* req; TYPE_5__* reply; TYPE_3__* request; struct Scsi_Host* shost; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_32__ {int online; } ;
struct TYPE_25__ {int dpc_flags; int loop_state; TYPE_7__ flags; struct qla_hw_data* hw; } ;
typedef TYPE_11__ scsi_qla_host_t ;
typedef int response ;
typedef int new_config ;
typedef void* dma_addr_t ;
typedef int config ;
struct TYPE_34__ {int dev; } ;
struct TYPE_31__ {scalar_t__ sense; } ;
struct TYPE_30__ {int result; scalar_t__ reply_payload_rcv_len; } ;
struct TYPE_29__ {int (* fw_dump ) (TYPE_11__*,int ) ;} ;
struct TYPE_26__ {char** vendor_cmd; } ;
struct TYPE_27__ {TYPE_1__ h_vendor; } ;
struct TYPE_28__ {TYPE_2__ rqst_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,scalar_t__,void**,int ) ;
 int FUNC_4 (int *,scalar_t__,int *,void*) ;
 void* FUNC_5 (int *,int ,scalar_t__,int ) ;
 int FUNC_6 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,scalar_t__*,int) ;
 int FUNC_9 (scalar_t__*,int ,int) ;
 int FUNC_10 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_22 ;
 int FUNC_11 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_23 ;
 int FUNC_12 (TYPE_11__*,struct msg_echo_lb*,scalar_t__*) ;
 int FUNC_13 (TYPE_11__*,struct msg_echo_lb*,scalar_t__*) ;
 int FUNC_14 (TYPE_11__*) ;
 int FUNC_15 (TYPE_11__*) ;
 scalar_t__ FUNC_16 (TYPE_11__*,scalar_t__*) ;
 int FUNC_17 (TYPE_11__*,scalar_t__*,int,int) ;
 scalar_t__ FUNC_18 (TYPE_11__*) ;
 int FUNC_19 (TYPE_11__*,scalar_t__*,scalar_t__*,char*) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_22 (int ,scalar_t__,int *,scalar_t__) ;
 TYPE_11__* FUNC_23 (struct Scsi_Host*) ;
 int FUNC_24 (TYPE_11__*,int ) ;
 int FUNC_25 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_26(struct fc_bsg_job *VAR_24)
{
 struct Scsi_Host *VAR_25 = VAR_24->shost;
 scsi_qla_host_t *VAR_26 = FUNC_23(VAR_25);
 struct qla_hw_data *VAR_27 = VAR_26->hw;
 int VAR_28;
 uint8_t VAR_29;
 char *VAR_30;
 struct msg_echo_lb VAR_31;
 uint16_t VAR_32[VAR_17];
 uint16_t VAR_33[4], VAR_34[4];
 uint8_t *VAR_35;
 uint8_t *VAR_36 = ((void*)0);
 dma_addr_t VAR_37;
 uint32_t VAR_38;
 uint8_t *VAR_39 = ((void*)0);
 dma_addr_t VAR_40;
 uint32_t VAR_41;

 if (!VAR_26->flags.online) {
  FUNC_11(VAR_23, VAR_26, 0x7019, "Host is not online.\n");
  return -VAR_5;
 }

 VAR_31.req_sg_cnt = FUNC_5(&VAR_27->pdev->dev,
  VAR_24->request_payload.sg_list,
  VAR_24->request_payload.sg_cnt, VAR_3);

 if (!VAR_31.req_sg_cnt) {
  FUNC_11(VAR_23, VAR_26, 0x701a,
      "dma_map_sg returned %d for request.\n", VAR_31.req_sg_cnt);
  return -VAR_7;
 }

 VAR_31.rsp_sg_cnt = FUNC_5(&VAR_27->pdev->dev,
  VAR_24->reply_payload.sg_list, VAR_24->reply_payload.sg_cnt,
  VAR_2);

 if (!VAR_31.rsp_sg_cnt) {
  FUNC_11(VAR_23, VAR_26, 0x701b,
      "dma_map_sg returned %d for reply.\n", VAR_31.rsp_sg_cnt);
  VAR_28 = -VAR_7;
  goto done_unmap_req_sg;
 }

 if ((VAR_31.req_sg_cnt != VAR_24->request_payload.sg_cnt) ||
  (VAR_31.rsp_sg_cnt != VAR_24->reply_payload.sg_cnt)) {
  FUNC_11(VAR_23, VAR_26, 0x701c,
      "dma mapping resulted in different sg counts, "
      "request_sg_cnt: %x dma_request_sg_cnt: %x "
      "reply_sg_cnt: %x dma_reply_sg_cnt: %x.\n",
      VAR_24->request_payload.sg_cnt, VAR_31.req_sg_cnt,
      VAR_24->reply_payload.sg_cnt, VAR_31.rsp_sg_cnt);

  VAR_28 = -VAR_4;
  goto done_unmap_sg;
 }
 VAR_38 = VAR_41 = VAR_24->request_payload.payload_len;
 VAR_36 = FUNC_3(&VAR_27->pdev->dev, VAR_38,
  &VAR_37, VAR_10);
 if (!VAR_36) {
  FUNC_11(VAR_23, VAR_26, 0x701d,
      "dma alloc failed for req_data.\n");
  VAR_28 = -VAR_7;
  goto done_unmap_sg;
 }

 VAR_39 = FUNC_3(&VAR_27->pdev->dev, VAR_41,
  &VAR_40, VAR_10);
 if (!VAR_39) {
  FUNC_11(VAR_23, VAR_26, 0x7004,
      "dma alloc failed for rsp_data.\n");
  VAR_28 = -VAR_7;
  goto done_free_dma_req;
 }


 FUNC_22(VAR_24->request_payload.sg_list,
  VAR_24->request_payload.sg_cnt, VAR_36, VAR_38);

 VAR_31.send_dma = VAR_37;
 VAR_31.rcv_dma = VAR_40;
 VAR_31.transfer_size = VAR_38;

 VAR_31.options = VAR_24->request->rqst_data.h_vendor.vendor_cmd[1];
 VAR_31.iteration_count =
     VAR_24->request->rqst_data.h_vendor.vendor_cmd[2];

 if (FUNC_2(&VAR_26->loop_state) == VAR_16 &&
     (VAR_27->current_topology == VAR_15 ||
     ((FUNC_1(VAR_27) || FUNC_0(VAR_27)) &&
     FUNC_7(*(uint32_t *)VAR_36) == VAR_6
     && VAR_38 == VAR_18)) &&
     VAR_31.options == VAR_9) {
  VAR_30 = "FC_BSG_HST_VENDOR_ECHO_DIAG";
  FUNC_10(VAR_22, VAR_26, 0x701e,
      "BSG request type: %s.\n", VAR_30);
  VAR_29 = VAR_12;
  VAR_28 = FUNC_12(VAR_26, &VAR_31, VAR_32);
       } else {
  if (FUNC_1(VAR_27) || FUNC_0(VAR_27)) {
   FUNC_9(VAR_33, 0, sizeof(VAR_33));
   FUNC_9(VAR_34, 0, sizeof(VAR_34));

   if (FUNC_16(VAR_26, VAR_33)) {
    FUNC_11(VAR_23, VAR_26, 0x701f,
        "Get port config failed.\n");
    VAR_28 = -VAR_8;
    goto done_free_dma_rsp;
   }

   if ((VAR_33[0] & VAR_11) != 0) {
    FUNC_10(VAR_22, VAR_26, 0x70c4,
        "Loopback operation already in "
        "progress.\n");
    VAR_28 = -VAR_4;
    goto done_free_dma_rsp;
   }

   FUNC_10(VAR_22, VAR_26, 0x70c0,
       "elreq.options=%04x\n", VAR_31.options);

   if (VAR_31.options == VAR_9)
    if (FUNC_0(VAR_27))
     VAR_28 = FUNC_19(VAR_26,
         VAR_33, VAR_34, VAR_31.options);
    else
     VAR_28 = FUNC_17(VAR_26,
         VAR_33, 1, 0);
   else
    VAR_28 = FUNC_19(VAR_26, VAR_33,
        VAR_34, VAR_31.options);

   if (VAR_28) {
    VAR_28 = -VAR_8;
    goto done_free_dma_rsp;
   }

   VAR_30 = "FC_BSG_HST_VENDOR_LOOPBACK";
   FUNC_10(VAR_22, VAR_26, 0x7028,
       "BSG request type: %s.\n", VAR_30);

   VAR_29 = VAR_13;
   VAR_28 = FUNC_13(VAR_26, &VAR_31, VAR_32);

   if (VAR_32[0] == VAR_19 &&
     VAR_32[1] == VAR_20) {
    FUNC_11(VAR_23, VAR_26, 0x7029,
        "MBX command error, Aborting ISP.\n");
    FUNC_20(VAR_14, &VAR_26->dpc_flags);
    FUNC_15(VAR_26);
    FUNC_14(VAR_26);

    if (FUNC_1(VAR_27)) {
     if (FUNC_18(VAR_26) !=
         VAR_21) {
      FUNC_11(VAR_23, VAR_26, 0x702a,
          "MPI reset failed.\n");
     }
    }

    VAR_28 = -VAR_5;
    goto done_free_dma_rsp;
   }

   if (VAR_34[0]) {
    int VAR_42;




    VAR_42 = FUNC_17(VAR_26,
        VAR_34, 0, 1);
    if (VAR_42) {





     VAR_27->isp_ops->fw_dump(VAR_26, 0);
     FUNC_20(VAR_14,
         &VAR_26->dpc_flags);
    }

   }

  } else {
   VAR_30 = "FC_BSG_HST_VENDOR_LOOPBACK";
   FUNC_10(VAR_22, VAR_26, 0x702b,
       "BSG request type: %s.\n", VAR_30);
   VAR_29 = VAR_13;
   VAR_28 = FUNC_13(VAR_26, &VAR_31, VAR_32);
  }
 }

 if (VAR_28) {
  FUNC_11(VAR_23, VAR_26, 0x702c,
      "Vendor request %s failed.\n", VAR_30);

  VAR_28 = 0;
  VAR_24->reply->result = (VAR_0 << 16);
  VAR_24->reply->reply_payload_rcv_len = 0;
 } else {
  FUNC_10(VAR_22, VAR_26, 0x702d,
      "Vendor request %s completed.\n", VAR_30);
  VAR_24->reply->result = (VAR_1 << 16);
  FUNC_21(VAR_24->reply_payload.sg_list,
   VAR_24->reply_payload.sg_cnt, VAR_39,
   VAR_41);
 }

 VAR_24->reply_len = sizeof(struct fc_bsg_reply) +
     sizeof(VAR_32) + sizeof(uint8_t);
 VAR_35 = ((uint8_t *)VAR_24->req->sense) +
     sizeof(struct fc_bsg_reply);
 FUNC_8(VAR_35, VAR_32, sizeof(VAR_32));
 VAR_35 += sizeof(VAR_32);
 *VAR_35 = VAR_29;

done_free_dma_rsp:
 FUNC_4(&VAR_27->pdev->dev, VAR_41,
  VAR_39, VAR_40);
done_free_dma_req:
 FUNC_4(&VAR_27->pdev->dev, VAR_38,
  VAR_36, VAR_37);
done_unmap_sg:
 FUNC_6(&VAR_27->pdev->dev,
     VAR_24->reply_payload.sg_list,
     VAR_24->reply_payload.sg_cnt, VAR_2);
done_unmap_req_sg:
 FUNC_6(&VAR_27->pdev->dev,
     VAR_24->request_payload.sg_list,
     VAR_24->request_payload.sg_cnt, VAR_3);
 if (!VAR_28)
  VAR_24->job_done(VAR_24);
 return VAR_28;
}
