
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl1251 {scalar_t__ default_key; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {TYPE_2__* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct TYPE_4__ {scalar_t__ hw_key_idx; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct wl1251*,scalar_t__) ;
 int FUNC_3 (struct wl1251*,struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_4 (struct wl1251*) ;
 int FUNC_5 (struct wl1251*,struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_6 (struct wl1251*) ;

__attribute__((used)) static int FUNC_7(struct wl1251 *VAR_0, struct sk_buff *VAR_1)
{
 struct ieee80211_tx_info *VAR_2;
 int VAR_3 = 0;
 u8 VAR_4;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->control.hw_key) {
  VAR_4 = VAR_2->control.hw_key->hw_key_idx;
  if (FUNC_1(VAR_0->default_key != VAR_4)) {
   VAR_3 = FUNC_2(VAR_0, VAR_4);
   if (VAR_3 < 0)
    return VAR_3;
  }
 }

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_6(VAR_0);

 return VAR_3;
}
