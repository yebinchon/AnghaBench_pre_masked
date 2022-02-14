
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_rx_ring {int * rx_buff_pool; scalar_t__ rx_buff_pool_size; scalar_t__ rx_buff_pool_logic; } ;
struct pch_gbe_adapter {int pdev; struct pch_gbe_rx_ring* rx_ring; int tx_ring; int tx_queue_len; int watchdog_timer; int irq_sem; int napi; struct net_device* netdev; } ;
struct net_device {int tx_queue_len; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pch_gbe_adapter*,struct pch_gbe_rx_ring*) ;
 int FUNC_6 (struct pch_gbe_adapter*,int ) ;
 int FUNC_7 (struct pch_gbe_adapter*) ;
 int FUNC_8 (struct pch_gbe_adapter*) ;
 int FUNC_9 (struct pch_gbe_adapter*) ;
 int FUNC_10 (int ,scalar_t__,int *,scalar_t__) ;

void FUNC_11(struct pch_gbe_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 struct pch_gbe_rx_ring *VAR_2 = VAR_0->rx_ring;



 FUNC_2(&VAR_0->napi);
 FUNC_0(&VAR_0->irq_sem, 0);

 FUNC_8(VAR_0);
 FUNC_7(VAR_0);

 FUNC_1(&VAR_0->watchdog_timer);

 VAR_1->tx_queue_len = VAR_0->tx_queue_len;
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 FUNC_9(VAR_0);
 FUNC_6(VAR_0, VAR_0->tx_ring);
 FUNC_5(VAR_0, VAR_0->rx_ring);

 FUNC_10(VAR_0->pdev, VAR_2->rx_buff_pool_size,
       VAR_2->rx_buff_pool, VAR_2->rx_buff_pool_logic);
 VAR_2->rx_buff_pool_logic = 0;
 VAR_2->rx_buff_pool_size = 0;
 VAR_2->rx_buff_pool = ((void*)0);
}
