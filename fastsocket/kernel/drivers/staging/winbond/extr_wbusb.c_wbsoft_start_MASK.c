
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsoft_priv {int enabled; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;



__attribute__((used)) static int FUNC_0(struct ieee80211_hw *VAR_0)
{
 struct wbsoft_priv *VAR_1 = VAR_0->priv;

 VAR_1->enabled = 1;

 return 0;
}
