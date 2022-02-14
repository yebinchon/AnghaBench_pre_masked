
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct pci_bus {int dummy; } ;
struct TYPE_2__ {int hotplug_lock; scalar_t__ hotplug_slot; scalar_t__ wlan_rfkill; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_bus* FUNC_6 (int ,int) ;
 struct pci_dev* FUNC_7 (struct pci_bus*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 struct pci_dev* FUNC_9 (struct pci_bus*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_13(void)
{
 struct pci_dev *VAR_1;
 struct pci_bus *VAR_2;
 bool VAR_3 = FUNC_0();

 if (VAR_0->wlan_rfkill)
  FUNC_12(VAR_0->wlan_rfkill, VAR_3);

 FUNC_1(&VAR_0->hotplug_lock);

 if (VAR_0->hotplug_slot) {
  VAR_2 = FUNC_6(0, 1);
  if (!VAR_2) {
   FUNC_11("Unable to find PCI bus 1?\n");
   goto out_unlock;
  }

  if (!VAR_3) {
   VAR_1 = FUNC_7(VAR_2, 0);
   if (VAR_1) {

    FUNC_5(VAR_1);
    goto out_unlock;
   }
   VAR_1 = FUNC_9(VAR_2, 0);
   if (VAR_1) {
    FUNC_4(VAR_2);
    if (FUNC_3(VAR_1))
     FUNC_10("Unable to hotplug wifi\n");
   }
  } else {
   VAR_1 = FUNC_7(VAR_2, 0);
   if (VAR_1) {
    FUNC_8(VAR_1);
    FUNC_5(VAR_1);
   }
  }
 }

out_unlock:
 FUNC_2(&VAR_0->hotplug_lock);
}
