
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct p54_common {int powersave_override; int aid; int bssid; } ;
struct ieee80211_tim_ie {int dummy; } ;
struct ieee80211_hdr {int addr3; int frame_control; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ieee80211_tim_ie*,int ,int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct p54_common*) ;

__attribute__((used)) static void FUNC_5(struct p54_common *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_hdr *VAR_3 = (void *) VAR_2->data;
 struct ieee80211_tim_ie *VAR_4;
 u8 *VAR_5;
 u8 VAR_6;
 bool VAR_7;


 if (!FUNC_2(VAR_3->frame_control))
  return;

 if (!VAR_1->aid)
  return;


 if (!FUNC_0(VAR_3->addr3, VAR_1->bssid))
  return;

 VAR_5 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = VAR_5[1];
 VAR_4 = (struct ieee80211_tim_ie *) &VAR_5[2];

 VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_1->aid);
 if (VAR_7 != VAR_1->powersave_override) {
  VAR_1->powersave_override = VAR_7;
  FUNC_4(VAR_1);
 }
}
