
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device_stats {int tx_errors; int tx_bytes; int tx_packets; int rx_dropped; int multicast; int rx_errors; int rx_bytes; int rx_packets; } ;
struct TYPE_7__ {struct net_device_stats net_stats; } ;
struct vxgedev {int no_of_vpath; TYPE_6__* vpaths; TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ tx_errors; scalar_t__ tx_bytes; scalar_t__ tx_frms; } ;
struct TYPE_11__ {TYPE_4__ stats; } ;
struct TYPE_8__ {scalar_t__ rx_dropped; scalar_t__ rx_mcast; scalar_t__ rx_errors; scalar_t__ rx_bytes; scalar_t__ rx_frms; } ;
struct TYPE_9__ {TYPE_2__ stats; } ;
struct TYPE_12__ {TYPE_5__ fifo; TYPE_3__ ring; } ;


 int FUNC_0 (struct net_device_stats*,int ,int) ;
 struct vxgedev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *
FUNC_2(struct net_device *VAR_0)
{
 struct vxgedev *VAR_1;
 struct net_device_stats *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_1(VAR_0);

 VAR_2 = &VAR_1->stats.net_stats;

 FUNC_0(VAR_2, 0, sizeof(struct net_device_stats));

 for (VAR_3 = 0; VAR_3 < VAR_1->no_of_vpath; VAR_3++) {
  VAR_2->rx_packets += VAR_1->vpaths[VAR_3].ring.stats.rx_frms;
  VAR_2->rx_bytes += VAR_1->vpaths[VAR_3].ring.stats.rx_bytes;
  VAR_2->rx_errors += VAR_1->vpaths[VAR_3].ring.stats.rx_errors;
  VAR_2->multicast += VAR_1->vpaths[VAR_3].ring.stats.rx_mcast;
  VAR_2->rx_dropped +=
   VAR_1->vpaths[VAR_3].ring.stats.rx_dropped;

  VAR_2->tx_packets += VAR_1->vpaths[VAR_3].fifo.stats.tx_frms;
  VAR_2->tx_bytes += VAR_1->vpaths[VAR_3].fifo.stats.tx_bytes;
  VAR_2->tx_errors += VAR_1->vpaths[VAR_3].fifo.stats.tx_errors;
 }

 return VAR_2;
}
