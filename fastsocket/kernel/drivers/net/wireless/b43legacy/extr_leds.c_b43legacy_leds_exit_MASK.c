
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {int led_radio; int led_assoc; int led_rx; int led_tx; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct b43legacy_wldev *VAR_0)
{
 FUNC_0(&VAR_0->led_tx);
 FUNC_0(&VAR_0->led_rx);
 FUNC_0(&VAR_0->led_assoc);
 FUNC_0(&VAR_0->led_radio);
}
