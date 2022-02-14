
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; int collisions; int multicast; scalar_t__ tx_errors; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct b44_hw_stats {int tx_carrier_lost; scalar_t__ tx_underruns; scalar_t__ rx_symbol_errs; scalar_t__ rx_align_errs; scalar_t__ rx_crc_errs; scalar_t__ rx_undersize; scalar_t__ rx_crc_align_errs; scalar_t__ rx_missed_pkts; scalar_t__ rx_oversize_pkts; scalar_t__ rx_jabber_pkts; int tx_total_cols; int tx_multicast_pkts; scalar_t__ tx_late_cols; scalar_t__ tx_excessive_cols; scalar_t__ tx_oversize_pkts; scalar_t__ tx_jabber_pkts; int tx_octets; int rx_octets; int tx_pkts; int rx_pkts; } ;
struct b44 {struct b44_hw_stats hw_stats; } ;


 struct b44* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct b44 *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_0->stats;
 struct b44_hw_stats *VAR_3 = &VAR_1->hw_stats;


 VAR_2->rx_packets = VAR_3->rx_pkts;
 VAR_2->tx_packets = VAR_3->tx_pkts;
 VAR_2->rx_bytes = VAR_3->rx_octets;
 VAR_2->tx_bytes = VAR_3->tx_octets;
 VAR_2->tx_errors = (VAR_3->tx_jabber_pkts +
        VAR_3->tx_oversize_pkts +
        VAR_3->tx_underruns +
        VAR_3->tx_excessive_cols +
        VAR_3->tx_late_cols);
 VAR_2->multicast = VAR_3->tx_multicast_pkts;
 VAR_2->collisions = VAR_3->tx_total_cols;

 VAR_2->rx_length_errors = (VAR_3->rx_oversize_pkts +
       VAR_3->rx_undersize);
 VAR_2->rx_over_errors = VAR_3->rx_missed_pkts;
 VAR_2->rx_frame_errors = VAR_3->rx_align_errs;
 VAR_2->rx_crc_errors = VAR_3->rx_crc_errs;
 VAR_2->rx_errors = (VAR_3->rx_jabber_pkts +
       VAR_3->rx_oversize_pkts +
       VAR_3->rx_missed_pkts +
       VAR_3->rx_crc_align_errs +
       VAR_3->rx_undersize +
       VAR_3->rx_crc_errs +
       VAR_3->rx_align_errs +
       VAR_3->rx_symbol_errs);

 VAR_2->tx_aborted_errors = VAR_3->tx_underruns;





 return VAR_2;
}
