
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {TYPE_1__* ops; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int (* sta_rc_update ) (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*,int ) ;} ;


 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1,
   struct ieee80211_sta *VAR_2, u32 VAR_3)
{
 if (VAR_0->ops->sta_rc_update)
  VAR_0->ops->sta_rc_update(VAR_0, VAR_1, VAR_2, VAR_3);
}
