
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;
struct b43_phy_n {int rfctrl_intc1_save; int rfctrl_intc2_save; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct b43_wldev *VAR_3, bool VAR_4)
{
 struct b43_phy_n *VAR_5 = VAR_3->phy.n;
 enum ieee80211_band VAR_6;
 u16 VAR_7;

 if (!VAR_4) {
  VAR_5->rfctrl_intc1_save = FUNC_1(VAR_3,
             VAR_0);
  VAR_5->rfctrl_intc2_save = FUNC_1(VAR_3,
             VAR_1);
  VAR_6 = FUNC_0(VAR_3->wl);
  if (VAR_3->phy.rev >= 3) {
   if (VAR_6 == VAR_2)
    VAR_7 = 0x600;
   else
    VAR_7 = 0x480;
  } else {
   if (VAR_6 == VAR_2)
    VAR_7 = 0x180;
   else
    VAR_7 = 0x120;
  }
  FUNC_2(VAR_3, VAR_0, VAR_7);
  FUNC_2(VAR_3, VAR_1, VAR_7);
 } else {
  FUNC_2(VAR_3, VAR_0,
    VAR_5->rfctrl_intc1_save);
  FUNC_2(VAR_3, VAR_1,
    VAR_5->rfctrl_intc2_save);
 }
}
