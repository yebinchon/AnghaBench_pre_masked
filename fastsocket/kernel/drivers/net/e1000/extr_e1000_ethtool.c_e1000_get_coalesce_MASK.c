
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct TYPE_2__ {scalar_t__ mac_type; } ;
struct e1000_adapter {int itr_setting; TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
         struct ethtool_coalesce *VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->hw.mac_type < VAR_1)
  return -VAR_0;

 if (VAR_4->itr_setting <= 4)
  VAR_3->rx_coalesce_usecs = VAR_4->itr_setting;
 else
  VAR_3->rx_coalesce_usecs = 1000000 / VAR_4->itr_setting;

 return 0;
}
