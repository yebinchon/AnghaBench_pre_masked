
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {TYPE_1__* ops; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_2__ {int (* set_key ) (struct wl1271*,int,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct wl1271*,int,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;

__attribute__((used)) static inline int
FUNC_2(struct wl1271 *VAR_0, enum set_key_cmd VAR_1,
    struct ieee80211_vif *VAR_2,
    struct ieee80211_sta *VAR_3,
    struct ieee80211_key_conf *VAR_4)
{
 if (!VAR_0->ops->set_key)
  FUNC_0(1);

 return VAR_0->ops->set_key(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
