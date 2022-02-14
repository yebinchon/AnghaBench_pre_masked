
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_tx_control {struct ieee80211_sta* sta; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct carl9170_sta_info {int pending_frames; } ;
struct ar9170 {int hw; int tx_dropped; int * tx_pending; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct ar9170*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*,struct sk_buff*) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*,struct ieee80211_sta*,struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_7 (struct ar9170*,struct ieee80211_sta*,struct sk_buff*) ;
 int FUNC_8 (int ,struct sk_buff*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct ieee80211_hw *VAR_1,
      struct ieee80211_tx_control *VAR_2,
      struct sk_buff *VAR_3)
{
 struct ar9170 *VAR_4 = VAR_1->priv;
 struct ieee80211_tx_info *VAR_5;
 struct ieee80211_sta *VAR_6 = VAR_2->sta;
 bool VAR_7;

 if (FUNC_11(!FUNC_1(VAR_4)))
  goto err_free;

 VAR_5 = FUNC_0(VAR_3);

 if (FUNC_11(FUNC_7(VAR_4, VAR_6, VAR_3)))
  goto err_free;

 FUNC_4(VAR_4, VAR_3);





 if (VAR_6) {
  struct carl9170_sta_info *VAR_8 = (void *) VAR_6->drv_priv;
  FUNC_2(&VAR_8->pending_frames);
 }

 if (VAR_5->flags & VAR_0) {







  VAR_7 = FUNC_6(VAR_4, VAR_6, VAR_3, VAR_5);
  if (VAR_7)
   FUNC_5(VAR_4);

 } else {
  unsigned int VAR_9 = FUNC_9(VAR_3);

  FUNC_10(&VAR_4->tx_pending[VAR_9], VAR_3);
 }

 FUNC_3(VAR_4);
 return;

err_free:
 VAR_4->tx_dropped++;
 FUNC_8(VAR_4->hw, VAR_3);
}
