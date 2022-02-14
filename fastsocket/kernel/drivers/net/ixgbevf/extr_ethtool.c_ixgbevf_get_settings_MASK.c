
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;} ;
struct TYPE_4__ {int get_link_status; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; } ;
struct ethtool_cmd {int port; int duplex; int transceiver; int autoneg; int supported; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ethtool_cmd*,int) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ixgbe_hw*,int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_7,
    struct ethtool_cmd *VAR_8)
{
 struct ixgbevf_adapter *VAR_9 = FUNC_1(VAR_7);
 struct ixgbe_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11 = 0;
 bool VAR_12;

 VAR_8->supported = VAR_5;
 VAR_8->autoneg = VAR_0;
 VAR_8->transceiver = VAR_6;
 VAR_8->port = -1;

 VAR_10->mac.get_link_status = 1;
 VAR_10->mac.ops.check_link(VAR_10, &VAR_11, &VAR_12, 0);

 if (VAR_12) {
  __u32 VAR_13 = VAR_4;
  switch (VAR_11) {
  case 129:
   VAR_13 = VAR_4;
   break;
  case 128:
   VAR_13 = VAR_3;
   break;
  case 130:
   VAR_13 = VAR_2;
   break;
  }

  FUNC_0(VAR_8, VAR_13);
  VAR_8->duplex = VAR_1;
 } else {
  FUNC_0(VAR_8, -1);
  VAR_8->duplex = -1;
 }

 return 0;
}
