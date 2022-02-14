
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip {int rx_over_errors; int rx_errors; int tx_errors; int tx_dropped; int rx_dropped; int tx_packets; int rx_packets; } ;
struct net_device_stats {int rx_over_errors; int rx_errors; int tx_errors; int tx_dropped; int rx_dropped; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device_stats*,int ,int) ;
 struct strip* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 struct strip *VAR_1 = FUNC_1(VAR_0);
 static struct net_device_stats VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(struct net_device_stats));

 VAR_2.rx_packets = VAR_1->rx_packets;
 VAR_2.tx_packets = VAR_1->tx_packets;
 VAR_2.rx_dropped = VAR_1->rx_dropped;
 VAR_2.tx_dropped = VAR_1->tx_dropped;
 VAR_2.tx_errors = VAR_1->tx_errors;
 VAR_2.rx_errors = VAR_1->rx_errors;
 VAR_2.rx_over_errors = VAR_1->rx_over_errors;
 return (&VAR_2);
}
