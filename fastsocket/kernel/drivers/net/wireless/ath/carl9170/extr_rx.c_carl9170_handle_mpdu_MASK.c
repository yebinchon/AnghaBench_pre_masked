
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ar9170 {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ar9170*,int *,int) ;
 int FUNC_2 (struct ar9170*,int *,int) ;
 struct sk_buff* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (int ,struct ieee80211_rx_status*,int) ;

__attribute__((used)) static int FUNC_6(struct ar9170 *VAR_1, u8 *VAR_2, int VAR_3,
    struct ieee80211_rx_status *VAR_4)
{
 struct sk_buff *VAR_5;
 FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(FUNC_0(VAR_5), VAR_4, sizeof(*VAR_4));
 FUNC_4(VAR_1->hw, VAR_5);
 return 0;
}
