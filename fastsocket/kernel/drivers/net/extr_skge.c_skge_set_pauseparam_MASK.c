
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {void* flow_control; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct ethtool_pauseparam*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
          struct ethtool_pauseparam *VAR_5)
{
 struct skge_port *VAR_6 = FUNC_1(VAR_4);
 struct ethtool_pauseparam VAR_7;
 int VAR_8 = 0;

 FUNC_4(VAR_4, &VAR_7);

 if (VAR_5->autoneg != VAR_7.autoneg)
  VAR_6->flow_control = VAR_5->autoneg ? VAR_1 : VAR_2;
 else {
  if (VAR_5->rx_pause && VAR_5->tx_pause)
   VAR_6->flow_control = VAR_2;
  else if (VAR_5->rx_pause && !VAR_5->tx_pause)
   VAR_6->flow_control = VAR_3;
  else if (!VAR_5->rx_pause && VAR_5->tx_pause)
   VAR_6->flow_control = VAR_0;
  else
   VAR_6->flow_control = VAR_1;
 }

 if (FUNC_2(VAR_4)) {
  FUNC_3(VAR_4);
  VAR_8 = FUNC_5(VAR_4);
  if (VAR_8) {
   FUNC_0(VAR_4);
   return VAR_8;
  }
 }

 return 0;
}
