
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {int flags; int role_id; } ;
struct wl1271 {int hw; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,struct ieee80211_vif*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct wl1271*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 struct wl12xx_vif* FUNC_5 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_4, u32 VAR_5,
      struct ieee80211_vif *VAR_6)
{
 struct wl12xx_vif *VAR_7 = FUNC_5(VAR_6);
 struct sk_buff *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_4->hw, VAR_6);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_3(VAR_4, VAR_7->role_id,
          VAR_0,
          VAR_8->data,
          VAR_8->len, 0,
          VAR_5);
 FUNC_0(VAR_8);

 if (VAR_9 < 0)
  goto out;

 FUNC_4(VAR_1, "probe response updated");
 FUNC_2(VAR_3, &VAR_7->flags);

out:
 return VAR_9;
}
