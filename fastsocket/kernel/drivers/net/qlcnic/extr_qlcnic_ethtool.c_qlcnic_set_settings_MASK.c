
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct net_device {TYPE_2__* netdev_ops; } ;
struct ethtool_cmd {int autoneg; int duplex; } ;
struct TYPE_4__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;
struct TYPE_3__ {scalar_t__ port_type; int link_autoneg; int link_duplex; int link_speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ethtool_cmd*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct ethtool_cmd*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct ethtool_cmd*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, struct ethtool_cmd *VAR_3)
{
 u32 VAR_4 = 0;
 struct qlcnic_adapter *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->ahw->port_type != VAR_1)
  return -VAR_0;

 if (FUNC_3(VAR_5))
  VAR_4 = FUNC_4(VAR_5, VAR_3);
 else
  VAR_4 = FUNC_5(VAR_5, VAR_3);

 if (!VAR_4)
  return VAR_4;

 VAR_5->ahw->link_speed = FUNC_0(VAR_3);
 VAR_5->ahw->link_duplex = VAR_3->duplex;
 VAR_5->ahw->link_autoneg = VAR_3->autoneg;

 if (!FUNC_2(VAR_2))
  return 0;

 VAR_2->netdev_ops->ndo_stop(VAR_2);
 return VAR_2->netdev_ops->ndo_open(VAR_2);
}
