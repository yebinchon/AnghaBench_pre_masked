
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int ptp_clock; TYPE_2__ hw; } ;
struct ethtool_ts_info {int so_timestamping; int phc_index; int tx_types; int rx_filters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct net_device*,struct ethtool_ts_info*) ;


 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_20,
        struct ethtool_ts_info *VAR_21)
{
 struct ixgbe_adapter *VAR_22 = FUNC_1(VAR_20);

 switch (VAR_22->hw.mac.type) {
 default:
  return FUNC_0(VAR_20, VAR_21);
  break;
 }
 return 0;
}
