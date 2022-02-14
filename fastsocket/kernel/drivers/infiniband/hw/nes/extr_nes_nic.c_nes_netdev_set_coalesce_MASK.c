
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_hw_tune_timer {scalar_t__ timer_in_use_max; scalar_t__ timer_in_use_min; scalar_t__ threshold_high; scalar_t__ threshold_target; scalar_t__ threshold_low; } ;
struct nes_device {scalar_t__ regs; struct nes_adapter* nesadapter; } ;
struct nes_adapter {int et_rx_coalesce_usecs_irq; int et_use_adaptive_rx_coalesce; int timer_int_limit; scalar_t__ et_pkt_rate_low; int periodic_timer_lock; struct nes_hw_tune_timer tune_timer; } ;
struct ethtool_coalesce {int rx_coalesce_usecs_irq; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ rx_coalesce_usecs_high; scalar_t__ rx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_max_coalesced_frames_low; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 struct nes_vnic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
  struct ethtool_coalesce *VAR_4)
{
 struct nes_vnic *VAR_5 = FUNC_1(VAR_3);
 struct nes_device *VAR_6 = VAR_5->nesdev;
 struct nes_adapter *VAR_7 = VAR_6->nesadapter;
 struct nes_hw_tune_timer *VAR_8 = &VAR_7->tune_timer;
 unsigned long VAR_9;

 FUNC_2(&VAR_7->periodic_timer_lock, VAR_9);
 if (VAR_4->rx_max_coalesced_frames_low) {
  VAR_8->threshold_low = VAR_4->rx_max_coalesced_frames_low;
 }
 if (VAR_4->rx_max_coalesced_frames_irq) {
  VAR_8->threshold_target = VAR_4->rx_max_coalesced_frames_irq;
 }
 if (VAR_4->rx_max_coalesced_frames_high) {
  VAR_8->threshold_high = VAR_4->rx_max_coalesced_frames_high;
 }
 if (VAR_4->rx_coalesce_usecs_low) {
  VAR_8->timer_in_use_min = VAR_4->rx_coalesce_usecs_low;
 }
 if (VAR_4->rx_coalesce_usecs_high) {
  VAR_8->timer_in_use_max = VAR_4->rx_coalesce_usecs_high;
 }
 FUNC_3(&VAR_7->periodic_timer_lock, VAR_9);


 VAR_7->et_rx_coalesce_usecs_irq = VAR_4->rx_coalesce_usecs_irq;
 if (VAR_4->use_adaptive_rx_coalesce) {
  VAR_7->et_use_adaptive_rx_coalesce = 1;
  VAR_7->timer_int_limit = VAR_2;
  VAR_7->et_rx_coalesce_usecs_irq = 0;
  if (VAR_4->pkt_rate_low) {
   VAR_7->et_pkt_rate_low = VAR_4->pkt_rate_low;
  }
 } else {
  VAR_7->et_use_adaptive_rx_coalesce = 0;
  VAR_7->timer_int_limit = VAR_1;
  if (VAR_7->et_rx_coalesce_usecs_irq) {
   FUNC_0(VAR_6->regs+VAR_0,
     0x80000000 | ((u32)(VAR_7->et_rx_coalesce_usecs_irq*8)));
  }
 }
 return 0;
}
