
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;


 int VAR_0 ;







 int FUNC_0 (struct ieee80211_vif*,int ,int ) ;
 int FUNC_1 (struct ieee80211_vif*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_1,
           struct ieee80211_vif *VAR_2,
           enum ieee80211_ampdu_mlme_action VAR_3,
           struct ieee80211_sta *VAR_4, u16 VAR_5, u16 *VAR_6,
           u8 VAR_7)
{
 switch (VAR_3) {
 case 131:
  FUNC_0(VAR_2, VAR_4->addr, VAR_5);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_1(VAR_2, VAR_4->addr, VAR_5);
  break;
 case 132:
  break;
 case 134:
 case 133:
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
