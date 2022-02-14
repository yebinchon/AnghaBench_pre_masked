
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct TYPE_5__ {scalar_t__ type; int supports_2ghz; int supports_5ghz; } ;
struct b43_wldev {TYPE_2__ phy; TYPE_3__* wl; } ;
struct TYPE_6__ {struct ieee80211_hw* hw; } ;
struct TYPE_4__ {int ** bands; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct b43_wldev *VAR_6,
      bool VAR_7, bool VAR_8)
{
 struct ieee80211_hw *VAR_9 = VAR_6->wl->hw;

 if (VAR_7)
  VAR_9->wiphy->bands[VAR_1] = &VAR_3;
 if (VAR_6->phy.type == VAR_0) {
  if (VAR_8)
   VAR_9->wiphy->bands[VAR_2] = &VAR_5;
 } else {
  if (VAR_8)
   VAR_9->wiphy->bands[VAR_2] = &VAR_4;
 }

 VAR_6->phy.supports_2ghz = VAR_7;
 VAR_6->phy.supports_5ghz = VAR_8;

 return 0;
}
