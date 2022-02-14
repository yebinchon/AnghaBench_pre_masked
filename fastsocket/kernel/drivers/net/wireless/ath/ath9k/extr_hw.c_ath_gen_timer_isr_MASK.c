
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int val; } ;
struct ath_gen_timer_table {struct ath_gen_timer** timers; TYPE_1__ timer_mask; } ;
struct ath_hw {int intr_gen_timer_trigger; int intr_gen_timer_thresh; struct ath_gen_timer_table hw_gen_timers; } ;
struct ath_gen_timer {int arg; int (* trigger ) (int ) ;int (* overflow ) (int ) ;} ;
struct ath_common {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 int FUNC_3 (struct ath_gen_timer_table*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct ath_hw *VAR_1)
{
 struct ath_gen_timer_table *VAR_2 = &VAR_1->hw_gen_timers;
 struct ath_gen_timer *VAR_3;
 struct ath_common *VAR_4 = FUNC_1(VAR_1);
 u32 VAR_5, VAR_6, VAR_7;


 VAR_5 = VAR_1->intr_gen_timer_trigger;
 VAR_6 = VAR_1->intr_gen_timer_thresh;
 VAR_5 &= VAR_2->timer_mask.val;
 VAR_6 &= VAR_2->timer_mask.val;

 VAR_5 &= ~VAR_6;

 while (VAR_6) {
  VAR_7 = FUNC_3(VAR_2, &VAR_6);
  VAR_3 = VAR_2->timers[VAR_7];
  FUNC_0(!VAR_3);
  FUNC_2(VAR_4, VAR_0, "TSF overflow for Gen timer %d\n",
   VAR_7);
  VAR_3->overflow(VAR_3->arg);
 }

 while (VAR_5) {
  VAR_7 = FUNC_3(VAR_2, &VAR_5);
  VAR_3 = VAR_2->timers[VAR_7];
  FUNC_0(!VAR_3);
  FUNC_2(VAR_4, VAR_0,
   "Gen timer[%d] trigger\n", VAR_7);
  VAR_3->trigger(VAR_3->arg);
 }
}
