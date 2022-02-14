
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct b43_wldev {int dummy; } ;
struct b43_wl {int radio_enabled; int txpower_adjust_work; int mutex; int beacon_update_trigger; struct b43_wldev* current_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 struct b43_wldev* FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (int *) ;
 struct b43_wl* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_1)
{
 struct b43_wl *VAR_2 = FUNC_4(VAR_1);
 struct b43_wldev *VAR_3 = VAR_2->current_dev;

 FUNC_3(&(VAR_2->beacon_update_trigger));

 if (!VAR_3)
  goto out;

 FUNC_5(&VAR_2->mutex);
 if (FUNC_0(VAR_3) >= VAR_0) {
  VAR_3 = FUNC_2(VAR_3);
  if (!VAR_3)
   goto out_unlock;
 }
 FUNC_1(VAR_3);
 VAR_2->radio_enabled = 0;

out_unlock:
 FUNC_6(&VAR_2->mutex);
out:
 FUNC_3(&(VAR_2->txpower_adjust_work));
}
