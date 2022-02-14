
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct wl1271*) ;
 struct wl12xx_vif* FUNC_4 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2,
        struct ieee80211_chanctx_conf *VAR_3)
{
 struct wl1271 *VAR_4 = VAR_1->priv;
 struct wl12xx_vif *VAR_5 = FUNC_4(VAR_2);

 FUNC_2(VAR_0,
       "mac80211 unassign chanctx (role %d) %d (type %d)",
       VAR_5->role_id,
       FUNC_1(VAR_3->def.chan->center_freq),
       FUNC_0(&VAR_3->def));

 FUNC_3(VAR_4);
}
