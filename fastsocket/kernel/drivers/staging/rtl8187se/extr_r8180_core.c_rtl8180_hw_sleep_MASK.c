
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct r8180_priv {int ps_lock; TYPE_1__* ieee80211; int DozePeriodInPast2Sec; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int hw_sleep_wq; int wq; int hw_wakeup_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct net_device *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct r8180_priv *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7 = VAR_2;
 unsigned long VAR_8;

 FUNC_6(&VAR_6->ps_lock,VAR_8);




 VAR_5 -= FUNC_0(4+16+7);




 if(((VAR_5>=VAR_7)&& (VAR_5-VAR_7) <= FUNC_0(VAR_1))
  ||((VAR_7>VAR_5)&& (VAR_7-VAR_5) < FUNC_0(VAR_1))) {
  FUNC_7(&VAR_6->ps_lock,VAR_8);
  FUNC_3("too short to sleep\n");
  return;
 }

 {
  u32 VAR_9 = (VAR_5>VAR_7)?(VAR_5-VAR_7):(VAR_7-VAR_5);

  VAR_6->DozePeriodInPast2Sec += FUNC_2(VAR_9);

  FUNC_4(VAR_6->ieee80211->wq, &VAR_6->ieee80211->hw_wakeup_wq, VAR_9);
 }




 if(((VAR_5 > VAR_7) && ((VAR_5-VAR_7) > FUNC_0(VAR_0)))||
  ((VAR_5 < VAR_7) && ((VAR_7-VAR_5) > FUNC_0(VAR_0)))) {
  FUNC_7(&VAR_6->ps_lock,VAR_8);
  return;
 }

 FUNC_5(VAR_6->ieee80211->wq, (void *)&VAR_6->ieee80211->hw_sleep_wq);
 FUNC_7(&VAR_6->ps_lock,VAR_8);
}
