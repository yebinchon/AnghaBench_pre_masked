
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_hw {int wiphy; } ;
struct b43_wldev {TYPE_2__* wl; } ;
typedef int name ;
typedef enum b43_led_behaviour { ____Placeholder_b43_led_behaviour } b43_led_behaviour ;
struct TYPE_3__ {int led_assoc; int led_radio; int led_rx; int led_tx; } ;
struct TYPE_4__ {TYPE_1__ leds; struct ieee80211_hw* hw; } ;






 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int *,char*,int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (char*,int,char*,char*) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_1,
   u8 VAR_2,
   enum b43_led_behaviour VAR_3,
   bool VAR_4)
{
 struct ieee80211_hw *VAR_5 = VAR_1->wl->hw;
 char VAR_6[VAR_0 + 1];



 switch (VAR_3) {
 case 136:
 case 134:
 case 133:
  break;
 case 139:
 case 129:
 case 138:
  FUNC_6(VAR_6, sizeof(VAR_6),
    "b43-%s::tx", FUNC_7(VAR_5->wiphy));
  FUNC_0(VAR_1, &VAR_1->wl->leds.led_tx, VAR_6,
     FUNC_5(VAR_5),
     VAR_2, VAR_4);
  FUNC_6(VAR_6, sizeof(VAR_6),
    "b43-%s::rx", FUNC_7(VAR_5->wiphy));
  FUNC_0(VAR_1, &VAR_1->wl->leds.led_rx, VAR_6,
     FUNC_4(VAR_5),
     VAR_2, VAR_4);
  break;
 case 131:
 case 132:
 case 130:
 case 135:
  FUNC_6(VAR_6, sizeof(VAR_6),
    "b43-%s::radio", FUNC_7(VAR_5->wiphy));
  FUNC_0(VAR_1, &VAR_1->wl->leds.led_radio, VAR_6,
     FUNC_3(VAR_5),
     VAR_2, VAR_4);
  break;
 case 128:
 case 137:
  FUNC_6(VAR_6, sizeof(VAR_6),
    "b43-%s::assoc", FUNC_7(VAR_5->wiphy));
  FUNC_0(VAR_1, &VAR_1->wl->leds.led_assoc, VAR_6,
     FUNC_2(VAR_5),
     VAR_2, VAR_4);
  break;
 default:
  FUNC_1(VAR_1->wl, "LEDs: Unknown behaviour 0x%02X\n",
   VAR_3);
  break;
 }
}
