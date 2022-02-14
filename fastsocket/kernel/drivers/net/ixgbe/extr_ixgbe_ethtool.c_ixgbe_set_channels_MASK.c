
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ixgbe_adapter {TYPE_1__* ring_feature; } ;
struct ethtool_channels {unsigned int combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;
struct TYPE_2__ {unsigned int limit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 unsigned int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
         struct ethtool_channels *VAR_8)
{
 struct ixgbe_adapter *VAR_9 = FUNC_3(VAR_7);
 unsigned int VAR_10 = VAR_8->combined_count;


 if (!VAR_10 || VAR_8->rx_count || VAR_8->tx_count)
  return -VAR_0;


 if (VAR_8->other_count != VAR_3)
  return -VAR_0;


 if (VAR_10 > FUNC_0(VAR_9))
  return -VAR_0;


 VAR_9->ring_feature[VAR_5].limit = VAR_10;


 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;
 VAR_9->ring_feature[VAR_6].limit = VAR_10;
 return FUNC_1(VAR_7, FUNC_2(VAR_7));
}
