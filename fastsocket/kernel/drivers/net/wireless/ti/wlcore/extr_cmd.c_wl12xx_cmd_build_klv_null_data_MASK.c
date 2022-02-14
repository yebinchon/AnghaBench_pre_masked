
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int klv_template_id; } ;
struct wl12xx_vif {int basic_rate; TYPE_1__ sta; int role_id; } ;
struct wl1271 {int hw; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,struct ieee80211_vif*) ;
 int FUNC_2 (struct wl1271*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int) ;
 struct ieee80211_vif* FUNC_4 (struct wl12xx_vif*) ;

int FUNC_5(struct wl1271 *VAR_2,
       struct wl12xx_vif *VAR_3)
{
 struct ieee80211_vif *VAR_4 = FUNC_4(VAR_3);
 struct sk_buff *VAR_5 = ((void*)0);
 int VAR_6 = -VAR_1;

 VAR_5 = FUNC_1(VAR_2->hw, VAR_4);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_2(VAR_2, VAR_3->role_id, VAR_0,
          VAR_5->data, VAR_5->len,
          VAR_3->sta.klv_template_id,
          VAR_3->basic_rate);

out:
 FUNC_0(VAR_5);
 if (VAR_6)
  FUNC_3("cmd build klv null data failed %d", VAR_6);

 return VAR_6;

}
