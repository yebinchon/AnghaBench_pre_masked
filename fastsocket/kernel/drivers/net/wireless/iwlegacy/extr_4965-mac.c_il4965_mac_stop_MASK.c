
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int workqueue; scalar_t__ is_open; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;

void
FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct il_priv *VAR_2 = VAR_1->priv;

 FUNC_0("enter\n");

 if (!VAR_2->is_open)
  return;

 VAR_2->is_open = 0;

 FUNC_3(VAR_2);

 FUNC_2(VAR_2->workqueue);



 FUNC_1(VAR_2, VAR_0, 0xFFFFFFFF);
 FUNC_4(VAR_2);

 FUNC_0("leave\n");
}
