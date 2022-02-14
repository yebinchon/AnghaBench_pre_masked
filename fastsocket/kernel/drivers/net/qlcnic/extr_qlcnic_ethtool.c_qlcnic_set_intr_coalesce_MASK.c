
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct qlcnic_nic_intr_coalesce {void* rx_time_us; void* rx_packets; void* tx_time_us; void* tx_packets; void* flag; void* type; } ;
struct qlcnic_adapter {TYPE_1__* ahw; int state; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int rx_max_coalesced_frames; int tx_coalesce_usecs; int tx_max_coalesced_frames; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; } ;
struct TYPE_2__ {struct qlcnic_nic_intr_coalesce coal; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_9,
   struct ethtool_coalesce *VAR_10)
{
 struct qlcnic_adapter *VAR_11 = FUNC_0(VAR_9);
 struct qlcnic_nic_intr_coalesce *VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15, VAR_16;

 if (!FUNC_3(VAR_8, &VAR_11->state))
  return -VAR_0;





 if (VAR_10->rx_coalesce_usecs > 0xffff ||
  VAR_10->rx_max_coalesced_frames > 0xffff ||
  VAR_10->tx_coalesce_usecs > 0xffff ||
  VAR_10->tx_max_coalesced_frames > 0xffff ||
  VAR_10->rx_coalesce_usecs_irq ||
  VAR_10->rx_max_coalesced_frames_irq ||
  VAR_10->tx_coalesce_usecs_irq ||
  VAR_10->tx_max_coalesced_frames_irq ||
  VAR_10->stats_block_coalesce_usecs ||
  VAR_10->use_adaptive_rx_coalesce ||
  VAR_10->use_adaptive_tx_coalesce ||
  VAR_10->pkt_rate_low ||
  VAR_10->rx_coalesce_usecs_low ||
  VAR_10->rx_max_coalesced_frames_low ||
  VAR_10->tx_coalesce_usecs_low ||
  VAR_10->tx_max_coalesced_frames_low ||
  VAR_10->pkt_rate_high ||
  VAR_10->rx_coalesce_usecs_high ||
  VAR_10->rx_max_coalesced_frames_high ||
  VAR_10->tx_coalesce_usecs_high ||
  VAR_10->tx_max_coalesced_frames_high)
  return -VAR_0;

 VAR_12 = &VAR_11->ahw->coal;

 if (FUNC_1(VAR_11)) {
  if (!VAR_10->tx_coalesce_usecs ||
      !VAR_10->tx_max_coalesced_frames ||
      !VAR_10->rx_coalesce_usecs ||
      !VAR_10->rx_max_coalesced_frames) {
   VAR_12->flag = VAR_7;
   VAR_12->type = VAR_5;
   VAR_12->rx_time_us = VAR_2;
   VAR_12->rx_packets = VAR_1;
   VAR_12->tx_time_us = VAR_4;
   VAR_12->tx_packets = VAR_3;
  } else {
   VAR_15 = VAR_10->tx_coalesce_usecs;
   VAR_16 = VAR_10->tx_max_coalesced_frames;
   VAR_13 = VAR_10->rx_coalesce_usecs;
   VAR_14 = VAR_10->rx_max_coalesced_frames;
   VAR_12->flag = 0;

   if ((VAR_12->rx_time_us == VAR_13) &&
       (VAR_12->rx_packets == VAR_14)) {
    VAR_12->type = VAR_6;
    VAR_12->tx_time_us = VAR_15;
    VAR_12->tx_packets = VAR_16;
   } else if ((VAR_12->tx_time_us == VAR_15) &&
       (VAR_12->tx_packets == VAR_16)) {
    VAR_12->type = VAR_5;
    VAR_12->rx_time_us = VAR_13;
    VAR_12->rx_packets = VAR_14;
   } else {
    VAR_12->type = VAR_5;
    VAR_12->rx_time_us = VAR_13;
    VAR_12->rx_packets = VAR_14;
    VAR_12->tx_time_us = VAR_15;
    VAR_12->tx_packets = VAR_16;
   }
  }
 } else {
  if (!VAR_10->rx_coalesce_usecs ||
      !VAR_10->rx_max_coalesced_frames) {
   VAR_12->flag = VAR_7;
   VAR_12->rx_time_us = VAR_2;
   VAR_12->rx_packets = VAR_1;
  } else {
   VAR_12->flag = 0;
   VAR_12->rx_time_us = VAR_10->rx_coalesce_usecs;
   VAR_12->rx_packets = VAR_10->rx_max_coalesced_frames;
  }
 }

 FUNC_2(VAR_11);

 return 0;
}
