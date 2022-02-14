
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_slot {int * hotplug; } ;
struct hotplug_slot {int (* release ) (struct hotplug_slot*) ;struct pci_slot* pci_slot; int slot_list; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct pci_slot*) ;
 struct hotplug_slot* FUNC_2 (int ) ;
 int FUNC_3 (struct hotplug_slot*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_slot*) ;
 int VAR_1 ;
 int FUNC_8 (struct hotplug_slot*) ;

int FUNC_9(struct hotplug_slot *VAR_2)
{
 struct hotplug_slot *VAR_3;
 struct pci_slot *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 FUNC_5(&VAR_1);
 VAR_3 = FUNC_2(FUNC_3(VAR_2));
 if (VAR_3 != VAR_2) {
  FUNC_6(&VAR_1);
  return -VAR_0;
 }

 FUNC_4(&VAR_2->slot_list);

 VAR_4 = VAR_2->pci_slot;
 FUNC_1(VAR_4);
 FUNC_0("Removed slot %s from the list\n", FUNC_3(VAR_2));

 VAR_2->release(VAR_2);
 VAR_4->hotplug = ((void*)0);
 FUNC_7(VAR_4);
 FUNC_6(&VAR_1);

 return 0;
}
