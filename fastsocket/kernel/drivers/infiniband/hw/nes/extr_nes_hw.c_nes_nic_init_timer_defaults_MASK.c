
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nes_hw_tune_timer {int threshold_high; int threshold_target; int threshold_low; int timer_in_use_max; int timer_in_use_min; } ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_adapter {int periodic_timer_lock; struct nes_hw_tune_timer tune_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct nes_device *VAR_8, u8 VAR_9)
{
 unsigned long VAR_10;
 struct nes_adapter *VAR_11 = VAR_8->nesadapter;
 struct nes_hw_tune_timer *VAR_12 = &VAR_11->tune_timer;

 FUNC_0(&VAR_11->periodic_timer_lock, VAR_10);

 VAR_12->timer_in_use_min = VAR_7;
 VAR_12->timer_in_use_max = VAR_6;
 if (VAR_9) {
  VAR_12->threshold_low = VAR_1;
  VAR_12->threshold_target = VAR_2;
  VAR_12->threshold_high = VAR_0;
 } else {
  VAR_12->threshold_low = VAR_4;
  VAR_12->threshold_target = VAR_5;
  VAR_12->threshold_high = VAR_3;
 }


 FUNC_1(&VAR_11->periodic_timer_lock, VAR_10);
}
