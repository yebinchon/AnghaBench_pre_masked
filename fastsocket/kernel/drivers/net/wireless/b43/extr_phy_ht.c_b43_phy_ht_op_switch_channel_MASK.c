
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_channel {int dummy; } ;
struct b43_wldev {TYPE_4__* wl; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_8__ {TYPE_2__* hw; } ;
struct TYPE_7__ {struct ieee80211_channel* chan; } ;
struct TYPE_5__ {TYPE_3__ chandef; } ;
struct TYPE_6__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct b43_wldev*,struct ieee80211_channel*,int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct b43_wldev *VAR_2,
     unsigned int VAR_3)
{
 struct ieee80211_channel *VAR_4 = VAR_2->wl->hw->conf.chandef.chan;
 enum nl80211_channel_type VAR_5 =
  FUNC_2(&VAR_2->wl->hw->conf.chandef);

 if (FUNC_0(VAR_2->wl) == VAR_1) {
  if ((VAR_3 < 1) || (VAR_3 > 14))
   return -VAR_0;
 } else {
  return -VAR_0;
 }

 return FUNC_1(VAR_2, VAR_4, VAR_5);
}
