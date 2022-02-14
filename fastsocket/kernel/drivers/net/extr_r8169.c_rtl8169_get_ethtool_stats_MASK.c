
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int tx_underun; int tx_aborted; int rx_multicast; int rx_broadcast; int rx_unicast; int tx_multi_collision; int tx_one_collision; int align_errors; int rx_missed; int rx_errors; int tx_errors; int rx_packets; int tx_packets; } ;
struct rtl8169_private {TYPE_1__ counters; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct rtl8169_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
          struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_4(VAR_0);

 FUNC_0();

 FUNC_5(VAR_0);

 VAR_2[0] = FUNC_3(VAR_3->counters.tx_packets);
 VAR_2[1] = FUNC_3(VAR_3->counters.rx_packets);
 VAR_2[2] = FUNC_3(VAR_3->counters.tx_errors);
 VAR_2[3] = FUNC_2(VAR_3->counters.rx_errors);
 VAR_2[4] = FUNC_1(VAR_3->counters.rx_missed);
 VAR_2[5] = FUNC_1(VAR_3->counters.align_errors);
 VAR_2[6] = FUNC_2(VAR_3->counters.tx_one_collision);
 VAR_2[7] = FUNC_2(VAR_3->counters.tx_multi_collision);
 VAR_2[8] = FUNC_3(VAR_3->counters.rx_unicast);
 VAR_2[9] = FUNC_3(VAR_3->counters.rx_broadcast);
 VAR_2[10] = FUNC_2(VAR_3->counters.rx_multicast);
 VAR_2[11] = FUNC_1(VAR_3->counters.tx_aborted);
 VAR_2[12] = FUNC_1(VAR_3->counters.tx_underun);
}
