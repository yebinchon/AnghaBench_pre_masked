
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {scalar_t__ flow_control; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct skge_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
    struct ethtool_pauseparam *VAR_4)
{
 struct skge_port *VAR_5 = FUNC_0(VAR_3);

 VAR_4->rx_pause = (VAR_5->flow_control == VAR_1)
  || (VAR_5->flow_control == VAR_2);
 VAR_4->tx_pause = VAR_4->rx_pause || (VAR_5->flow_control == VAR_0);

 VAR_4->autoneg = VAR_4->rx_pause || VAR_4->tx_pause;
}
