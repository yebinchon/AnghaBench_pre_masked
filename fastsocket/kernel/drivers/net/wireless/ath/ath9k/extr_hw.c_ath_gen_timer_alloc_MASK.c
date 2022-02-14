
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath_gen_timer_table {struct ath_gen_timer** timers; } ;
struct ath_hw {struct ath_gen_timer_table hw_gen_timers; } ;
struct ath_gen_timer {size_t index; void (* trigger ) (void*) ;void (* overflow ) (void*) ;void* arg; } ;


 int VAR_0 ;
 struct ath_gen_timer* FUNC_0 (int,int ) ;

struct ath_gen_timer *FUNC_1(struct ath_hw *VAR_1,
       void (*VAR_2)(void *),
       void (*VAR_3)(void *),
       void *VAR_4,
       u8 VAR_5)
{
 struct ath_gen_timer_table *VAR_6 = &VAR_1->hw_gen_timers;
 struct ath_gen_timer *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct ath_gen_timer), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);


 VAR_6->timers[VAR_5] = VAR_7;
 VAR_7->index = VAR_5;
 VAR_7->trigger = VAR_2;
 VAR_7->overflow = VAR_3;
 VAR_7->arg = VAR_4;

 return VAR_7;
}
