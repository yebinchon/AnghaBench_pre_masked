
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ ptp_clock; } ;
struct net_device {int dummy; } ;
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
 struct tg3* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_13, struct ethtool_ts_info *VAR_14)
{
 struct tg3 *VAR_15 = FUNC_0(VAR_13);

 VAR_14->so_timestamping = VAR_12 |
    VAR_9 |
    VAR_10;

 if (FUNC_2(VAR_15, VAR_6)) {
  VAR_14->so_timestamping |= VAR_11 |
     VAR_8 |
     VAR_7;
 }

 if (VAR_15->ptp_clock)
  VAR_14->phc_index = FUNC_1(VAR_15->ptp_clock);
 else
  VAR_14->phc_index = -1;

 VAR_14->tx_types = (1 << VAR_4) | (1 << VAR_5);

 VAR_14->rx_filters = (1 << VAR_0) |
      (1 << VAR_1) |
      (1 << VAR_2) |
      (1 << VAR_3);
 return 0;
}
