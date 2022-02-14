
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_rx_queue {unsigned int added_count; unsigned int removed_count; unsigned int fast_fill_trigger; unsigned int min_fill; unsigned int max_fill; scalar_t__ notified_count; struct efx_nic* efx; } ;
struct efx_nic {unsigned int rxq_entries; unsigned int rx_pages_per_batch; unsigned int rx_bufs_per_page; int net_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_rx_queue*) ;
 int FUNC_2 (struct efx_rx_queue*) ;
 int FUNC_3 (struct efx_rx_queue*) ;
 int FUNC_4 (struct efx_rx_queue*) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,int ,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct efx_rx_queue *VAR_1)
{
 struct efx_nic *VAR_2 = VAR_1->efx;
 unsigned int VAR_3, VAR_4;
 int VAR_5, VAR_6 = 0;


 VAR_3 = (VAR_1->added_count - VAR_1->removed_count);
 FUNC_0(VAR_3 > VAR_1->efx->rxq_entries);
 if (VAR_3 >= VAR_1->fast_fill_trigger)
  goto out;


 if (FUNC_6(VAR_3 < VAR_1->min_fill)) {
  if (VAR_3)
   VAR_1->min_fill = VAR_3;
 }

 VAR_4 = VAR_2->rx_pages_per_batch * VAR_2->rx_bufs_per_page;
 VAR_5 = VAR_1->max_fill - VAR_3;
 FUNC_0(VAR_5 < VAR_4);

 FUNC_5(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
     "RX queue %d fast-filling descriptor ring from"
     " level %d to level %d\n",
     FUNC_3(VAR_1), VAR_3,
     VAR_1->max_fill);


 do {
  VAR_6 = FUNC_1(VAR_1);
  if (FUNC_6(VAR_6)) {

   if (VAR_1->added_count == VAR_1->removed_count)
    FUNC_4(VAR_1);
   goto out;
  }
 } while ((VAR_5 -= VAR_4) >= VAR_4);

 FUNC_5(VAR_1->efx, VAR_0, VAR_1->efx->net_dev,
     "RX queue %d fast-filled descriptor ring "
     "to level %d\n", FUNC_3(VAR_1),
     VAR_1->added_count - VAR_1->removed_count);

 out:
 if (VAR_1->notified_count != VAR_1->added_count)
  FUNC_2(VAR_1);
}
