
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ lapic_timer_mode_t ;
typedef int lapic_timer_divide_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_5 ;

void
FUNC_4(
 boolean_t VAR_6,
 lapic_timer_mode_t VAR_7,
 lapic_timer_divide_t VAR_8)
{
 uint32_t VAR_9;

 FUNC_2();
 VAR_9 = FUNC_0(VAR_3);
 VAR_9 &= ~(VAR_0 |
     VAR_1 |
     VAR_2);
 VAR_9 |= VAR_6 ? 0 : VAR_0;
 VAR_9 |= (VAR_7 == VAR_5) ? VAR_1 : 0;
 FUNC_1(VAR_3, VAR_9);
 FUNC_1(VAR_4, VAR_8);
 FUNC_3();
}
