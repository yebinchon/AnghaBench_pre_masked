
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gfar_private {int tx_ring_size; int rx_ring_size; } ;
struct ethtool_ringparam {int tx_pending; int rx_jumbo_pending; int rx_mini_pending; int rx_pending; int tx_max_pending; void* rx_jumbo_max_pending; void* rx_mini_max_pending; void* rx_max_pending; } ;


 void* VAR_0 ;
 int VAR_1 ;
 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, struct ethtool_ringparam *VAR_3)
{
 struct gfar_private *VAR_4 = FUNC_0(VAR_2);

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->rx_mini_max_pending = VAR_0;
 VAR_3->rx_jumbo_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;




 VAR_3->rx_pending = VAR_4->rx_ring_size;
 VAR_3->rx_mini_pending = VAR_4->rx_ring_size;
 VAR_3->rx_jumbo_pending = VAR_4->rx_ring_size;
 VAR_3->tx_pending = VAR_4->tx_ring_size;
}
