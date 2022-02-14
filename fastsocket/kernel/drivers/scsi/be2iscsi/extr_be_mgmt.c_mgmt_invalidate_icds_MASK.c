
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct invalidate_commands_params_in {int icd_count; TYPE_1__* table; int cleanup_type; scalar_t__ ref_handle; int hdr; } ;
struct invalidate_command_table {int cid; int icd; } ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_sge {void* len; void* pa_lo; void* pa_hi; } ;
struct be_mcc_wrb {unsigned int tag0; } ;
struct be_dma_mem {int dma; int size; struct invalidate_commands_params_in* va; } ;
struct TYPE_2__ {int cid; int icd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct invalidate_commands_params_in*,int ,int) ;
 struct be_sge* FUNC_6 (struct be_mcc_wrb*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 struct be_mcc_wrb* FUNC_10 (struct beiscsi_hba*) ;

unsigned int FUNC_11(struct beiscsi_hba *VAR_3,
    struct invalidate_command_table *VAR_4,
    unsigned int VAR_5, unsigned int VAR_6,
    struct be_dma_mem *VAR_7)

{
 struct be_ctrl_info *VAR_8 = &VAR_3->ctrl;
 struct be_mcc_wrb *VAR_9;
 struct be_sge *VAR_10;
 struct invalidate_commands_params_in *VAR_11;
 unsigned int VAR_12, VAR_13 = 0;

 FUNC_7(&VAR_8->mbox_lock);
 VAR_13 = FUNC_0(VAR_3);
 if (!VAR_13) {
  FUNC_8(&VAR_8->mbox_lock);
  return VAR_13;
 }

 VAR_11 = VAR_7->va;
 FUNC_5(VAR_11, 0, sizeof(*VAR_11));
 VAR_9 = FUNC_10(VAR_3);
 VAR_10 = FUNC_6(VAR_9);
 VAR_9->tag0 |= VAR_13;

 FUNC_3(VAR_9, sizeof(*VAR_11), 0, 1);
 FUNC_1(&VAR_11->hdr, VAR_1,
   VAR_2,
   sizeof(*VAR_11));
 VAR_11->ref_handle = 0;
 VAR_11->cleanup_type = VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11->table[VAR_12].icd = VAR_4->icd;
  VAR_11->table[VAR_12].cid = VAR_4->cid;
  VAR_11->icd_count++;
  VAR_4++;
 }
 VAR_10->pa_hi = FUNC_4(FUNC_9(VAR_7->dma));
 VAR_10->pa_lo = FUNC_4(VAR_7->dma & 0xFFFFFFFF);
 VAR_10->len = FUNC_4(VAR_7->size);

 FUNC_2(VAR_3);
 FUNC_8(&VAR_8->mbox_lock);
 return VAR_13;
}
