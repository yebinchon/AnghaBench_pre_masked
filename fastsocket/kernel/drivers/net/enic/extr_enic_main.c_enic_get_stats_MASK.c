
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rx_drop; scalar_t__ rx_no_bufs; int rx_multicast_frames_ok; int rx_errors; int rx_bytes_ok; int rx_frames_ok; } ;
struct TYPE_3__ {int tx_drops; int tx_errors; int tx_bytes_ok; int tx_frames_ok; } ;
struct vnic_stats {TYPE_2__ rx; TYPE_1__ tx; } ;
struct net_device_stats {scalar_t__ rx_dropped; int rx_crc_errors; int rx_over_errors; int multicast; int rx_errors; int rx_bytes; int rx_packets; int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct enic {int rq_bad_fcs; int rq_truncated_pkts; } ;


 int FUNC_0 (struct enic*,struct vnic_stats**) ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 struct enic *VAR_1 = FUNC_1(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_0->stats;
 struct vnic_stats *VAR_3;

 FUNC_0(VAR_1, &VAR_3);

 VAR_2->tx_packets = VAR_3->tx.tx_frames_ok;
 VAR_2->tx_bytes = VAR_3->tx.tx_bytes_ok;
 VAR_2->tx_errors = VAR_3->tx.tx_errors;
 VAR_2->tx_dropped = VAR_3->tx.tx_drops;

 VAR_2->rx_packets = VAR_3->rx.rx_frames_ok;
 VAR_2->rx_bytes = VAR_3->rx.rx_bytes_ok;
 VAR_2->rx_errors = VAR_3->rx.rx_errors;
 VAR_2->multicast = VAR_3->rx.rx_multicast_frames_ok;
 VAR_2->rx_over_errors = VAR_1->rq_truncated_pkts;
 VAR_2->rx_crc_errors = VAR_1->rq_bad_fcs;
 VAR_2->rx_dropped = VAR_3->rx.rx_no_bufs + VAR_3->rx.rx_drop;

 return VAR_2;
}
