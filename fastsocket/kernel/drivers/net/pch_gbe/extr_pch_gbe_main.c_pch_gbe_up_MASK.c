
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pch_gbe_tx_ring {int dummy; } ;
struct pch_gbe_rx_ring {int count; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct pch_gbe_adapter {struct net_device* netdev; int napi; int watchdog_timer; TYPE_2__ hw; int tx_queue_len; struct pch_gbe_rx_ring* rx_ring; struct pch_gbe_tx_ring* tx_ring; } ;
struct net_device {int tx_queue_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pch_gbe_adapter*,struct pch_gbe_rx_ring*,int ) ;
 int FUNC_5 (struct pch_gbe_adapter*,struct pch_gbe_rx_ring*,int ) ;
 int FUNC_6 (struct pch_gbe_adapter*,struct pch_gbe_tx_ring*) ;
 int FUNC_7 (struct pch_gbe_adapter*) ;
 int FUNC_8 (struct pch_gbe_adapter*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct pch_gbe_adapter*) ;
 int FUNC_12 (struct pch_gbe_adapter*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct pch_gbe_adapter*) ;
 int FUNC_15 (struct pch_gbe_adapter*) ;
 int FUNC_16 (char*) ;

int FUNC_17(struct pch_gbe_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 struct pch_gbe_tx_ring *VAR_4 = VAR_2->tx_ring;
 struct pch_gbe_rx_ring *VAR_5 = VAR_2->rx_ring;
 int VAR_6;


 if (!FUNC_0(VAR_2->hw.mac.addr)) {
  FUNC_16("Error: Invalid MAC address\n");
  return -VAR_0;
 }


 FUNC_13(VAR_3);

 FUNC_15(VAR_2);
 FUNC_8(VAR_2);
 FUNC_14(VAR_2);
 FUNC_7(VAR_2);

 VAR_6 = FUNC_12(VAR_2);
 if (VAR_6) {
  FUNC_16("Error: can't bring device up\n");
  return VAR_6;
 }
 VAR_6 = FUNC_5(VAR_2, VAR_5, VAR_5->count);
 if (VAR_6) {
  FUNC_16("Error: can't bring device up\n");
  return VAR_6;
 }
 FUNC_6(VAR_2, VAR_4);
 FUNC_4(VAR_2, VAR_5, VAR_5->count);
 VAR_2->tx_queue_len = VAR_3->tx_queue_len;
 FUNC_9(&VAR_2->hw);
 FUNC_10(&VAR_2->hw);

 FUNC_1(&VAR_2->watchdog_timer, VAR_1);

 FUNC_2(&VAR_2->napi);
 FUNC_11(VAR_2);
 FUNC_3(VAR_2->netdev);

 return 0;
}
