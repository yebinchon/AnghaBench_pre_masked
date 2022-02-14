
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {scalar_t__ ibss_manager; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;

int
FUNC_1(struct ieee80211_hw *VAR_1)
{
 struct il_priv *VAR_2 = VAR_1->priv;
 int VAR_3;

 FUNC_0("enter\n");

 VAR_3 = (VAR_2->ibss_manager == VAR_0);

 FUNC_0("leave ret %d\n", VAR_3);
 return VAR_3;
}
