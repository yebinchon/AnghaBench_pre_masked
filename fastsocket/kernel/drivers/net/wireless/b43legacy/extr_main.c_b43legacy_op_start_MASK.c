
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int wiphy; } ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_wl {int beacon0_uploaded; int beacon1_uploaded; int beacon_templates_virgin; int radio_enabled; int mutex; scalar_t__ filter_flags; int mac_addr; int bssid; struct b43legacy_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 struct b43legacy_wl* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_3)
{
 struct b43legacy_wl *VAR_4 = FUNC_4(VAR_3);
 struct b43legacy_wldev *VAR_5 = VAR_4->current_dev;
 int VAR_6 = 0;
 int VAR_7 = 0;




 FUNC_5(VAR_4->bssid, 0, VAR_2);
 FUNC_5(VAR_4->mac_addr, 0, VAR_2);
 VAR_4->filter_flags = 0;
 VAR_4->beacon0_uploaded = 0;
 VAR_4->beacon1_uploaded = 0;
 VAR_4->beacon_templates_virgin = 1;
 VAR_4->radio_enabled = 1;

 FUNC_6(&VAR_4->mutex);

 if (FUNC_0(VAR_5) < VAR_0) {
  VAR_7 = FUNC_2(VAR_5);
  if (VAR_7)
   goto out_mutex_unlock;
  VAR_6 = 1;
 }

 if (FUNC_0(VAR_5) < VAR_1) {
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7) {
   if (VAR_6)
    FUNC_1(VAR_5);
   goto out_mutex_unlock;
  }
 }

 FUNC_8(VAR_3->wiphy);

out_mutex_unlock:
 FUNC_7(&VAR_4->mutex);

 return VAR_7;
}
