
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
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {int s_dma_pool; TYPE_5__* pdev; } ;
struct TYPE_18__ {int param1; int param0; int id; } ;
struct TYPE_23__ {int start_addr; } ;
struct TYPE_24__ {int context; int type; } ;
struct TYPE_25__ {TYPE_1__ config; TYPE_6__ mem; TYPE_7__ info; } ;
struct TYPE_26__ {TYPE_8__ u; } ;
struct TYPE_16__ {int cmd; int len; TYPE_9__ mgmtp; } ;
struct qla_bsg_a84_mgmt {TYPE_10__ mgmt; } ;
struct fc_bsg_request {int dummy; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_21__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct TYPE_20__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct fc_bsg_job {int reply_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_4__ reply_payload; TYPE_3__ request_payload; TYPE_2__* reply; scalar_t__ request; struct Scsi_Host* shost; } ;
struct access_chip_84xx {int entry_count; void* dseg_length; void** dseg_address; void* dseg_count; void* total_byte_cnt; void* parameter3; void* parameter2; void* parameter1; void* options; int entry_type; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_17__ {struct qla_hw_data* hw; } ;
typedef TYPE_11__ scsi_qla_host_t ;
typedef int dma_addr_t ;
struct TYPE_22__ {int dev; } ;
struct TYPE_19__ {scalar_t__ reply_payload_rcv_len; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 void* FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int *,scalar_t__,int *,int ) ;
 int FUNC_6 (int *,scalar_t__,void*,int ) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__,scalar_t__) ;
 struct access_chip_84xx* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,struct access_chip_84xx*,int ) ;
 int FUNC_10 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct access_chip_84xx*,int ,int) ;
 int FUNC_12 (int ,TYPE_11__*,int,char*) ;
 int VAR_15 ;
 int FUNC_13 (int ,TYPE_11__*,int,char*,...) ;
 int VAR_16 ;
 int FUNC_14 (TYPE_11__*,struct access_chip_84xx*,int ,int ) ;
 int FUNC_15 (int ,scalar_t__,void*,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__,void*,scalar_t__) ;
 TYPE_11__* FUNC_17 (struct Scsi_Host*) ;
 int FUNC_18 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_19(struct fc_bsg_job *VAR_17)
{
 struct Scsi_Host *VAR_18 = VAR_17->shost;
 scsi_qla_host_t *VAR_19 = FUNC_17(VAR_18);
 struct qla_hw_data *VAR_20 = VAR_19->hw;
 struct access_chip_84xx *VAR_21 = ((void*)0);
 dma_addr_t VAR_22, VAR_23;
 void *VAR_24 = ((void*)0);
 int VAR_25 = 0;
 struct qla_bsg_a84_mgmt *VAR_26;
 uint32_t VAR_27;
 uint32_t VAR_28 = 0;
 uint32_t VAR_29 = VAR_8;

 if (!FUNC_0(VAR_20)) {
  FUNC_13(VAR_16, VAR_19, 0x703a,
      "Not 84xx, exiting.\n");
  return -VAR_11;
 }

 VAR_26 = (struct qla_bsg_a84_mgmt *)((char *)VAR_17->request +
  sizeof(struct fc_bsg_request));
 if (!VAR_26) {
  FUNC_13(VAR_16, VAR_19, 0x703b,
      "MGMT header not provided, exiting.\n");
  return -VAR_11;
 }

 VAR_21 = FUNC_8(VAR_20->s_dma_pool, VAR_14, &VAR_22);
 if (!VAR_21) {
  FUNC_13(VAR_16, VAR_19, 0x703c,
      "DMA alloc failed for fw buffer.\n");
  return -VAR_13;
 }

 FUNC_11(VAR_21, 0, sizeof(struct access_chip_84xx));
 VAR_21->entry_type = VAR_0;
 VAR_21->entry_count = 1;

 switch (VAR_26->mgmt.cmd) {
 case 129:
 case 130:
  VAR_27 = FUNC_7(&VAR_20->pdev->dev,
   VAR_17->reply_payload.sg_list,
   VAR_17->reply_payload.sg_cnt, VAR_7);
  if (!VAR_27) {
   FUNC_13(VAR_16, VAR_19, 0x703d,
       "dma_map_sg returned %d for reply.\n", VAR_27);
   VAR_25 = -VAR_13;
   goto exit_mgmt;
  }

  VAR_29 = VAR_7;

  if (VAR_27 != VAR_17->reply_payload.sg_cnt) {
   FUNC_13(VAR_16, VAR_19, 0x703e,
       "DMA mapping resulted in different sg counts, "
       "reply_sg_cnt: %x dma_reply_sg_cnt: %x.\n",
       VAR_17->reply_payload.sg_cnt, VAR_27);
   VAR_25 = -VAR_10;
   goto done_unmap_sg;
  }

  VAR_28 = VAR_17->reply_payload.payload_len;

  VAR_24 = FUNC_5(&VAR_20->pdev->dev, VAR_28,
   &VAR_23, VAR_14);
  if (!VAR_24) {
   FUNC_13(VAR_16, VAR_19, 0x703f,
       "DMA alloc failed for mgmt_b.\n");
   VAR_25 = -VAR_13;
   goto done_unmap_sg;
  }

  if (VAR_26->mgmt.cmd == 129) {
   VAR_21->options = FUNC_3(VAR_2);
   VAR_21->parameter1 =
    FUNC_4(
    VAR_26->mgmt.mgmtp.u.mem.start_addr);

  } else if (VAR_26->mgmt.cmd == 130) {
   VAR_21->options = FUNC_3(VAR_4);
   VAR_21->parameter1 =
    FUNC_4(VAR_26->mgmt.mgmtp.u.info.type);

   VAR_21->parameter2 =
    FUNC_4(
    VAR_26->mgmt.mgmtp.u.info.context);
  }
  break;

 case 128:
  VAR_27 = FUNC_7(&VAR_20->pdev->dev,
   VAR_17->request_payload.sg_list,
   VAR_17->request_payload.sg_cnt, VAR_9);

  if (!VAR_27) {
   FUNC_13(VAR_16, VAR_19, 0x7040,
       "dma_map_sg returned %d.\n", VAR_27);
   VAR_25 = -VAR_13;
   goto exit_mgmt;
  }

  VAR_29 = VAR_9;

  if (VAR_27 != VAR_17->request_payload.sg_cnt) {
   FUNC_13(VAR_16, VAR_19, 0x7041,
       "DMA mapping resulted in different sg counts, "
       "request_sg_cnt: %x dma_request_sg_cnt: %x.\n",
       VAR_17->request_payload.sg_cnt, VAR_27);
   VAR_25 = -VAR_10;
   goto done_unmap_sg;
  }

  VAR_28 = VAR_17->request_payload.payload_len;
  VAR_24 = FUNC_5(&VAR_20->pdev->dev, VAR_28,
   &VAR_23, VAR_14);
  if (!VAR_24) {
   FUNC_13(VAR_16, VAR_19, 0x7042,
       "DMA alloc failed for mgmt_b.\n");
   VAR_25 = -VAR_13;
   goto done_unmap_sg;
  }

  FUNC_16(VAR_17->request_payload.sg_list,
   VAR_17->request_payload.sg_cnt, VAR_24, VAR_28);

  VAR_21->options = FUNC_3(VAR_3);
  VAR_21->parameter1 =
   FUNC_4(VAR_26->mgmt.mgmtp.u.mem.start_addr);
  break;

 case 131:
  VAR_21->options = FUNC_3(VAR_1);
  VAR_21->parameter1 =
   FUNC_4(VAR_26->mgmt.mgmtp.u.config.id);

  VAR_21->parameter2 =
   FUNC_4(VAR_26->mgmt.mgmtp.u.config.param0);

  VAR_21->parameter3 =
   FUNC_4(VAR_26->mgmt.mgmtp.u.config.param1);
  break;

 default:
  VAR_25 = -VAR_12;
  goto exit_mgmt;
 }

 if (VAR_26->mgmt.cmd != 131) {
  VAR_21->total_byte_cnt = FUNC_4(VAR_26->mgmt.len);
  VAR_21->dseg_count = FUNC_3(1);
  VAR_21->dseg_address[0] = FUNC_4(FUNC_1(VAR_23));
  VAR_21->dseg_address[1] = FUNC_4(FUNC_2(VAR_23));
  VAR_21->dseg_length = FUNC_4(VAR_26->mgmt.len);
 }

 VAR_25 = FUNC_14(VAR_19, VAR_21, VAR_22, 0);

 if (VAR_25) {
  FUNC_13(VAR_16, VAR_19, 0x7043,
      "Vendor request 84xx mgmt failed.\n");

  VAR_25 = (VAR_5 << 16);

 } else {
  FUNC_12(VAR_15, VAR_19, 0x7044,
      "Vendor request 84xx mgmt completed.\n");

  VAR_17->reply_len = sizeof(struct fc_bsg_reply);
  VAR_17->reply->result = VAR_6;

  if ((VAR_26->mgmt.cmd == 129) ||
   (VAR_26->mgmt.cmd == 130)) {
   VAR_17->reply->reply_payload_rcv_len =
    VAR_17->reply_payload.payload_len;

   FUNC_15(VAR_17->reply_payload.sg_list,
    VAR_17->reply_payload.sg_cnt, VAR_24,
    VAR_28);
  }
 }

done_unmap_sg:
 if (VAR_24)
  FUNC_6(&VAR_20->pdev->dev, VAR_28, VAR_24, VAR_23);

 if (VAR_29 == VAR_9)
  FUNC_10(&VAR_20->pdev->dev, VAR_17->request_payload.sg_list,
   VAR_17->request_payload.sg_cnt, VAR_9);
 else if (VAR_29 == VAR_7)
  FUNC_10(&VAR_20->pdev->dev, VAR_17->reply_payload.sg_list,
   VAR_17->reply_payload.sg_cnt, VAR_7);

exit_mgmt:
 FUNC_9(VAR_20->s_dma_pool, VAR_21, VAR_22);

 if (!VAR_25)
  VAR_17->job_done(VAR_17);
 return VAR_25;
}
