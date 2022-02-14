
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp_et_coalesce ;
struct net_device {int dummy; } ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_hw_tune_timer {int timer_in_use; int timer_in_use_max; int timer_in_use_min; int threshold_high; int threshold_target; int threshold_low; } ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_adapter {int periodic_timer_lock; scalar_t__ et_use_adaptive_rx_coalesce; int et_pkt_rate_low; int et_rate_sample_interval; int et_rx_coalesce_usecs_irq; struct nes_hw_tune_timer tune_timer; } ;
struct ethtool_coalesce {int rx_coalesce_usecs_irq; int rx_coalesce_usecs_high; int rx_coalesce_usecs_low; int rx_max_coalesced_frames_high; int rx_max_coalesced_frames_irq; int rx_max_coalesced_frames_low; int pkt_rate_low; int rate_sample_interval; scalar_t__ use_adaptive_rx_coalesce; } ;


 int FUNC_0 (struct ethtool_coalesce*,struct ethtool_coalesce*,int) ;
 int FUNC_1 (struct ethtool_coalesce*,int ,int) ;
 struct nes_vnic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
  struct ethtool_coalesce *VAR_1)
{
 struct nes_vnic *VAR_2 = FUNC_2(VAR_0);
 struct nes_device *VAR_3 = VAR_2->nesdev;
 struct nes_adapter *VAR_4 = VAR_3->nesadapter;
 struct ethtool_coalesce VAR_5;
 struct nes_hw_tune_timer *VAR_6 = &VAR_4->tune_timer;
 unsigned long VAR_7;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.rx_coalesce_usecs_irq = VAR_4->et_rx_coalesce_usecs_irq;
 VAR_5.use_adaptive_rx_coalesce = VAR_4->et_use_adaptive_rx_coalesce;
 VAR_5.rate_sample_interval = VAR_4->et_rate_sample_interval;
 VAR_5.pkt_rate_low = VAR_4->et_pkt_rate_low;
 FUNC_3(&VAR_4->periodic_timer_lock, VAR_7);
 VAR_5.rx_max_coalesced_frames_low = VAR_6->threshold_low;
 VAR_5.rx_max_coalesced_frames_irq = VAR_6->threshold_target;
 VAR_5.rx_max_coalesced_frames_high = VAR_6->threshold_high;
 VAR_5.rx_coalesce_usecs_low = VAR_6->timer_in_use_min;
 VAR_5.rx_coalesce_usecs_high = VAR_6->timer_in_use_max;
 if (VAR_4->et_use_adaptive_rx_coalesce) {
  VAR_5.rx_coalesce_usecs_irq = VAR_6->timer_in_use;
 }
 FUNC_4(&VAR_4->periodic_timer_lock, VAR_7);
 FUNC_0(VAR_1, &VAR_5, sizeof(*VAR_1));
 return 0;
}
