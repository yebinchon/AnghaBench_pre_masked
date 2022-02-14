
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwl8k_priv {int caps; int band_50; int band_24; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*,int *,int) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_hw *VAR_4, u32 VAR_5)
{
 struct mwl8k_priv *VAR_6 = VAR_4->priv;

 if (VAR_6->caps)
  return;

 if ((VAR_5 & VAR_0) || !(VAR_5 & VAR_2)) {
  FUNC_1(VAR_4);
  if (VAR_5 & VAR_3)
   FUNC_0(VAR_4, &VAR_6->band_24, VAR_5);
 }

 if (VAR_5 & VAR_1) {
  FUNC_2(VAR_4);
  if (VAR_5 & VAR_3)
   FUNC_0(VAR_4, &VAR_6->band_50, VAR_5);
 }

 VAR_6->caps = VAR_5;
}
