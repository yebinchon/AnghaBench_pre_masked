
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int SET_ETHTOOL_OPS (struct net_device*,int *) ;
 int bnad_ethtool_ops ;

void
bnad_set_ethtool_ops(struct net_device *netdev)
{
 SET_ETHTOOL_OPS(netdev, &bnad_ethtool_ops);
}
