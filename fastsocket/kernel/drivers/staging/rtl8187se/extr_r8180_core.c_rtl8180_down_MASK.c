
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8180_priv {scalar_t__ up; TYPE_1__* ieee80211; int SwAntennaDiversityTimer; int rateadapter_timer; int watch_dog_timer; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int dummy; } ;
struct TYPE_2__ {int state; int current_network; int tx_pw_wq; int hw_dig_wq; int hw_sleep_wq; int hw_wakeup_wq; int rate_adapter_wq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct r8180_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_2)
{
 struct r8180_priv *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->up == 0)
  return -1;

 VAR_3->up=0;

 FUNC_4(VAR_3->ieee80211);

 if (!FUNC_6(VAR_2))
  FUNC_7(VAR_2);
 FUNC_9(VAR_2);
 FUNC_8(VAR_2);
 FUNC_2(&VAR_3->watch_dog_timer);
 FUNC_2(&VAR_3->rateadapter_timer);
 FUNC_1(&VAR_3->ieee80211->rate_adapter_wq);
 FUNC_1(&VAR_3->ieee80211->hw_wakeup_wq);
 FUNC_1(&VAR_3->ieee80211->hw_sleep_wq);
 FUNC_1(&VAR_3->ieee80211->hw_dig_wq);
 FUNC_1(&VAR_3->ieee80211->tx_pw_wq);
 FUNC_2(&VAR_3->SwAntennaDiversityTimer);
 FUNC_0(VAR_2,VAR_1);
 FUNC_5(&(VAR_3->ieee80211->current_network),0,sizeof(struct ieee80211_network));
 VAR_3->ieee80211->state = VAR_0;
 return 0;
}
