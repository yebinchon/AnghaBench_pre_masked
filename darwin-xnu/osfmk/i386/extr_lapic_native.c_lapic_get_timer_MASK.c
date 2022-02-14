
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lapic_timer_mode_t ;
typedef int lapic_timer_divide_t ;
typedef int lapic_timer_count_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_3(
 lapic_timer_mode_t *VAR_8,
 lapic_timer_divide_t *VAR_9,
 lapic_timer_count_t *VAR_10,
 lapic_timer_count_t *VAR_11)
{
 FUNC_1();
 if (VAR_8)
  *VAR_8 = (FUNC_0(VAR_2) & VAR_0) ?
    VAR_7 : VAR_6;
 if (VAR_9)
  *VAR_9 = FUNC_0(VAR_4) & VAR_1;
 if (VAR_10)
  *VAR_10 = FUNC_0(VAR_5);
 if (VAR_11)
  *VAR_11 = FUNC_0(VAR_3);
 FUNC_2();
}
