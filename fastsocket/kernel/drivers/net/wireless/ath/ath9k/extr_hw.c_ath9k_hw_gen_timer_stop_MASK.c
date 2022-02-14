
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timer_bits; } ;
struct ath_gen_timer_table {TYPE_1__ timer_mask; } ;
struct ath_hw {struct ath_gen_timer_table hw_gen_timers; } ;
struct ath_gen_timer {size_t index; } ;
struct TYPE_4__ {int mode_mask; int mode_addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 size_t VAR_6 ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int *) ;
 TYPE_2__* VAR_7 ;

void FUNC_6(struct ath_hw *VAR_8, struct ath_gen_timer *VAR_9)
{
 struct ath_gen_timer_table *VAR_10 = &VAR_8->hw_gen_timers;

 if ((VAR_9->index < VAR_0) ||
  (VAR_9->index >= VAR_6)) {
  return;
 }


 FUNC_3(VAR_8, VAR_7[VAR_9->index].mode_addr,
   VAR_7[VAR_9->index].mode_mask);

 if (FUNC_1(VAR_8) || FUNC_2(VAR_8)) {



  if ((VAR_9->index >= VAR_1)) {
   FUNC_3(VAR_8, VAR_5,
        (1 << VAR_9->index));
  }
 }


 FUNC_3(VAR_8, VAR_2,
  (FUNC_4(FUNC_0(VAR_9->index), VAR_3) |
  FUNC_4(FUNC_0(VAR_9->index), VAR_4)));

 FUNC_5(VAR_9->index, &VAR_10->timer_mask.timer_bits);
}
