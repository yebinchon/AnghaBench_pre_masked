
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {unsigned int min_fill; unsigned int max_fill; unsigned int fast_fill_trigger; int enabled; scalar_t__ page_recycle_full; scalar_t__ page_recycle_failed; scalar_t__ page_recycle_count; scalar_t__ page_ptr_mask; scalar_t__ page_add; scalar_t__ page_remove; scalar_t__ removed_count; scalar_t__ notified_count; scalar_t__ added_count; struct efx_nic* efx; } ;
struct efx_nic {unsigned int rxq_entries; unsigned int rx_pages_per_batch; unsigned int rx_bufs_per_page; int net_dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,struct efx_rx_queue*) ;
 int FUNC_1 (struct efx_rx_queue*) ;
 int FUNC_2 (struct efx_rx_queue*) ;
 unsigned int FUNC_3 (scalar_t__,unsigned int) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,int ) ;
 scalar_t__ VAR_2 ;

void FUNC_5(struct efx_rx_queue *VAR_3)
{
 struct efx_nic *VAR_4 = VAR_3->efx;
 unsigned int VAR_5, VAR_6, VAR_7;

 FUNC_4(VAR_3->efx, VAR_1, VAR_3->efx->net_dev,
    "initialising RX queue %d\n", FUNC_2(VAR_3));


 VAR_3->added_count = 0;
 VAR_3->notified_count = 0;
 VAR_3->removed_count = 0;
 VAR_3->min_fill = -1U;
 FUNC_0(VAR_4, VAR_3);

 VAR_3->page_remove = 0;
 VAR_3->page_add = VAR_3->page_ptr_mask + 1;
 VAR_3->page_recycle_count = 0;
 VAR_3->page_recycle_failed = 0;
 VAR_3->page_recycle_full = 0;


 VAR_5 = VAR_4->rxq_entries - VAR_0;
 VAR_7 =
  VAR_5 - VAR_4->rx_pages_per_batch * VAR_4->rx_bufs_per_page;
 if (VAR_2 != 0) {
  VAR_6 = VAR_5 * FUNC_3(VAR_2, 100U) / 100U;
  if (VAR_6 > VAR_7)
   VAR_6 = VAR_7;
 } else {
  VAR_6 = VAR_7;
 }

 VAR_3->max_fill = VAR_5;
 VAR_3->fast_fill_trigger = VAR_6;


 VAR_3->enabled = 1;
 FUNC_1(VAR_3);
}
