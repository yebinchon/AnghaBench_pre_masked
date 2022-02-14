
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct nic {scalar_t__ phy; int leds; scalar_t__ mac; int blink_timer; TYPE_1__ mii; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_8)
{
 struct nic *VAR_9 = (struct nic *)VAR_8;
 enum led_state {
  led_on = 0x01,
  led_off = 0x04,
  led_on_559 = 0x05,
  led_on_557 = 0x07,
 };
 u16 VAR_10 = VAR_4;

 if (VAR_9->phy == VAR_7) {
  VAR_10 = VAR_2;

  VAR_9->leds = (VAR_9->leds == VAR_1) ?
              VAR_0 : VAR_1;
 } else {
  VAR_9->leds = (VAR_9->leds & led_on) ? led_off :
              (VAR_9->mac < VAR_6) ? led_on_557 :
              led_on_559;
 }
 FUNC_0(VAR_9->netdev, VAR_9->mii.phy_id, VAR_10, VAR_9->leds);
 FUNC_1(&VAR_9->blink_timer, VAR_5 + VAR_3 / 4);
}
