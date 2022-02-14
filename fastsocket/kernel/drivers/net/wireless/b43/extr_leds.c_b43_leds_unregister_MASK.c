
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_leds {int led_radio; int led_assoc; int led_rx; int led_tx; } ;
struct b43_wl {struct b43_leds leds; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct b43_wl *VAR_0)
{
 struct b43_leds *VAR_1 = &VAR_0->leds;

 FUNC_0(&VAR_1->led_tx);
 FUNC_0(&VAR_1->led_rx);
 FUNC_0(&VAR_1->led_assoc);
 FUNC_0(&VAR_1->led_radio);
}
