
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct b43legacy_phy {int possible_phymodes; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; TYPE_2__* wl; } ;
struct TYPE_4__ {struct ieee80211_hw* hw; } ;
struct TYPE_3__ {int ** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct b43legacy_wldev *VAR_5,
     int VAR_6,
     int VAR_7)
{
 struct ieee80211_hw *VAR_8 = VAR_5->wl->hw;
 struct b43legacy_phy *VAR_9 = &VAR_5->phy;

 VAR_9->possible_phymodes = 0;
 if (VAR_6) {
  VAR_8->wiphy->bands[VAR_2] =
   &VAR_3;
  VAR_9->possible_phymodes |= VAR_0;
 }

 if (VAR_7) {
  VAR_8->wiphy->bands[VAR_2] =
   &VAR_4;
  VAR_9->possible_phymodes |= VAR_1;
 }

 return 0;
}
