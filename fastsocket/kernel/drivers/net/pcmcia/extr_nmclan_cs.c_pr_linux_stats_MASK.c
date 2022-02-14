
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {scalar_t__ tx_window_errors; scalar_t__ tx_heartbeat_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_carrier_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_missed_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_over_errors; scalar_t__ rx_length_errors; scalar_t__ collisions; scalar_t__ multicast; scalar_t__ tx_dropped; scalar_t__ rx_dropped; scalar_t__ tx_errors; scalar_t__ rx_errors; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;


 int FUNC_0 (int,char*,...) ;

__attribute__((used)) static void FUNC_1(struct net_device_stats *VAR_0)
{
  FUNC_0(2, "pr_linux_stats\n");
  FUNC_0(2, " rx_packets=%-7ld        tx_packets=%ld\n",
 (long)VAR_0->rx_packets, (long)VAR_0->tx_packets);
  FUNC_0(2, " rx_errors=%-7ld         tx_errors=%ld\n",
 (long)VAR_0->rx_errors, (long)VAR_0->tx_errors);
  FUNC_0(2, " rx_dropped=%-7ld        tx_dropped=%ld\n",
 (long)VAR_0->rx_dropped, (long)VAR_0->tx_dropped);
  FUNC_0(2, " multicast=%-7ld         collisions=%ld\n",
 (long)VAR_0->multicast, (long)VAR_0->collisions);

  FUNC_0(2, " rx_length_errors=%-7ld  rx_over_errors=%ld\n",
 (long)VAR_0->rx_length_errors, (long)VAR_0->rx_over_errors);
  FUNC_0(2, " rx_crc_errors=%-7ld     rx_frame_errors=%ld\n",
 (long)VAR_0->rx_crc_errors, (long)VAR_0->rx_frame_errors);
  FUNC_0(2, " rx_fifo_errors=%-7ld    rx_missed_errors=%ld\n",
 (long)VAR_0->rx_fifo_errors, (long)VAR_0->rx_missed_errors);

  FUNC_0(2, " tx_aborted_errors=%-7ld tx_carrier_errors=%ld\n",
 (long)VAR_0->tx_aborted_errors, (long)VAR_0->tx_carrier_errors);
  FUNC_0(2, " tx_fifo_errors=%-7ld    tx_heartbeat_errors=%ld\n",
 (long)VAR_0->tx_fifo_errors, (long)VAR_0->tx_heartbeat_errors);
  FUNC_0(2, " tx_window_errors=%ld\n",
 (long)VAR_0->tx_window_errors);
}
