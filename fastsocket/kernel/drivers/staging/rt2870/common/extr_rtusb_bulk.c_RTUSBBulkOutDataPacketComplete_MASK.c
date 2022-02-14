
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef TYPE_1__* purbb_t ;
typedef int VOID ;
typedef int UCHAR ;
struct TYPE_11__ {unsigned long data; } ;
struct TYPE_10__ {int BulkOutPipeId; TYPE_2__* pAd; } ;
struct TYPE_9__ {TYPE_5__ hcca_dma_done_task; TYPE_5__ ac3_dma_done_task; TYPE_5__ ac2_dma_done_task; TYPE_5__ ac1_dma_done_task; TYPE_5__ ac0_dma_done_task; } ;
struct TYPE_8__ {int BulkOutDataOneSecCount; scalar_t__ OS_Cookie; } ;
struct TYPE_7__ {scalar_t__ context; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;
typedef TYPE_3__* POS_COOKIE ;
typedef TYPE_4__* PHT_TX_CONTEXT ;


 int FUNC_0 (TYPE_5__*) ;

VOID FUNC_1(purbb_t VAR_0, struct pt_regs *VAR_1)
{
 PHT_TX_CONTEXT VAR_2;
 PRTMP_ADAPTER VAR_3;
 POS_COOKIE VAR_4;
 UCHAR VAR_5;


 VAR_2 = (PHT_TX_CONTEXT)VAR_0->context;
 VAR_3 = VAR_2->pAd;
 VAR_4 = (POS_COOKIE) VAR_3->OS_Cookie;


 VAR_5 = VAR_2->BulkOutPipeId;
 VAR_3->BulkOutDataOneSecCount++;

 switch (VAR_5)
 {
  case 0:
    VAR_4->ac0_dma_done_task.data = (unsigned long)VAR_0;
    FUNC_0(&VAR_4->ac0_dma_done_task);
    break;
  case 1:
    VAR_4->ac1_dma_done_task.data = (unsigned long)VAR_0;
    FUNC_0(&VAR_4->ac1_dma_done_task);
    break;
  case 2:
    VAR_4->ac2_dma_done_task.data = (unsigned long)VAR_0;
    FUNC_0(&VAR_4->ac2_dma_done_task);
    break;
  case 3:
    VAR_4->ac3_dma_done_task.data = (unsigned long)VAR_0;
    FUNC_0(&VAR_4->ac3_dma_done_task);
    break;
  case 4:
    VAR_4->hcca_dma_done_task.data = (unsigned long)VAR_0;
    FUNC_0(&VAR_4->hcca_dma_done_task);
    break;
 }
}
