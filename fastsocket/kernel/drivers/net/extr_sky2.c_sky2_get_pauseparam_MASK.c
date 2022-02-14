
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int flow_mode; int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3,
    struct ethtool_pauseparam *VAR_4)
{
 struct sky2_port *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_5->flow_mode) {
 case 130:
  VAR_4->tx_pause = VAR_4->rx_pause = 0;
  break;
 case 128:
  VAR_4->tx_pause = 1, VAR_4->rx_pause = 0;
  break;
 case 129:
  VAR_4->tx_pause = 0, VAR_4->rx_pause = 1;
  break;
 case 131:
  VAR_4->tx_pause = VAR_4->rx_pause = 1;
 }

 VAR_4->autoneg = (VAR_5->flags & VAR_2)
  ? VAR_1 : VAR_0;
}
