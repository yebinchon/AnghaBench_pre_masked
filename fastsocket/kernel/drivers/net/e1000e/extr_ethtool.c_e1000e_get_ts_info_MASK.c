
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; int phc_index; } ;
struct e1000_adapter {int flags; scalar_t__ ptp_clock; } ;


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
 int FUNC_0 (struct net_device*,struct ethtool_ts_info*) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_17,
         struct ethtool_ts_info *VAR_18)
{
 struct e1000_adapter *VAR_19 = FUNC_1(VAR_17);

 FUNC_0(VAR_17, VAR_18);

 if (!(VAR_19->flags & VAR_0))
  return 0;

 VAR_18->so_timestamping |= (VAR_16 |
      VAR_15 |
      VAR_14);

 VAR_18->tx_types = (1 << VAR_12) | (1 << VAR_13);

 VAR_18->rx_filters = ((1 << VAR_2) |
       (1 << VAR_4) |
       (1 << VAR_3) |
       (1 << VAR_10) |
       (1 << VAR_9) |
       (1 << VAR_8) |
       (1 << VAR_7) |
       (1 << VAR_6) |
       (1 << VAR_11) |
       (1 << VAR_5) |
       (1 << VAR_1));

 if (VAR_19->ptp_clock)
  VAR_18->phc_index = FUNC_2(VAR_19->ptp_clock);

 return 0;
}
