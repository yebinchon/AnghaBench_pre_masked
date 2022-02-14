
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {scalar_t__ up; TYPE_1__* ieee80211; int SwAntennaDiversityTimer; int rateadapter_timer; int watch_dog_timer; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_pw_wq; int hw_dig_wq; int hw_sleep_wq; int hw_wakeup_wq; int rate_adapter_wq; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct r8180_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

void FUNC_7(struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->up == 0)
  return ;

 FUNC_2(&VAR_1->watch_dog_timer);
 FUNC_2(&VAR_1->rateadapter_timer);
 FUNC_1(&VAR_1->ieee80211->rate_adapter_wq);
 FUNC_1(&VAR_1->ieee80211->hw_wakeup_wq);
 FUNC_1(&VAR_1->ieee80211->hw_sleep_wq);
 FUNC_1(&VAR_1->ieee80211->hw_dig_wq);
 FUNC_1(&VAR_1->ieee80211->tx_pw_wq);
 FUNC_2(&VAR_1->SwAntennaDiversityTimer);
 FUNC_4(VAR_1->ieee80211);
 FUNC_5(VAR_0);
 FUNC_6(VAR_0);
 FUNC_0(VAR_0);
}
