
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {scalar_t__ tx_window_errors; scalar_t__ tx_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ rx_errors; int rx_missed_errors; int rx_fifo_errors; int collisions; int multicast; int rx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct efx_mac_stats {scalar_t__ tx_bad; scalar_t__ rx_symbol_error; scalar_t__ tx_late_collision; int rx_missed; int rx_overflow; scalar_t__ rx_align_error; scalar_t__ rx_bad; scalar_t__ rx_length_error; scalar_t__ rx_gtjumbo; int tx_collision; int rx_multicast; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct efx_nic {int stats_lock; int n_rx_nodesc_drop_cnt; TYPE_1__* type; struct efx_mac_stats mac_stats; } ;
struct TYPE_2__ {int (* update_stats ) (struct efx_nic*) ;} ;


 struct efx_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct efx_nic*) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct efx_nic *VAR_1 = FUNC_0(VAR_0);
 struct efx_mac_stats *VAR_2 = &VAR_1->mac_stats;
 struct net_device_stats *VAR_3 = &VAR_0->stats;

 FUNC_1(&VAR_1->stats_lock);

 VAR_1->type->update_stats(VAR_1);

 VAR_3->rx_packets = VAR_2->rx_packets;
 VAR_3->tx_packets = VAR_2->tx_packets;
 VAR_3->rx_bytes = VAR_2->rx_bytes;
 VAR_3->tx_bytes = VAR_2->tx_bytes;
 VAR_3->rx_dropped = VAR_1->n_rx_nodesc_drop_cnt;
 VAR_3->multicast = VAR_2->rx_multicast;
 VAR_3->collisions = VAR_2->tx_collision;
 VAR_3->rx_length_errors = (VAR_2->rx_gtjumbo +
       VAR_2->rx_length_error);
 VAR_3->rx_crc_errors = VAR_2->rx_bad;
 VAR_3->rx_frame_errors = VAR_2->rx_align_error;
 VAR_3->rx_fifo_errors = VAR_2->rx_overflow;
 VAR_3->rx_missed_errors = VAR_2->rx_missed;
 VAR_3->tx_window_errors = VAR_2->tx_late_collision;

 VAR_3->rx_errors = (VAR_3->rx_length_errors +
       VAR_3->rx_crc_errors +
       VAR_3->rx_frame_errors +
       VAR_2->rx_symbol_error);
 VAR_3->tx_errors = (VAR_3->tx_window_errors +
       VAR_2->tx_bad);

 FUNC_2(&VAR_1->stats_lock);

 return VAR_3;
}
