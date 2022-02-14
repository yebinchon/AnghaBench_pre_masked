
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {struct list_head* next; } ;
struct TYPE_4__ {int cookie; } ;
struct fsl_dma_chan {int desc_lock; int dev; struct list_head ld_queue; TYPE_1__ common; int completed_cookie; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {scalar_t__ phys; int cookie; } ;
struct TYPE_6__ {TYPE_2__ async_tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long long) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_dma_chan*) ;
 int FUNC_3 (struct fsl_dma_chan*) ;
 int FUNC_4 (struct fsl_dma_chan*) ;
 int FUNC_5 (struct fsl_dma_chan*,scalar_t__) ;
 int FUNC_6 (struct fsl_dma_chan*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 TYPE_3__* FUNC_9 (struct list_head*) ;

__attribute__((used)) static void FUNC_10(struct fsl_dma_chan *VAR_1)
{
 struct list_head *VAR_2;
 dma_addr_t VAR_3;
 unsigned long VAR_4;

 FUNC_7(&VAR_1->desc_lock, VAR_4);

 if (!FUNC_3(VAR_1))
  goto out_unlock;

 FUNC_2(VAR_1);






 for (VAR_2 = VAR_1->ld_queue.next;
  (VAR_2 != &VAR_1->ld_queue)
   && (FUNC_1(
    FUNC_9(VAR_2)->async_tx.cookie,
    VAR_1->completed_cookie,
    VAR_1->common.cookie) == VAR_0);
  VAR_2 = VAR_2->next);

 if (VAR_2 != &VAR_1->ld_queue) {

  VAR_3 = FUNC_9(VAR_2)->async_tx.phys;
  FUNC_0(VAR_1->dev, "xfer LDs staring from 0x%llx\n",
    (unsigned long long)VAR_3);
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1);
 } else {
  FUNC_5(VAR_1, 0);
  FUNC_6(VAR_1, 0);
 }

out_unlock:
 FUNC_8(&VAR_1->desc_lock, VAR_4);
}
