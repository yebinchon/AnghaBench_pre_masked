
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {scalar_t__ CurrentChannelBW; scalar_t__ undecorated_smoothed_pwdb; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int bforced_tx20Mhz; scalar_t__ threshold_40Mhzto20Mhz; scalar_t__ threshold_20Mhzto40Mhz; int bautoswitch_enable; } ;
struct TYPE_4__ {TYPE_1__ bandwidth_auto_switch; } ;


 scalar_t__ VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device * VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0(VAR_1);

 if(VAR_2->CurrentChannelBW == VAR_0 ||!VAR_2->ieee80211->bandwidth_auto_switch.bautoswitch_enable){
  return;
 }else{
  if(VAR_2->ieee80211->bandwidth_auto_switch.bforced_tx20Mhz == 0){
   if(VAR_2->undecorated_smoothed_pwdb <= VAR_2->ieee80211->bandwidth_auto_switch.threshold_40Mhzto20Mhz)
    VAR_2->ieee80211->bandwidth_auto_switch.bforced_tx20Mhz = 1;
  }else{
   if(VAR_2->undecorated_smoothed_pwdb >= VAR_2->ieee80211->bandwidth_auto_switch.threshold_20Mhzto40Mhz)
    VAR_2->ieee80211->bandwidth_auto_switch.bforced_tx20Mhz = 0;

  }
 }
}
