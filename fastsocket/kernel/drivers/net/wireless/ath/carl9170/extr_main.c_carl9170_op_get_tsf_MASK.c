
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int tsf ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct carl9170_tsf_rsp {int tsf_64; } ;
struct ar9170 {int mutex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ar9170*,int ,int ,int *,int,struct carl9170_tsf_rsp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u64 FUNC_5(struct ieee80211_hw *VAR_1,
          struct ieee80211_vif *VAR_2)
{
 struct ar9170 *VAR_3 = VAR_1->priv;
 struct carl9170_tsf_rsp VAR_4;
 int VAR_5;

 FUNC_3(&VAR_3->mutex);
 VAR_5 = FUNC_1(VAR_3, VAR_0,
    0, ((void*)0), sizeof(VAR_4), &VAR_4);
 FUNC_4(&VAR_3->mutex);
 if (FUNC_0(VAR_5))
  return 0;

 return FUNC_2(VAR_4.tsf_64);
}
