
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {int tx_dropped; int rx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;
struct myri10ge_slice_netstats {scalar_t__ tx_dropped; scalar_t__ rx_dropped; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct myri10ge_priv {int num_slices; int stats_lock; TYPE_1__* ss; struct net_device_stats stats; } ;
struct TYPE_2__ {struct myri10ge_slice_netstats stats; } ;


 int FUNC_0 (struct net_device_stats*,int ,int) ;
 struct myri10ge_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct myri10ge_priv *VAR_1 = FUNC_1(VAR_0);
 struct myri10ge_slice_netstats *VAR_2;
 struct net_device_stats *VAR_3 = &VAR_1->stats;
 int VAR_4;

 FUNC_2(&VAR_1->stats_lock);
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 for (VAR_4 = 0; VAR_4 < VAR_1->num_slices; VAR_4++) {
  VAR_2 = &VAR_1->ss[VAR_4].stats;
  VAR_3->rx_packets += VAR_2->rx_packets;
  VAR_3->tx_packets += VAR_2->tx_packets;
  VAR_3->rx_bytes += VAR_2->rx_bytes;
  VAR_3->tx_bytes += VAR_2->tx_bytes;
  VAR_3->rx_dropped += VAR_2->rx_dropped;
  VAR_3->tx_dropped += VAR_2->tx_dropped;
 }
 FUNC_3(&VAR_1->stats_lock);
 return VAR_3;
}
