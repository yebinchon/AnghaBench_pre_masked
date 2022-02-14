
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_timer {scalar_t__ blink_delay_off; scalar_t__ blink_delay_on; int blink_timer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct led_timer *VAR_0)
{
 FUNC_0(&VAR_0->blink_timer);
 VAR_0->blink_delay_on = 0;
 VAR_0->blink_delay_off = 0;
}
