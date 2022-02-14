
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct r8180_priv {TYPE_2__ watch_dog_timer; TYPE_1__* ieee80211; int up; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int GPIOChangeRFWorkItem; int wq; int hw_dig_wq; int tx_pw_wq; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (TYPE_2__*) ;
 struct r8180_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (struct net_device*) ;

void FUNC_10(unsigned long VAR_2)
{
 struct r8180_priv* VAR_3 = FUNC_7((struct net_device *)VAR_2);

 if (!VAR_3->up) {
  FUNC_3("<----watch_dog_adaptive():driver is not up!\n");
  return;
 }
    FUNC_9((struct net_device *)VAR_2);

 FUNC_8(VAR_3->ieee80211->wq, (void *)&VAR_3->ieee80211->GPIOChangeRFWorkItem);

    VAR_3->watch_dog_timer.expires = VAR_1 + FUNC_4(VAR_0);
 FUNC_6(&VAR_3->watch_dog_timer);
}
