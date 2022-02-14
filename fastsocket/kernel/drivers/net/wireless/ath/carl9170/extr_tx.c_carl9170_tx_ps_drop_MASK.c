
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct carl9170_sta_info {int sleeping; } ;
struct ar9170 {int tx_ampdu_upload; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_sta* FUNC_1 (struct ar9170*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ar9170*,struct sk_buff*) ;
 int FUNC_4 (struct ar9170*,struct sk_buff*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static bool FUNC_8(struct ar9170 *VAR_4, struct sk_buff *VAR_5)
{
 struct ieee80211_sta *VAR_6;
 struct carl9170_sta_info *VAR_7;
 struct ieee80211_tx_info *VAR_8;

 FUNC_5();
 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_6)
  goto out_rcu;

 VAR_7 = (void *) VAR_6->drv_priv;
 VAR_8 = FUNC_0(VAR_5);

 if (FUNC_7(VAR_7->sleeping) &&
     !(VAR_8->flags & (VAR_2 |
    VAR_1))) {
  FUNC_6();

  if (VAR_8->flags & VAR_0)
   FUNC_2(&VAR_4->tx_ampdu_upload);

  VAR_8->flags |= VAR_3;
  FUNC_3(VAR_4, VAR_5);
  FUNC_4(VAR_4, VAR_5, 0);
  return 1;
 }

out_rcu:
 FUNC_6();
 return 0;
}
