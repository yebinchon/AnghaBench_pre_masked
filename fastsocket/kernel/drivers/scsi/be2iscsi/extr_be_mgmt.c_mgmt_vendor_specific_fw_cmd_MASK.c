
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short* vendor_cmd; } ;
struct TYPE_5__ {TYPE_1__ h_vendor; } ;
struct iscsi_bsg_request {TYPE_2__ rqst_data; } ;
struct TYPE_6__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_3__ request_payload; int request_len; struct iscsi_bsg_request* request; } ;
struct beiscsi_hba {int dummy; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {unsigned short region; unsigned short sector; unsigned short offset; unsigned int tag0; int hdr; } ;
struct be_dma_mem {int size; int dma; struct be_mcc_wrb* va; } ;
struct be_ctrl_info {int mbox_lock; } ;
struct be_cmd_resp_hdr {unsigned short region; unsigned short sector; unsigned short offset; unsigned int tag0; int hdr; } ;
struct be_bsg_vendor_cmd {unsigned short region; unsigned short sector; unsigned short offset; unsigned int tag0; int hdr; } ;


 int VAR_0 ;


 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*,short) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct be_mcc_wrb*,int ,int) ;
 struct be_sge* FUNC_7 (struct be_mcc_wrb*) ;
 int FUNC_8 (int ,int ,struct be_mcc_wrb*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 struct be_mcc_wrb* FUNC_12 (struct beiscsi_hba*) ;

unsigned int FUNC_13(struct be_ctrl_info *VAR_6,
      struct beiscsi_hba *VAR_7,
      struct bsg_job *VAR_8,
      struct be_dma_mem *VAR_9)
{
 struct be_cmd_resp_hdr *VAR_10;
 struct be_mcc_wrb *VAR_11 = FUNC_12(VAR_7);
 struct be_sge *VAR_12 = FUNC_7(VAR_11);
 unsigned int VAR_13 = 0;
 struct iscsi_bsg_request *VAR_14 = VAR_8->request;
 struct be_bsg_vendor_cmd *VAR_15 = VAR_9->va;
 unsigned short VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_9->size = VAR_8->request_payload.payload_len;
 FUNC_6(VAR_9->va, 0, VAR_9->size);
 VAR_10 = VAR_9->va;
 VAR_16 = VAR_14->rqst_data.h_vendor.vendor_cmd[1];
 VAR_17 = VAR_14->rqst_data.h_vendor.vendor_cmd[2];
 VAR_18 = VAR_14->rqst_data.h_vendor.vendor_cmd[3];
 VAR_19 = VAR_14->rqst_data.h_vendor.vendor_cmd[4];
 VAR_15->region = VAR_16;
 VAR_15->sector = VAR_18;
 VAR_15->offset = VAR_19;
 FUNC_9(&VAR_6->mbox_lock);
 FUNC_6(VAR_11, 0, sizeof(*VAR_11));

 switch (VAR_14->rqst_data.h_vendor.vendor_cmd[0]) {
 case 128:
  VAR_19 = VAR_18 * VAR_17 + VAR_19;
  FUNC_1(&VAR_15->hdr, VAR_1,
       VAR_5, sizeof(*VAR_15));
  FUNC_8(VAR_8->request_payload.sg_list,
      VAR_8->request_payload.sg_cnt,
      VAR_9->va + VAR_19, VAR_8->request_len);
  break;
 case 129:
  FUNC_1(&VAR_15->hdr, VAR_1,
      VAR_4, sizeof(*VAR_15));
  break;
 default:
  FUNC_4(VAR_7, VAR_3, VAR_0,
       "BG_%d : Unsupported cmd = 0x%x\n\n",
       VAR_14->rqst_data.h_vendor.vendor_cmd[0]);

  FUNC_10(&VAR_6->mbox_lock);
  return -VAR_2;
 }

 VAR_13 = FUNC_0(VAR_7);
 if (!VAR_13) {
  FUNC_10(&VAR_6->mbox_lock);
  return VAR_13;
 }

 FUNC_3(VAR_11, VAR_9->size, 0,
      VAR_8->request_payload.sg_cnt);
 VAR_12->pa_hi = FUNC_5(FUNC_11(VAR_9->dma));
 VAR_12->pa_lo = FUNC_5(VAR_9->dma & 0xFFFFFFFF);
 VAR_12->len = FUNC_5(VAR_9->size);
 VAR_11->tag0 |= VAR_13;

 FUNC_2(VAR_7);

 FUNC_10(&VAR_6->mbox_lock);
 return VAR_13;
}
