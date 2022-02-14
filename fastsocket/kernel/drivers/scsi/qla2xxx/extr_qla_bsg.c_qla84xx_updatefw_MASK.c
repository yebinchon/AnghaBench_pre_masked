
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct verify_chip_entry_84xx {int entry_count; void* data_seg_cnt; void* dseg_length; void** dseg_address; void* fw_seq_size; void* fw_size; void* fw_ver; void* options; int entry_type; } ;
struct qla_hw_data {TYPE_5__* pdev; int s_dma_pool; } ;
struct fc_bsg_reply {int dummy; } ;
struct TYPE_17__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct fc_bsg_job {int reply_len; int (* job_done ) (struct fc_bsg_job*) ;TYPE_6__ request_payload; TYPE_4__* reply; TYPE_3__* request; struct Scsi_Host* shost; } ;
struct access_chip_84xx {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_18__ {struct qla_hw_data* hw; } ;
typedef TYPE_7__ scsi_qla_host_t ;
typedef int dma_addr_t ;
struct TYPE_16__ {int dev; } ;
struct TYPE_15__ {int result; } ;
struct TYPE_12__ {scalar_t__* vendor_cmd; } ;
struct TYPE_13__ {TYPE_1__ h_vendor; } ;
struct TYPE_14__ {TYPE_2__ rqst_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (int *,scalar_t__,int *,int ) ;
 int FUNC_6 (int *,scalar_t__,void*,int ) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__,int ) ;
 struct verify_chip_entry_84xx* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,struct verify_chip_entry_84xx*,int ) ;
 int FUNC_10 (int *,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct verify_chip_entry_84xx*,int ,int) ;
 int FUNC_13 (int ,TYPE_7__*,int,char*) ;
 int VAR_12 ;
 int FUNC_14 (int ,TYPE_7__*,int,char*,...) ;
 int VAR_13 ;
 int FUNC_15 (TYPE_7__*,struct verify_chip_entry_84xx*,int ,int ,int) ;
 int FUNC_16 (int ,scalar_t__,void*,scalar_t__) ;
 TYPE_7__* FUNC_17 (struct Scsi_Host*) ;
 int FUNC_18 (struct fc_bsg_job*) ;

__attribute__((used)) static int
FUNC_19(struct fc_bsg_job *VAR_14)
{
 struct Scsi_Host *VAR_15 = VAR_14->shost;
 scsi_qla_host_t *VAR_16 = FUNC_17(VAR_15);
 struct qla_hw_data *VAR_17 = VAR_16->hw;
 struct verify_chip_entry_84xx *VAR_18 = ((void*)0);
 dma_addr_t VAR_19, VAR_20;
 void *VAR_21 = ((void*)0);
 int VAR_22 = 0;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint16_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;

 if (!FUNC_0(VAR_17)) {
  FUNC_13(VAR_12, VAR_16, 0x7032,
      "Not 84xx, exiting.\n");
  return -VAR_5;
 }

 VAR_23 = FUNC_7(&VAR_17->pdev->dev, VAR_14->request_payload.sg_list,
  VAR_14->request_payload.sg_cnt, VAR_3);
 if (!VAR_23) {
  FUNC_14(VAR_13, VAR_16, 0x7033,
      "dma_map_sg returned %d for request.\n", VAR_23);
  return -VAR_6;
 }

 if (VAR_23 != VAR_14->request_payload.sg_cnt) {
  FUNC_14(VAR_13, VAR_16, 0x7034,
      "DMA mapping resulted in different sg counts, "
      "request_sg_cnt: %x dma_request_sg_cnt: %x.\n",
      VAR_14->request_payload.sg_cnt, VAR_23);
  VAR_22 = -VAR_4;
  goto done_unmap_sg;
 }

 VAR_24 = VAR_14->request_payload.payload_len;
 VAR_21 = FUNC_5(&VAR_17->pdev->dev, VAR_24,
  &VAR_20, VAR_7);
 if (!VAR_21) {
  FUNC_14(VAR_13, VAR_16, 0x7035,
      "DMA alloc failed for fw_buf.\n");
  VAR_22 = -VAR_6;
  goto done_unmap_sg;
 }

 FUNC_16(VAR_14->request_payload.sg_list,
  VAR_14->request_payload.sg_cnt, VAR_21, VAR_24);

 VAR_18 = FUNC_8(VAR_17->s_dma_pool, VAR_7, &VAR_19);
 if (!VAR_18) {
  FUNC_14(VAR_13, VAR_16, 0x7036,
      "DMA alloc failed for fw buffer.\n");
  VAR_22 = -VAR_6;
  goto done_free_fw_buf;
 }

 VAR_26 = VAR_14->request->rqst_data.h_vendor.vendor_cmd[1];
 VAR_27 = FUNC_11(*((uint32_t *)((uint32_t *)VAR_21 + 2)));

 FUNC_12(VAR_18, 0, sizeof(struct access_chip_84xx));
 VAR_18->entry_type = VAR_11;
 VAR_18->entry_count = 1;

 VAR_25 = VAR_10 | VAR_9;
 if (VAR_26 == VAR_0)
  VAR_25 |= VAR_8;

 VAR_18->options = FUNC_3(VAR_25);
 VAR_18->fw_ver = FUNC_4(VAR_27);
 VAR_18->fw_size = FUNC_4(VAR_24);
 VAR_18->fw_seq_size = FUNC_4(VAR_24);
 VAR_18->dseg_address[0] = FUNC_4(FUNC_1(VAR_20));
 VAR_18->dseg_address[1] = FUNC_4(FUNC_2(VAR_20));
 VAR_18->dseg_length = FUNC_4(VAR_24);
 VAR_18->data_seg_cnt = FUNC_3(1);

 VAR_22 = FUNC_15(VAR_16, VAR_18, VAR_19, 0, 120);

 if (VAR_22) {
  FUNC_14(VAR_13, VAR_16, 0x7037,
      "Vendor request 84xx updatefw failed.\n");

  VAR_22 = (VAR_1 << 16);
 } else {
  FUNC_13(VAR_12, VAR_16, 0x7038,
      "Vendor request 84xx updatefw completed.\n");

  VAR_14->reply_len = sizeof(struct fc_bsg_reply);
  VAR_14->reply->result = VAR_2;
 }

 FUNC_9(VAR_17->s_dma_pool, VAR_18, VAR_19);

done_free_fw_buf:
 FUNC_6(&VAR_17->pdev->dev, VAR_24, VAR_21, VAR_20);

done_unmap_sg:
 FUNC_10(&VAR_17->pdev->dev, VAR_14->request_payload.sg_list,
  VAR_14->request_payload.sg_cnt, VAR_3);

 if (!VAR_22)
  VAR_14->job_done(VAR_14);
 return VAR_22;
}
