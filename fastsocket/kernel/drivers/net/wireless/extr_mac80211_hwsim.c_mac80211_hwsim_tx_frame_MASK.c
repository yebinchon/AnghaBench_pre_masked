
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rates; int vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;
 void FUNC_6 (struct ieee80211_hw*,struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_2,
        struct sk_buff *VAR_3,
        struct ieee80211_channel *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_1);

 if (VAR_0) {
  struct ieee80211_tx_info *VAR_6 = FUNC_2(VAR_3);
  FUNC_4(VAR_6->control.vif, ((void*)0), VAR_3,
           VAR_6->control.rates,
           FUNC_1(VAR_6->control.rates));
 }

 FUNC_5(VAR_2, VAR_3, VAR_4);

 if (VAR_5)
  return FUNC_6(VAR_2, VAR_3, VAR_5);

 FUNC_7(VAR_2, VAR_3, VAR_4);
 FUNC_3(VAR_3);
}
