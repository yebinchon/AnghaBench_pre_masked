
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nes_hw_tune_timer {scalar_t__ timer_in_use_old; int timer_in_use; scalar_t__ timer_direction_downward; scalar_t__ timer_direction_upward; } ;
struct nes_device {scalar_t__ regs; scalar_t__ deepcq_count; struct nes_adapter* nesadapter; } ;
struct nes_adapter {int periodic_timer_lock; struct nes_hw_tune_timer tune_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct nes_device *VAR_2)
{
 unsigned long VAR_3;
 struct nes_adapter *VAR_4 = VAR_2->nesadapter;
 struct nes_hw_tune_timer *VAR_5 = &VAR_4->tune_timer;

 FUNC_1(&VAR_4->periodic_timer_lock, VAR_3);

 if (VAR_5->timer_in_use_old == 0) {
  VAR_2->deepcq_count = 0;
  VAR_5->timer_direction_upward = 0;
  VAR_5->timer_direction_downward = 0;
  VAR_5->timer_in_use = VAR_0;
  VAR_5->timer_in_use_old = 0;

 }
 if (VAR_5->timer_in_use != VAR_5->timer_in_use_old) {
  VAR_5->timer_in_use_old = VAR_5->timer_in_use;
  FUNC_0(VAR_2->regs+VAR_1,
   0x80000000 | ((u32)(VAR_5->timer_in_use*8)));
 }

 FUNC_2(&VAR_4->periodic_timer_lock, VAR_3);
}
