
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int rx_lost_in_ring; int tx_timeouts; int tx_buf_mapped; int early_rx; } ;
struct rtl8139_private {TYPE_1__ xstats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 struct rtl8139_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct rtl8139_private *VAR_3 = FUNC_0(VAR_0);

 VAR_2[0] = VAR_3->xstats.early_rx;
 VAR_2[1] = VAR_3->xstats.tx_buf_mapped;
 VAR_2[2] = VAR_3->xstats.tx_timeouts;
 VAR_2[3] = VAR_3->xstats.rx_lost_in_ring;
}
