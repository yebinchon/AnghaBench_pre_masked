
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {unsigned int tag0; } ;
struct be_dma_mem {int size; int dma; struct be_cmd_get_session_req* va; } ;
struct be_cmd_get_session_resp {int dummy; } ;
struct be_cmd_get_session_req {int session_handle; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int,char*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct be_cmd_get_session_req*,int ,int) ;
 struct be_sge* FUNC_7 (struct be_mcc_wrb*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int) ;
 struct be_mcc_wrb* FUNC_11 (struct beiscsi_hba*) ;

unsigned int FUNC_12(struct beiscsi_hba *VAR_5,
       u32 VAR_6,
       struct be_dma_mem *VAR_7)
{
 struct be_ctrl_info *VAR_8 = &VAR_5->ctrl;
 struct be_mcc_wrb *VAR_9;
 unsigned int VAR_10 = 0;
 struct be_cmd_get_session_req *VAR_11;
 struct be_cmd_get_session_resp *VAR_12;
 struct be_sge *VAR_13;

 FUNC_4(VAR_5, VAR_3,
      VAR_0 | VAR_1,
      "BG_%d : In beiscsi_get_session_info\n");

 FUNC_8(&VAR_8->mbox_lock);
 VAR_10 = FUNC_0(VAR_5);
 if (!VAR_10) {
  FUNC_9(&VAR_8->mbox_lock);
  return VAR_10;
 }

 VAR_7->size = sizeof(*VAR_12);
 VAR_11 = VAR_7->va;
 FUNC_6(VAR_11, 0, sizeof(*VAR_11));
 VAR_9 = FUNC_11(VAR_5);
 VAR_13 = FUNC_7(VAR_9);
 VAR_9->tag0 |= VAR_10;


 VAR_9->tag0 |= VAR_10;
 FUNC_3(VAR_9, sizeof(*VAR_11), 0, 1);
 FUNC_1(&VAR_11->hdr, VAR_2,
      VAR_4,
      sizeof(*VAR_12));
 VAR_11->session_handle = VAR_6;
 VAR_13->pa_hi = FUNC_5(FUNC_10(VAR_7->dma));
 VAR_13->pa_lo = FUNC_5(VAR_7->dma & 0xFFFFFFFF);
 VAR_13->len = FUNC_5(VAR_7->size);

 FUNC_2(VAR_5);
 FUNC_9(&VAR_8->mbox_lock);
 return VAR_10;
}
