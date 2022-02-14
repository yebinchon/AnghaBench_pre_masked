
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct r8180_priv {scalar_t__ ForcedDataRate; TYPE_2__ rateadapter_timer; int RateAdaptivePeriod; TYPE_1__* ieee80211; int up; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ iw_mode; scalar_t__ state; int rate_adapter_wq; int wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,void*) ;

void FUNC_4(unsigned long VAR_3)
{
 struct r8180_priv* VAR_4 = FUNC_2((struct net_device *)VAR_3);

 if(!VAR_4->up)
 {

  return;
 }
 if((VAR_4->ieee80211->iw_mode != VAR_1)
   && (VAR_4->ieee80211->state == VAR_0) &&
   (VAR_4->ForcedDataRate == 0) )
 {

  FUNC_3(VAR_4->ieee80211->wq, (void *)&VAR_4->ieee80211->rate_adapter_wq);

 }
 VAR_4->rateadapter_timer.expires = VAR_2 + FUNC_0(VAR_4->RateAdaptivePeriod);
 FUNC_1(&VAR_4->rateadapter_timer);

}
