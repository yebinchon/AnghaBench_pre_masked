
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nes_hw_tune_timer {int cq_count_old; scalar_t__ cq_direction_downward; int threshold_low; int timer_direction_upward; int timer_direction_downward; int threshold_target; int threshold_high; int timer_in_use; } ;
struct nes_device {int currcq_count; int deepcq_count; struct nes_adapter* nesadapter; } ;
struct nes_adapter {int periodic_timer_lock; struct nes_hw_tune_timer tune_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct nes_device *VAR_1)
{
 unsigned long VAR_2;
 struct nes_adapter *VAR_3 = VAR_1->nesadapter;
 struct nes_hw_tune_timer *VAR_4 = &VAR_3->tune_timer;
 u16 VAR_5 = VAR_1->currcq_count;

 FUNC_0(&VAR_3->periodic_timer_lock, VAR_2);

 if (VAR_4->cq_count_old <= VAR_5)
  VAR_4->cq_direction_downward = 0;
 else
  VAR_4->cq_direction_downward++;
 VAR_4->cq_count_old = VAR_5;
 if (VAR_4->cq_direction_downward > VAR_0) {
  if (VAR_5 <= VAR_4->threshold_low &&
      VAR_4->threshold_low > 4) {
   VAR_4->threshold_low = VAR_4->threshold_low/2;
   VAR_4->cq_direction_downward=0;
   VAR_1->currcq_count = 0;
   FUNC_1(&VAR_3->periodic_timer_lock, VAR_2);
   return;
  }
 }

 if (VAR_5 > 1) {
  VAR_1->deepcq_count += VAR_5;
  if (VAR_5 <= VAR_4->threshold_low) {
   VAR_4->timer_direction_upward++;
   VAR_4->timer_direction_downward = 0;
  } else if (VAR_5 <= VAR_4->threshold_target) {
   VAR_4->timer_direction_upward = 0;
   VAR_4->timer_direction_downward = 0;
  } else if (VAR_5 <= VAR_4->threshold_high) {
   VAR_4->timer_direction_downward++;
   VAR_4->timer_direction_upward = 0;
  } else if (VAR_5 <= (VAR_4->threshold_high) * 2) {
   VAR_4->timer_in_use -= 2;
   VAR_4->timer_direction_upward = 0;
   VAR_4->timer_direction_downward++;
  } else {
   VAR_4->timer_in_use -= 4;
   VAR_4->timer_direction_upward = 0;
   VAR_4->timer_direction_downward++;
  }

  if (VAR_4->timer_direction_upward > 3 ) {
   VAR_4->timer_in_use += 3;
   VAR_4->timer_direction_upward = 0;
   VAR_4->timer_direction_downward = 0;
  }
  if (VAR_4->timer_direction_downward > 5) {
   VAR_4->timer_in_use -= 4 ;
   VAR_4->timer_direction_downward = 0;
   VAR_4->timer_direction_upward = 0;
  }
 }


 if (VAR_4->timer_in_use > VAR_4->threshold_high)
  VAR_4->timer_in_use = VAR_4->threshold_high;
 else if (VAR_4->timer_in_use < VAR_4->threshold_low)
  VAR_4->timer_in_use = VAR_4->threshold_low;

 VAR_1->currcq_count = 0;

 FUNC_1(&VAR_3->periodic_timer_lock, VAR_2);
}
