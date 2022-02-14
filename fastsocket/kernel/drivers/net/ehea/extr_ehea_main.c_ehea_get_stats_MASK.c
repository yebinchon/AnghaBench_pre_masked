
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct net_device_stats {void* rx_packets; void* tx_bytes; void* rx_bytes; void* tx_packets; } ;
struct net_device {int dummy; } ;
struct ehea_port {int num_def_qps; struct net_device_stats stats; TYPE_1__* port_res; } ;
struct TYPE_2__ {scalar_t__ tx_bytes; scalar_t__ tx_packets; scalar_t__ rx_bytes; scalar_t__ rx_packets; } ;


 struct ehea_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct ehea_port *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_1->stats;
 u64 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1->num_def_qps; VAR_7++) {
  VAR_3 += VAR_1->port_res[VAR_7].rx_packets;
  VAR_5 += VAR_1->port_res[VAR_7].rx_bytes;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1->num_def_qps; VAR_7++) {
  VAR_4 += VAR_1->port_res[VAR_7].tx_packets;
  VAR_6 += VAR_1->port_res[VAR_7].tx_bytes;
 }

 VAR_2->tx_packets = VAR_4;
 VAR_2->rx_bytes = VAR_5;
 VAR_2->tx_bytes = VAR_6;
 VAR_2->rx_packets = VAR_3;

 return &VAR_1->stats;
}
