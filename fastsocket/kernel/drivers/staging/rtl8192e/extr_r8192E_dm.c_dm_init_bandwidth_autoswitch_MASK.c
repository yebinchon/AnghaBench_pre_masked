
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int bforced_tx20Mhz; int bautoswitch_enable; int threshold_40Mhzto20Mhz; int threshold_20Mhzto40Mhz; } ;
struct TYPE_3__ {TYPE_2__ bandwidth_auto_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device * VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->ieee80211->bandwidth_auto_switch.threshold_20Mhzto40Mhz = VAR_1;
 VAR_3->ieee80211->bandwidth_auto_switch.threshold_40Mhzto20Mhz = VAR_0;
 VAR_3->ieee80211->bandwidth_auto_switch.bforced_tx20Mhz = 0;
 VAR_3->ieee80211->bandwidth_auto_switch.bautoswitch_enable = 0;

}
