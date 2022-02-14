
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {scalar_t__ rx_crc_errors; int rx_over_errors; scalar_t__ rx_length_errors; int collisions; int multicast; int tx_errors; scalar_t__ rx_errors; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ crc_err; int rx_ov_flow; scalar_t__ length_err; int collisions; int multircv; int max_pkt_error; scalar_t__ other_errors; scalar_t__ code_violations; scalar_t__ alignment_err; int opackets; int ipackets; } ;
struct et131x_adapter {TYPE_1__ Stats; struct net_device_stats net_stats; } ;
typedef TYPE_1__ CE_STATS_t ;


 struct et131x_adapter* FUNC_0 (struct net_device*) ;

struct net_device_stats *FUNC_1(struct net_device *VAR_0)
{
 struct et131x_adapter *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_1->net_stats;
 CE_STATS_t *VAR_3 = &VAR_1->Stats;

 VAR_2->rx_packets = VAR_3->ipackets;
 VAR_2->tx_packets = VAR_3->opackets;
 VAR_2->rx_errors = VAR_3->length_err + VAR_3->alignment_err +
     VAR_3->crc_err + VAR_3->code_violations + VAR_3->other_errors;
 VAR_2->tx_errors = VAR_3->max_pkt_error;
 VAR_2->multicast = VAR_3->multircv;
 VAR_2->collisions = VAR_3->collisions;

 VAR_2->rx_length_errors = VAR_3->length_err;
 VAR_2->rx_over_errors = VAR_3->rx_ov_flow;
 VAR_2->rx_crc_errors = VAR_3->crc_err;
 return VAR_2;
}
