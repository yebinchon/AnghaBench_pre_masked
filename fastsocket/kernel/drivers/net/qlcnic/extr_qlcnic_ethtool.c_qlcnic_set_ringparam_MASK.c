
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qlcnic_adapter {scalar_t__ num_rxd; scalar_t__ num_txd; scalar_t__ num_jumbo_rxd; int max_jumbo_rxd; int max_rxd; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_jumbo_pending; int rx_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5,
  struct ethtool_ringparam *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_0(VAR_5);
 u16 VAR_8, VAR_9, VAR_10;

 if (VAR_6->rx_mini_pending)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6->rx_pending,
   VAR_4, VAR_7->max_rxd, "rx");

 VAR_9 = FUNC_2(VAR_6->rx_jumbo_pending,
   VAR_3, VAR_7->max_jumbo_rxd,
      "rx jumbo");

 VAR_10 = FUNC_2(VAR_6->tx_pending,
   VAR_2, VAR_1, "tx");

 if (VAR_8 == VAR_7->num_rxd && VAR_10 == VAR_7->num_txd &&
   VAR_9 == VAR_7->num_jumbo_rxd)
  return 0;

 VAR_7->num_rxd = VAR_8;
 VAR_7->num_jumbo_rxd = VAR_9;
 VAR_7->num_txd = VAR_10;

 return FUNC_1(VAR_7);
}
