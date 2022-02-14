
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54u_priv {int submitted; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0)
{
 struct p54u_priv *VAR_1 = VAR_0->priv;
 FUNC_0(&VAR_1->submitted);
}
