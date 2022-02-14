
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00_intf {TYPE_1__* beacon; } ;
struct rt2x00_dev {int intf_sta_count; int intf_ap_count; int flags; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rt2x00_dev*,struct rt2x00_intf*,int ,int *,int *) ;
 int FUNC_2 (int ,int *) ;
 struct rt2x00_intf* FUNC_3 (struct ieee80211_vif*) ;

void FUNC_4(struct ieee80211_hw *VAR_4,
    struct ieee80211_vif *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_4->priv;
 struct rt2x00_intf *VAR_7 = FUNC_3(VAR_5);






 if (!FUNC_2(VAR_0, &VAR_6->flags) ||
     (VAR_5->type == VAR_2 && !VAR_6->intf_ap_count) ||
     (VAR_5->type != VAR_2 && !VAR_6->intf_sta_count))
  return;

 if (VAR_5->type == VAR_2)
  VAR_6->intf_ap_count--;
 else
  VAR_6->intf_sta_count--;





 FUNC_0(VAR_1, &VAR_7->beacon->flags);





 FUNC_1(VAR_6, VAR_7,
         VAR_3, ((void*)0), ((void*)0));
}
