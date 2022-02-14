
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {struct slcompress* slcomp; int tx_misses; int tx_compressed; int rx_compressed; int rx_over_errors; int rx_errors; int tx_errors; int tx_dropped; int rx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct slcompress {scalar_t__ sls_o_misses; scalar_t__ sls_o_compressed; scalar_t__ sls_i_tossed; scalar_t__ sls_i_compressed; } ;
struct net_device_stats {int collisions; int tx_fifo_errors; int rx_dropped; int rx_fifo_errors; int rx_over_errors; int rx_errors; int tx_errors; int tx_dropped; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device_stats*,int ,int) ;
 struct slip* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *
FUNC_2(struct net_device *VAR_0)
{
 static struct net_device_stats VAR_1;
 struct slip *VAR_2 = FUNC_1(VAR_0);




 FUNC_0(&VAR_1, 0, sizeof(struct net_device_stats));

 VAR_1.rx_packets = VAR_2->rx_packets;
 VAR_1.tx_packets = VAR_2->tx_packets;
 VAR_1.rx_bytes = VAR_2->rx_bytes;
 VAR_1.tx_bytes = VAR_2->tx_bytes;
 VAR_1.rx_dropped = VAR_2->rx_dropped;
 VAR_1.tx_dropped = VAR_2->tx_dropped;
 VAR_1.tx_errors = VAR_2->tx_errors;
 VAR_1.rx_errors = VAR_2->rx_errors;
 VAR_1.rx_over_errors = VAR_2->rx_over_errors;
 return (&VAR_1);
}
