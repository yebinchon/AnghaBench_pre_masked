
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;
struct e1000_tx_ring {int count; } ;
struct e1000_rx_ring {int count; } ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {struct e1000_rx_ring* rx_ring; struct e1000_tx_ring* tx_ring; struct e1000_hw hw; } ;
typedef scalar_t__ e1000_mac_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5,
    struct ethtool_ringparam *VAR_6)
{
 struct e1000_adapter *VAR_7 = FUNC_0(VAR_5);
 struct e1000_hw *VAR_8 = &VAR_7->hw;
 e1000_mac_type VAR_9 = VAR_8->mac_type;
 struct e1000_tx_ring *VAR_10 = VAR_7->tx_ring;
 struct e1000_rx_ring *VAR_11 = VAR_7->rx_ring;

 VAR_6->rx_max_pending = (VAR_9 < VAR_4) ? VAR_2 :
  VAR_0;
 VAR_6->tx_max_pending = (VAR_9 < VAR_4) ? VAR_3 :
  VAR_1;
 VAR_6->rx_pending = VAR_11->count;
 VAR_6->tx_pending = VAR_10->count;
}
