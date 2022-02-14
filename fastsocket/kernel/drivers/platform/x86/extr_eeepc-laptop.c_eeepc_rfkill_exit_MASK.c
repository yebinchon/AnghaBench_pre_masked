
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wimax_rfkill; int * wwan3g_rfkill; int * bluetooth_rfkill; scalar_t__ hotplug_slot; int * wlan_rfkill; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
 FUNC_1("\\_SB.PCI0.P0P5");
 FUNC_1("\\_SB.PCI0.P0P6");
 FUNC_1("\\_SB.PCI0.P0P7");
 if (VAR_0->wlan_rfkill) {
  FUNC_4(VAR_0->wlan_rfkill);
  FUNC_3(VAR_0->wlan_rfkill);
  VAR_0->wlan_rfkill = ((void*)0);
 }




 FUNC_0();
 if (VAR_0->hotplug_slot)
  FUNC_2(VAR_0->hotplug_slot);

 if (VAR_0->bluetooth_rfkill) {
  FUNC_4(VAR_0->bluetooth_rfkill);
  FUNC_3(VAR_0->bluetooth_rfkill);
  VAR_0->bluetooth_rfkill = ((void*)0);
 }
 if (VAR_0->wwan3g_rfkill) {
  FUNC_4(VAR_0->wwan3g_rfkill);
  FUNC_3(VAR_0->wwan3g_rfkill);
  VAR_0->wwan3g_rfkill = ((void*)0);
 }
 if (VAR_0->wimax_rfkill) {
  FUNC_4(VAR_0->wimax_rfkill);
  FUNC_3(VAR_0->wimax_rfkill);
  VAR_0->wimax_rfkill = ((void*)0);
 }
}
