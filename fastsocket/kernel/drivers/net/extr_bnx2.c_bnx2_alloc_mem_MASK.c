
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct status_block_msix {int status_rx_quick_consumer_index; int status_tx_quick_consumer_index; } ;
struct status_block {int dummy; } ;
struct statistics_block {int dummy; } ;
struct TYPE_5__ {struct status_block_msix* msix; TYPE_1__* msi; } ;
struct bnx2_napi {int int_num; int * hw_rx_cons_ptr; int * hw_tx_cons_ptr; TYPE_2__ status_blk; } ;
struct bnx2 {int flags; int status_stats_size; int irq_nvecs; int ctx_pages; int ** ctx_blk; scalar_t__* ctx_blk_mapping; TYPE_3__* pdev; scalar_t__ status_blk_mapping; scalar_t__ stats_blk_mapping; void* stats_blk; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int status_rx_quick_consumer_index0; int status_tx_quick_consumer_index0; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*) ;
 void* FUNC_5 (int *,int,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_6(struct bnx2 *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct bnx2_napi *VAR_12;
 void *VAR_13;


 VAR_10 = FUNC_1(sizeof(struct status_block));
 if (VAR_8->flags & VAR_1)
  VAR_10 = FUNC_1(VAR_2 *
       VAR_4);
 VAR_8->status_stats_size = VAR_10 +
    sizeof(struct statistics_block);

 VAR_13 = FUNC_5(&VAR_8->pdev->dev, VAR_8->status_stats_size,
     &VAR_8->status_blk_mapping,
     VAR_6 | VAR_7);
 if (VAR_13 == ((void*)0))
  goto alloc_mem_err;

 VAR_12 = &VAR_8->bnx2_napi[0];
 VAR_12->status_blk.msi = VAR_13;
 VAR_12->hw_tx_cons_ptr =
  &VAR_12->status_blk.msi->status_tx_quick_consumer_index0;
 VAR_12->hw_rx_cons_ptr =
  &VAR_12->status_blk.msi->status_rx_quick_consumer_index0;
 if (VAR_8->flags & VAR_1) {
  for (VAR_9 = 1; VAR_9 < VAR_8->irq_nvecs; VAR_9++) {
   struct status_block_msix *VAR_14;

   VAR_12 = &VAR_8->bnx2_napi[VAR_9];

   VAR_14 = (VAR_13 + VAR_4 * VAR_9);
   VAR_12->status_blk.msix = VAR_14;
   VAR_12->hw_tx_cons_ptr =
    &VAR_14->status_tx_quick_consumer_index;
   VAR_12->hw_rx_cons_ptr =
    &VAR_14->status_rx_quick_consumer_index;
   VAR_12->int_num = VAR_9 << 24;
  }
 }

 VAR_8->stats_blk = VAR_13 + VAR_10;

 VAR_8->stats_blk_mapping = VAR_8->status_blk_mapping + VAR_10;

 if (FUNC_0(VAR_8) == VAR_0) {
  VAR_8->ctx_pages = 0x2000 / VAR_3;
  if (VAR_8->ctx_pages == 0)
   VAR_8->ctx_pages = 1;
  for (VAR_9 = 0; VAR_9 < VAR_8->ctx_pages; VAR_9++) {
   VAR_8->ctx_blk[VAR_9] = FUNC_5(&VAR_8->pdev->dev,
      VAR_3,
      &VAR_8->ctx_blk_mapping[VAR_9],
      VAR_6);
   if (VAR_8->ctx_blk[VAR_9] == ((void*)0))
    goto alloc_mem_err;
  }
 }

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11)
  goto alloc_mem_err;

 VAR_11 = FUNC_3(VAR_8);
 if (VAR_11)
  goto alloc_mem_err;

 return 0;

alloc_mem_err:
 FUNC_4(VAR_8);
 return -VAR_5;
}
