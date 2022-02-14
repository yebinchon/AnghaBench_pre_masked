
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ rate_adaptive_disabled; int last_ratr; } ;
struct r8192_priv {scalar_t__ rf_type; scalar_t__ btxpower_tracking; scalar_t__ btxpower_trackingInit; TYPE_1__* ieee80211; TYPE_2__ rate_adaptive; int up; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int) ;
 int FUNC_5 (struct net_device*,int ,int ) ;

void FUNC_6(struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9 = VAR_8->rate_adaptive.last_ratr;

 if(!VAR_8->up)
 {
  FUNC_0(VAR_0, "<---- dm_restore_dynamic_mechanism_state(): driver is going to unload\n");
  return;
 }




 if(VAR_8->rate_adaptive.rate_adaptive_disabled)
  return;

 if( !(VAR_8->ieee80211->mode==VAR_5 ||
   VAR_8->ieee80211->mode==VAR_6))
   return;
 {

   u32 VAR_10;
   VAR_10 = VAR_9;
   if(VAR_8->rf_type == VAR_3)
   {
    VAR_10 &=~ (VAR_1);

   }


   FUNC_5(VAR_7, VAR_2, VAR_10);
   FUNC_4(VAR_7, VAR_4, 1);
 }

 if(VAR_8->btxpower_trackingInit && VAR_8->btxpower_tracking){
  FUNC_2(VAR_7);
 }




 FUNC_1(VAR_7);

}
