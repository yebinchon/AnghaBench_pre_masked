
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct link_config {unsigned int supported; unsigned int requested_speed; unsigned int advertising; scalar_t__ autoneg; } ;
struct port_info {int tx_chan; TYPE_1__* adapter; struct link_config link_cfg; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ duplex; scalar_t__ autoneg; int advertising; } ;
struct TYPE_2__ {int fn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ethtool_cmd*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int ,struct link_config*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6, struct ethtool_cmd *VAR_7)
{
 unsigned int VAR_8;
 struct port_info *VAR_9 = FUNC_1(VAR_6);
 struct link_config *VAR_10 = &VAR_9->link_cfg;
 u32 VAR_11 = FUNC_0(VAR_7);

 if (VAR_7->duplex != VAR_1)
  return -VAR_2;

 if (!(VAR_10->supported & VAR_3)) {




  if (VAR_7->autoneg == VAR_0 &&
      (VAR_10->supported & FUNC_3(VAR_11)))
   return 0;
  return -VAR_2;
 }

 if (VAR_7->autoneg == VAR_0) {
  VAR_8 = FUNC_3(VAR_11);

  if (!(VAR_10->supported & VAR_8) || (VAR_11 == VAR_4) ||
      (VAR_11 == VAR_5))
   return -VAR_2;
  VAR_10->requested_speed = VAR_8;
  VAR_10->advertising = 0;
 } else {
  VAR_8 = FUNC_5(VAR_7->advertising);
  if (!(VAR_10->supported & VAR_8))
   return -VAR_2;
  VAR_10->requested_speed = 0;
  VAR_10->advertising = VAR_8 | VAR_3;
 }
 VAR_10->autoneg = VAR_7->autoneg;

 if (FUNC_2(VAR_6))
  return FUNC_4(VAR_9->adapter, VAR_9->adapter->fn, VAR_9->tx_chan,
         VAR_10);
 return 0;
}
