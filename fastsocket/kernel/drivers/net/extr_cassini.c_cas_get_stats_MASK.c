
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {scalar_t__ tx_dropped; scalar_t__ rx_dropped; scalar_t__ tx_errors; scalar_t__ rx_errors; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ tx_fifo_errors; scalar_t__ tx_aborted_errors; scalar_t__ rx_fifo_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_over_errors; scalar_t__ collisions; } ;
struct net_device {int dummy; } ;
struct cas {int * stat_lock; scalar_t__ regs; int hw_running; struct net_device_stats* net_stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct cas*) ;
 int FUNC_1 (struct net_device_stats*,int ,int) ;
 struct cas* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static struct net_device_stats *FUNC_8(struct net_device *VAR_7)
{
 struct cas *VAR_8 = FUNC_2(VAR_7);
 struct net_device_stats *VAR_9 = VAR_8->net_stats;
 unsigned long VAR_10;
 int VAR_11;
 unsigned long VAR_12;


 if (!VAR_8->hw_running)
  return VAR_9 + VAR_0;
 FUNC_5(&VAR_8->stat_lock[VAR_0], VAR_10);
 VAR_9[VAR_0].rx_crc_errors +=
   FUNC_3(VAR_8->regs + VAR_5) & 0xffff;
 VAR_9[VAR_0].rx_frame_errors +=
  FUNC_3(VAR_8->regs + VAR_1) &0xffff;
 VAR_9[VAR_0].rx_length_errors +=
  FUNC_3(VAR_8->regs + VAR_6) & 0xffff;

 VAR_12 = (FUNC_3(VAR_8->regs + VAR_2) & 0xffff) +
  (FUNC_3(VAR_8->regs + VAR_3) & 0xffff);
 VAR_9[VAR_0].tx_aborted_errors += VAR_12;
 VAR_9[VAR_0].collisions +=
   VAR_12 + (FUNC_3(VAR_8->regs + VAR_4) & 0xffff);






 FUNC_0(VAR_8);


 FUNC_4(&VAR_8->stat_lock[0]);
 VAR_9[VAR_0].collisions += VAR_9[0].collisions;
 VAR_9[VAR_0].rx_over_errors += VAR_9[0].rx_over_errors;
 VAR_9[VAR_0].rx_frame_errors += VAR_9[0].rx_frame_errors;
 VAR_9[VAR_0].rx_fifo_errors += VAR_9[0].rx_fifo_errors;
 VAR_9[VAR_0].tx_aborted_errors += VAR_9[0].tx_aborted_errors;
 VAR_9[VAR_0].tx_fifo_errors += VAR_9[0].tx_fifo_errors;
 FUNC_6(&VAR_8->stat_lock[0]);

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_4(&VAR_8->stat_lock[VAR_11]);
  VAR_9[VAR_0].rx_length_errors +=
   VAR_9[VAR_11].rx_length_errors;
  VAR_9[VAR_0].rx_crc_errors += VAR_9[VAR_11].rx_crc_errors;
  VAR_9[VAR_0].rx_packets += VAR_9[VAR_11].rx_packets;
  VAR_9[VAR_0].tx_packets += VAR_9[VAR_11].tx_packets;
  VAR_9[VAR_0].rx_bytes += VAR_9[VAR_11].rx_bytes;
  VAR_9[VAR_0].tx_bytes += VAR_9[VAR_11].tx_bytes;
  VAR_9[VAR_0].rx_errors += VAR_9[VAR_11].rx_errors;
  VAR_9[VAR_0].tx_errors += VAR_9[VAR_11].tx_errors;
  VAR_9[VAR_0].rx_dropped += VAR_9[VAR_11].rx_dropped;
  VAR_9[VAR_0].tx_dropped += VAR_9[VAR_11].tx_dropped;
  FUNC_1(VAR_9 + VAR_11, 0, sizeof(struct net_device_stats));
  FUNC_6(&VAR_8->stat_lock[VAR_11]);
 }
 FUNC_7(&VAR_8->stat_lock[VAR_0], VAR_10);
 return VAR_9 + VAR_0;
}
