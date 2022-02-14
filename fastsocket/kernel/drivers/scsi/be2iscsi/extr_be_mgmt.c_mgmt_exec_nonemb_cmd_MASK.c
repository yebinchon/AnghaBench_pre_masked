
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_ctrl_info {int pdev; int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {unsigned int tag0; } ;
struct be_dma_mem {int dma; int va; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (struct be_mcc_wrb*,int ,int,int) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_4 (struct beiscsi_hba*,unsigned int,int *,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (struct be_mcc_wrb*,int ,int) ;
 struct be_sge* FUNC_9 (struct be_mcc_wrb*) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 struct be_mcc_wrb* FUNC_14 (struct beiscsi_hba*) ;

__attribute__((used)) static int FUNC_15(struct beiscsi_hba *VAR_5,
    struct be_dma_mem *VAR_6, void *VAR_7,
    int VAR_8)
{
 struct be_ctrl_info *VAR_9 = &VAR_5->ctrl;
 struct be_mcc_wrb *VAR_10 = FUNC_14(VAR_5);
 struct be_sge *VAR_11;
 unsigned int VAR_12;
 int VAR_13 = 0;

 FUNC_11(&VAR_9->mbox_lock);
 VAR_12 = FUNC_0(VAR_5);
 if (!VAR_12) {
  FUNC_12(&VAR_9->mbox_lock);
  VAR_13 = -VAR_3;
  goto free_cmd;
 }
 FUNC_8(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->tag0 |= VAR_12;
 VAR_11 = FUNC_9(VAR_10);

 FUNC_2(VAR_10, VAR_6->size, 0, 1);
 VAR_11->pa_hi = FUNC_5(FUNC_13(VAR_6->dma));
 VAR_11->pa_lo = FUNC_5(FUNC_6(VAR_6->dma));
 VAR_11->len = FUNC_5(VAR_6->size);

 FUNC_1(VAR_5);
 FUNC_12(&VAR_9->mbox_lock);

 VAR_13 = FUNC_4(VAR_5, VAR_12, ((void*)0), VAR_6->va);
 if (VAR_13) {
  FUNC_3(VAR_5, VAR_4,
       VAR_0 | VAR_1,
       "BG_%d : mgmt_exec_nonemb_cmd Failed status\n");

  VAR_13 = -VAR_2;
  goto free_cmd;
 }

 if (VAR_7)
  FUNC_7(VAR_7, VAR_6->va, VAR_8);

free_cmd:
 FUNC_10(VAR_9->pdev, VAR_6->size,
       VAR_6->va, VAR_6->dma);
 return VAR_13;
}
