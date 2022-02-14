
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int timer_bits; } ;
struct ath_gen_timer_table {TYPE_1__ timer_mask; } ;
struct ath_hw {struct ath_gen_timer_table hw_gen_timers; } ;
struct ath_gen_timer {size_t index; } ;
struct TYPE_4__ {int mode_mask; int mode_addr; int period_addr; int next_addr; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (struct ath_hw*,int ,int) ;
 int FUNC_6 (struct ath_hw*,int ,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ath_hw*) ;
 scalar_t__ FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_6 ;
 int FUNC_11 (size_t,int *) ;

void FUNC_12(struct ath_hw *VAR_7,
         struct ath_gen_timer *VAR_8,
         u32 VAR_9,
         u32 VAR_10)
{
 struct ath_gen_timer_table *VAR_11 = &VAR_7->hw_gen_timers;
 u32 VAR_12, VAR_13;

 FUNC_3(!VAR_10);

 FUNC_11(VAR_8->index, &VAR_11->timer_mask.timer_bits);

 VAR_12 = FUNC_9(VAR_7);

 VAR_13 = VAR_12 + VAR_9;

 FUNC_10(FUNC_8(VAR_7), VAR_5,
  "current tsf %x period %x timer_next %x\n",
  VAR_12, VAR_10, VAR_13);




 FUNC_6(VAR_7, VAR_6[VAR_8->index].next_addr,
   VAR_13);
 FUNC_6(VAR_7, VAR_6[VAR_8->index].period_addr,
    VAR_10);
 FUNC_5(VAR_7, VAR_6[VAR_8->index].mode_addr,
      VAR_6[VAR_8->index].mode_mask);

 if (FUNC_1(VAR_7) || FUNC_2(VAR_7)) {





  if ((VAR_8->index < VAR_0))
   FUNC_4(VAR_7, VAR_4,
           (1 << VAR_8->index));
  else
   FUNC_5(VAR_7, VAR_4,
           (1 << VAR_8->index));
 }


 FUNC_5(VAR_7, VAR_1,
  (FUNC_7(FUNC_0(VAR_8->index), VAR_2) |
  FUNC_7(FUNC_0(VAR_8->index), VAR_3)));
}
