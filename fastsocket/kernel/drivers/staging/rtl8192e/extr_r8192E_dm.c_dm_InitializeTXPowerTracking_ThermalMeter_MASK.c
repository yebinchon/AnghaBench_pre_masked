
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {void* btxpower_trackingInit; scalar_t__ txpower_count; void* btxpower_tracking; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ FwRWRF; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);




 if(VAR_3->ieee80211->FwRWRF)
  VAR_3->btxpower_tracking = VAR_1;
 else
  VAR_3->btxpower_tracking = VAR_0;
 VAR_3->txpower_count = 0;
 VAR_3->btxpower_trackingInit = VAR_0;
}
