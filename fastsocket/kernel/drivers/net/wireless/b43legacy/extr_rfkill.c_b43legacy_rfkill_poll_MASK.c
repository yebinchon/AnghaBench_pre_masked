
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssb_bus {int dummy; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_4__ {int radio_on; } ;
struct b43legacy_wldev {int radio_hw_enable; TYPE_2__* dev; TYPE_1__ phy; } ;
struct b43legacy_wl {int mutex; struct b43legacy_wldev* current_dev; } ;
struct TYPE_5__ {struct ssb_bus* bus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 scalar_t__ FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wl*,char*,char*) ;
 struct b43legacy_wl* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ssb_bus*) ;
 scalar_t__ FUNC_9 (struct ssb_bus*,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int ,int) ;

void FUNC_14(struct ieee80211_hw *VAR_1)
{
 struct b43legacy_wl *VAR_2 = FUNC_5(VAR_1);
 struct b43legacy_wldev *VAR_3 = VAR_2->current_dev;
 struct ssb_bus *VAR_4 = VAR_3->dev->bus;
 bool VAR_5;
 bool VAR_6 = 0;

 FUNC_6(&VAR_2->mutex);
 if (FUNC_12(FUNC_3(VAR_3) < VAR_0)) {
  if (FUNC_9(VAR_4, 0)) {
   FUNC_7(&VAR_2->mutex);
   return;
  }
  FUNC_11(VAR_3->dev, 0);
  VAR_6 = 1;
 }

 VAR_5 = FUNC_0(VAR_3);

 if (FUNC_12(VAR_5 != VAR_3->radio_hw_enable)) {
  VAR_3->radio_hw_enable = VAR_5;
  FUNC_4(VAR_2, "Radio hardware status changed to %s\n",
   VAR_5 ? "ENABLED" : "DISABLED");
  FUNC_13(VAR_1->wiphy, !VAR_5);
  if (VAR_5 != VAR_3->phy.radio_on) {
   if (VAR_5)
    FUNC_2(VAR_3);
   else
    FUNC_1(VAR_3, 0);
  }
 }

 if (VAR_6) {
  FUNC_10(VAR_3->dev, 0);
  FUNC_8(VAR_4);
 }

 FUNC_7(&VAR_2->mutex);
}
