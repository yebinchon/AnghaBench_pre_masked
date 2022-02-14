
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ port_type; } ;
struct netxen_adapter {int capabilities; int link_autoneg; int link_duplex; int link_speed; TYPE_1__ ahw; } ;
struct net_device {TYPE_2__* netdev_ops; } ;
struct ethtool_cmd {int autoneg; int duplex; } ;
struct TYPE_4__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ethtool_cmd*) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct netxen_adapter*,int ,int ,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_5, struct ethtool_cmd *VAR_6)
{
 struct netxen_adapter *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = FUNC_0(VAR_6);
 int VAR_9;

 if (VAR_7->ahw.port_type != VAR_2)
  return -VAR_1;

 if (!(VAR_7->capabilities & VAR_3))
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_6->duplex,
         VAR_6->autoneg);
 if (VAR_9 == VAR_4)
  return -VAR_1;
 else if (VAR_9)
  return -VAR_0;

 VAR_7->link_speed = VAR_8;
 VAR_7->link_duplex = VAR_6->duplex;
 VAR_7->link_autoneg = VAR_6->autoneg;

 if (!FUNC_2(VAR_5))
  return 0;

 VAR_5->netdev_ops->ndo_stop(VAR_5);
 return VAR_5->netdev_ops->ndo_open(VAR_5);
}
