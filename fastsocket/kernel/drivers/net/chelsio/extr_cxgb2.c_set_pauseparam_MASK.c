
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct link_config {int requested_fc; int supported; scalar_t__ autoneg; int fc; } ;
struct port_info {TYPE_2__* mac; int phy; struct link_config link_config; } ;
struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct adapter {struct port_info* port; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_speed_duplex_fc ) (TYPE_2__*,int,int,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*,int,int,int) ;
 int FUNC_2 (int ,TYPE_2__*,struct link_config*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_7,
     struct ethtool_pauseparam *VAR_8)
{
 struct adapter *VAR_9 = VAR_7->ml_priv;
 struct port_info *VAR_10 = &VAR_9->port[VAR_7->if_port];
 struct link_config *VAR_11 = &VAR_10->link_config;

 if (VAR_8->autoneg == VAR_0)
  VAR_11->requested_fc = 0;
 else if (VAR_11->supported & VAR_6)
  VAR_11->requested_fc = VAR_3;
 else
  return -VAR_2;

 if (VAR_8->rx_pause)
  VAR_11->requested_fc |= VAR_4;
 if (VAR_8->tx_pause)
  VAR_11->requested_fc |= VAR_5;
 if (VAR_11->autoneg == VAR_1) {
  if (FUNC_0(VAR_7))
   FUNC_2(VAR_10->phy, VAR_10->mac, VAR_11);
 } else {
  VAR_11->fc = VAR_11->requested_fc & (VAR_4 | VAR_5);
  if (FUNC_0(VAR_7))
   VAR_10->mac->ops->set_speed_duplex_fc(VAR_10->mac, -1, -1,
        VAR_11->fc);
 }
 return 0;
}
