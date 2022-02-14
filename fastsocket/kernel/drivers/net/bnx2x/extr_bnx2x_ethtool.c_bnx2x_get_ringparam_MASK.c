
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int tx_max_pending; void* rx_pending; void* rx_max_pending; } ;
struct bnx2x {int tx_ring_size; void* rx_ring_size; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 void* VAR_0 ;
 int VAR_1 ;
 struct bnx2x* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
    struct ethtool_ringparam *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_1(VAR_2);

 VAR_3->rx_max_pending = VAR_0;

 if (VAR_4->rx_ring_size)
  VAR_3->rx_pending = VAR_4->rx_ring_size;
 else
  VAR_3->rx_pending = VAR_0;

 VAR_3->tx_max_pending = FUNC_0(VAR_4) ? 0 : VAR_1;
 VAR_3->tx_pending = VAR_4->tx_ring_size;
}
