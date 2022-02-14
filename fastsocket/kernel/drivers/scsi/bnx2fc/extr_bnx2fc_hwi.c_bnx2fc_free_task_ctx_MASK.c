
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2fc_hba {int max_tasks; int ** task_ctx_dma; int ** task_ctx; TYPE_1__* pcidev; int * task_ctx_bd_tbl; int * task_ctx_bd_dma; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int *) ;
 int FUNC_1 (int **) ;

void FUNC_2(struct bnx2fc_hba *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (VAR_2->task_ctx_bd_tbl) {
  FUNC_0(&VAR_2->pcidev->dev, VAR_1,
        VAR_2->task_ctx_bd_tbl,
        VAR_2->task_ctx_bd_dma);
  VAR_2->task_ctx_bd_tbl = ((void*)0);
 }

 VAR_3 = (VAR_2->max_tasks / VAR_0);
 if (VAR_2->task_ctx) {
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   if (VAR_2->task_ctx[VAR_4]) {
    FUNC_0(&VAR_2->pcidev->dev, VAR_1,
          VAR_2->task_ctx[VAR_4],
          VAR_2->task_ctx_dma[VAR_4]);
    VAR_2->task_ctx[VAR_4] = ((void*)0);
   }
  }
  FUNC_1(VAR_2->task_ctx);
  VAR_2->task_ctx = ((void*)0);
 }

 FUNC_1(VAR_2->task_ctx_dma);
 VAR_2->task_ctx_dma = ((void*)0);
}
