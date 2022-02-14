
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usb; } ;
struct zd_mac {TYPE_1__ chip; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {struct ieee80211_hw** rate_driver_data; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct zd_mac*,struct sk_buff*) ;
 struct zd_mac* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
       struct ieee80211_tx_control *VAR_1,
       struct sk_buff *VAR_2)
{
 struct zd_mac *VAR_3 = FUNC_3(VAR_0);
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5)
  goto fail;

 VAR_4->rate_driver_data[0] = VAR_0;

 VAR_5 = FUNC_4(&VAR_3->chip.usb, VAR_2);
 if (VAR_5)
  goto fail;
 return;

fail:
 FUNC_1(VAR_2);
}
