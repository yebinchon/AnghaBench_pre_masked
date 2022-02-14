
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tx_ring_info {int pending; scalar_t__ wrap_bit; scalar_t__ cons; scalar_t__ prod; TYPE_1__* tx_buffs; } ;
struct rx_ring_info {scalar_t__ rbr_refill_pending; scalar_t__ rbr_pending; scalar_t__ rcr_index; scalar_t__ rbr_table_size; scalar_t__ rbr_index; int * rbr; struct page** rxhash; } ;
struct page {int index; scalar_t__ mapping; } ;
struct niu {int num_rx_rings; int num_tx_rings; struct tx_ring_info* tx_rings; struct rx_ring_info* rx_rings; } ;
struct TYPE_2__ {scalar_t__ skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct niu*,struct rx_ring_info*,int ,int) ;
 int FUNC_2 (struct niu*,struct tx_ring_info*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct niu *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;

 if (VAR_4->rx_rings) {
  for (VAR_5 = 0; VAR_5 < VAR_4->num_rx_rings; VAR_5++) {
   struct rx_ring_info *VAR_9 = &VAR_4->rx_rings[VAR_5];

   for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_1; VAR_6++) {
    struct page *VAR_10;

    VAR_10 = VAR_9->rxhash[VAR_6];
    while (VAR_10) {
     struct page *VAR_11 =
      (struct page *) VAR_10->mapping;
     u64 VAR_12 = VAR_10->index;
     VAR_12 = VAR_12 >> VAR_3;
     VAR_9->rbr[VAR_7++] = FUNC_0(VAR_12);
     VAR_10 = VAR_11;
    }
   }
   for (; VAR_7 < VAR_1; VAR_7++) {
    VAR_8 = FUNC_1(VAR_4, VAR_9, VAR_0, VAR_7);
    if (FUNC_3(VAR_8))
     break;
   }

   VAR_9->rbr_index = VAR_9->rbr_table_size - 1;
   VAR_9->rcr_index = 0;
   VAR_9->rbr_pending = 0;
   VAR_9->rbr_refill_pending = 0;
  }
 }
 if (VAR_4->tx_rings) {
  for (VAR_5 = 0; VAR_5 < VAR_4->num_tx_rings; VAR_5++) {
   struct tx_ring_info *VAR_13 = &VAR_4->tx_rings[VAR_5];

   for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    if (VAR_13->tx_buffs[VAR_6].skb)
     (void) FUNC_2(VAR_4, VAR_13, VAR_6);
   }

   VAR_13->pending = VAR_2;
   VAR_13->prod = 0;
   VAR_13->cons = 0;
   VAR_13->wrap_bit = 0;
  }
 }
}
