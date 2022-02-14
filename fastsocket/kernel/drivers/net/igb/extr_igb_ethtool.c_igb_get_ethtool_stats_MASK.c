
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; } ;
struct igb_adapter {int num_tx_queues; int num_rx_queues; TYPE_2__** rx_ring; TYPE_1__** tx_ring; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_8__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_7__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_6__ {int rx_stats; } ;
struct TYPE_5__ {int tx_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (struct igb_adapter*) ;
 struct igb_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6,
      struct ethtool_stats *VAR_7, u64 *VAR_8)
{
 struct igb_adapter *VAR_9 = FUNC_1(VAR_6);
 struct net_device_stats *VAR_10 = &VAR_6->stats;
 u64 *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 char *VAR_15;

 FUNC_0(VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_15 = (char *)VAR_9 + VAR_5[VAR_12].stat_offset;
  VAR_8[VAR_12] = (VAR_5[VAR_12].sizeof_stat ==
   sizeof(u64)) ? *(u64 *)VAR_15 : *(u32 *)VAR_15;
 }
 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++, VAR_12++) {
  VAR_15 = (char *)VAR_10 + VAR_4[VAR_13].stat_offset;
  VAR_8[VAR_12] = (VAR_4[VAR_13].sizeof_stat ==
   sizeof(u64)) ? *(u64 *)VAR_15 : *(u32 *)VAR_15;
 }
 for (VAR_13 = 0; VAR_13 < VAR_9->num_tx_queues; VAR_13++) {
  VAR_11 = (u64 *)&VAR_9->tx_ring[VAR_13]->tx_stats;
  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++, VAR_12++)
   VAR_8[VAR_12] = VAR_11[VAR_14];
 }
 for (VAR_13 = 0; VAR_13 < VAR_9->num_rx_queues; VAR_13++) {
  VAR_11 = (u64 *)&VAR_9->rx_ring[VAR_13]->rx_stats;
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++, VAR_12++)
   VAR_8[VAR_12] = VAR_11[VAR_14];
 }
}
