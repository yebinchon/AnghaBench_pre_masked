
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct beiscsi_hba {TYPE_1__ ctrl; } ;
struct be_dma_mem {int size; int va; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int *) ;

__attribute__((used)) static int FUNC_4(struct beiscsi_hba *VAR_4, struct be_dma_mem *VAR_5,
          int VAR_6, int VAR_7)
{
 VAR_5->va = FUNC_3(VAR_4->ctrl.pdev, VAR_7, &VAR_5->dma);
 if (!VAR_5->va) {
  FUNC_1(VAR_4, VAR_3, VAR_0,
       "BG_%d : Failed to allocate memory for if info\n");
  return -VAR_2;
 }
 FUNC_2(VAR_5->va, 0, VAR_7);
 VAR_5->size = VAR_7;
 FUNC_0(VAR_5->va, VAR_1, VAR_6, VAR_7);
 return 0;
}
