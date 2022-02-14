
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {scalar_t__ error_state; } ;
struct pch_gbe_hw_stats {scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ tx_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_errors; int collisions; int multicast; int tx_dropped; int tx_bytes; int tx_packets; int rx_dropped; int rx_bytes; int rx_packets; scalar_t__ tx_timeout_count; scalar_t__ tx_length_errors; } ;
struct pch_gbe_adapter {int stats_lock; struct pch_gbe_hw_stats stats; struct pci_dev* pdev; struct net_device* netdev; } ;
struct TYPE_2__ {scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ tx_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_errors; int collisions; int multicast; int tx_dropped; int tx_bytes; int tx_packets; int rx_dropped; int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct pch_gbe_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct pci_dev *VAR_3 = VAR_1->pdev;
 struct pch_gbe_hw_stats *VAR_4 = &VAR_1->stats;
 unsigned long VAR_5;





 if ((VAR_3->error_state) && (VAR_3->error_state != VAR_0))
  return;

 FUNC_0(&VAR_1->stats_lock, VAR_5);


 VAR_4->rx_errors = VAR_4->rx_crc_errors + VAR_4->rx_frame_errors;
 VAR_4->tx_errors = VAR_4->tx_length_errors +
     VAR_4->tx_aborted_errors +
     VAR_4->tx_carrier_errors + VAR_4->tx_timeout_count;


 VAR_2->stats.rx_packets = VAR_4->rx_packets;
 VAR_2->stats.rx_bytes = VAR_4->rx_bytes;
 VAR_2->stats.rx_dropped = VAR_4->rx_dropped;
 VAR_2->stats.tx_packets = VAR_4->tx_packets;
 VAR_2->stats.tx_bytes = VAR_4->tx_bytes;
 VAR_2->stats.tx_dropped = VAR_4->tx_dropped;

 VAR_2->stats.multicast = VAR_4->multicast;
 VAR_2->stats.collisions = VAR_4->collisions;

 VAR_2->stats.rx_errors = VAR_4->rx_errors;
 VAR_2->stats.rx_crc_errors = VAR_4->rx_crc_errors;
 VAR_2->stats.rx_frame_errors = VAR_4->rx_frame_errors;

 VAR_2->stats.tx_errors = VAR_4->tx_errors;
 VAR_2->stats.tx_aborted_errors = VAR_4->tx_aborted_errors;
 VAR_2->stats.tx_carrier_errors = VAR_4->tx_carrier_errors;

 FUNC_1(&VAR_1->stats_lock, VAR_5);
}
