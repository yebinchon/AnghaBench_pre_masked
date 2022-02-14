
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int flow_mode; int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; int tx_pause; int rx_pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sky2_port*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
          struct ethtool_pauseparam *VAR_3)
{
 struct sky2_port *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->autoneg == VAR_0)
  VAR_4->flags |= VAR_1;
 else
  VAR_4->flags &= ~VAR_1;

 VAR_4->flow_mode = FUNC_2(VAR_3->rx_pause, VAR_3->tx_pause);

 if (FUNC_1(VAR_2))
  FUNC_3(VAR_4);

 return 0;
}
