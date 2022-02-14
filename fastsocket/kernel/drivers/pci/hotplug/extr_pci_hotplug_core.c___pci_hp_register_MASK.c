
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_slot {int kobj; struct hotplug_slot* hotplug; } ;
struct pci_bus {int dummy; } ;
struct module {int dummy; } ;
struct hotplug_slot {int slot_list; struct pci_slot* pci_slot; TYPE_1__* ops; int * release; int * info; } ;
struct TYPE_2__ {char const* mod_name; struct module* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_slot*) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_slot*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct pci_slot*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct pci_slot* FUNC_8 (struct pci_bus*,int,char const*,struct hotplug_slot*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_9(struct hotplug_slot *VAR_5, struct pci_bus *VAR_6,
        int VAR_7, const char *VAR_8,
        struct module *VAR_9, const char *VAR_10)
{
 int VAR_11;
 struct pci_slot *VAR_12;

 if (VAR_5 == ((void*)0))
  return -VAR_1;
 if ((VAR_5->info == ((void*)0)) || (VAR_5->ops == ((void*)0)))
  return -VAR_0;
 if (VAR_5->release == ((void*)0)) {
  FUNC_2("Why are you trying to register a hotplug slot "
      "without a proper release function?\n");
  return -VAR_0;
 }

 VAR_5->ops->owner = VAR_9;
 VAR_5->ops->mod_name = VAR_10;

 FUNC_6(&VAR_4);





 VAR_12 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_5);
 if (FUNC_0(VAR_12)) {
  VAR_11 = FUNC_1(VAR_12);
  goto out;
 }

 VAR_5->pci_slot = VAR_12;
 VAR_12->hotplug = VAR_5;

 FUNC_5(&VAR_5->slot_list, &VAR_3);

 VAR_11 = FUNC_3(VAR_12);
 FUNC_4(&VAR_12->kobj, VAR_2);
 FUNC_2("Added slot %s to the list\n", VAR_8);
out:
 FUNC_7(&VAR_4);
 return VAR_11;
}
