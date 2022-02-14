
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct be_dma_mem {int size; void* va; void* dma; } ;
struct be_ctrl_info {int mcc_cq_lock; int mcc_lock; int mbox_lock; struct pci_dev* pdev; struct be_dma_mem mbox_mem; struct be_dma_mem mbox_mem_alloced; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_mcc_mailbox {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (struct beiscsi_hba*,struct pci_dev*) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (void*,int ,int) ;
 void* FUNC_4 (struct pci_dev*,int,void**) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct beiscsi_hba *VAR_1, struct pci_dev *VAR_2)
{
 struct be_ctrl_info *VAR_3 = &VAR_1->ctrl;
 struct be_dma_mem *VAR_4 = &VAR_3->mbox_mem_alloced;
 struct be_dma_mem *VAR_5 = &VAR_3->mbox_mem;
 int VAR_6 = 0;

 VAR_3->pdev = VAR_2;
 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;
 VAR_4->size = sizeof(struct be_mcc_mailbox) + 16;
 VAR_4->va = FUNC_4(VAR_2,
        VAR_4->size,
        &VAR_4->dma);
 if (!VAR_4->va) {
  FUNC_2(VAR_1);
  return -VAR_0;
 }

 VAR_5->size = sizeof(struct be_mcc_mailbox);
 VAR_5->va = FUNC_0(VAR_4->va, 16);
 VAR_5->dma = FUNC_0(VAR_4->dma, 16);
 FUNC_3(VAR_5->va, 0, sizeof(struct be_mcc_mailbox));
 FUNC_5(&VAR_3->mbox_lock);
 FUNC_5(&VAR_1->ctrl.mcc_lock);
 FUNC_5(&VAR_1->ctrl.mcc_cq_lock);

 return VAR_6;
}
