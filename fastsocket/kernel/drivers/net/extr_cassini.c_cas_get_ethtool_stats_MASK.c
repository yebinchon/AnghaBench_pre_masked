
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device_stats {int tx_packets; int tx_fifo_errors; int tx_errors; int tx_dropped; int tx_bytes; int tx_aborted_errors; int rx_packets; int rx_over_errors; int rx_length_errors; int rx_frame_errors; int rx_fifo_errors; int rx_errors; int rx_dropped; int rx_crc_errors; int rx_bytes; int collisions; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct cas {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct net_device_stats* FUNC_1 (int ) ;
 struct cas* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct cas *VAR_4 = FUNC_2(VAR_1);
 struct net_device_stats *VAR_5 = FUNC_1(VAR_4->dev);
 int VAR_6 = 0;
 VAR_3[VAR_6++] = VAR_5->collisions;
 VAR_3[VAR_6++] = VAR_5->rx_bytes;
 VAR_3[VAR_6++] = VAR_5->rx_crc_errors;
 VAR_3[VAR_6++] = VAR_5->rx_dropped;
 VAR_3[VAR_6++] = VAR_5->rx_errors;
 VAR_3[VAR_6++] = VAR_5->rx_fifo_errors;
 VAR_3[VAR_6++] = VAR_5->rx_frame_errors;
 VAR_3[VAR_6++] = VAR_5->rx_length_errors;
 VAR_3[VAR_6++] = VAR_5->rx_over_errors;
 VAR_3[VAR_6++] = VAR_5->rx_packets;
 VAR_3[VAR_6++] = VAR_5->tx_aborted_errors;
 VAR_3[VAR_6++] = VAR_5->tx_bytes;
 VAR_3[VAR_6++] = VAR_5->tx_dropped;
 VAR_3[VAR_6++] = VAR_5->tx_errors;
 VAR_3[VAR_6++] = VAR_5->tx_fifo_errors;
 VAR_3[VAR_6++] = VAR_5->tx_packets;
 FUNC_0(VAR_6 != VAR_0);
}
