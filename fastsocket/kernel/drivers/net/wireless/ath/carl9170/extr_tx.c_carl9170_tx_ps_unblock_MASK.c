
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct carl9170_sta_info {int pending_frames; } ;
struct ar9170 {int hw; } ;


 struct ieee80211_sta* FUNC_0 (struct ar9170*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ieee80211_sta*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ar9170 *VAR_0, struct sk_buff *VAR_1)
{
 struct ieee80211_sta *VAR_2;
 struct carl9170_sta_info *VAR_3;

 FUNC_3();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (FUNC_5(!VAR_2))
  goto out_rcu;

 VAR_3 = (struct carl9170_sta_info *) VAR_2->drv_priv;
 if (FUNC_1(&VAR_3->pending_frames) == 0)
  FUNC_2(VAR_0->hw, VAR_2, 0);

out_rcu:
 FUNC_4();
}
