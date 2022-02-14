
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_bus {int dummy; } ;
struct hotplug_slot_info {int dummy; } ;
struct hotplug_slot {int dummy; } ;
struct TYPE_6__ {TYPE_1__* hotplug_slot; } ;
struct TYPE_5__ {struct TYPE_5__* info; int adapter_status; int * ops; int * release; TYPE_3__* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int,int ) ;
 struct pci_bus* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,struct pci_bus*,int ,char*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_6 = -VAR_1;
 struct pci_bus *VAR_7 = FUNC_3(0, 1);

 if (!VAR_7) {
  FUNC_5("Unable to find wifi PCI bus\n");
  return -VAR_0;
 }

 VAR_5->hotplug_slot = FUNC_2(sizeof(struct hotplug_slot), VAR_2);
 if (!VAR_5->hotplug_slot)
  goto error_slot;

 VAR_5->hotplug_slot->info = FUNC_2(sizeof(struct hotplug_slot_info),
         VAR_2);
 if (!VAR_5->hotplug_slot->info)
  goto error_info;

 VAR_5->hotplug_slot->private = VAR_5;
 VAR_5->hotplug_slot->release = &VAR_3;
 VAR_5->hotplug_slot->ops = &VAR_4;
 FUNC_0(VAR_5->hotplug_slot,
     &VAR_5->hotplug_slot->info->adapter_status);

 VAR_6 = FUNC_4(VAR_5->hotplug_slot, VAR_7, 0, "eeepc-wifi");
 if (VAR_6) {
  FUNC_5("Unable to register hotplug slot - %d\n", VAR_6);
  goto error_register;
 }

 return 0;

error_register:
 FUNC_1(VAR_5->hotplug_slot->info);
error_info:
 FUNC_1(VAR_5->hotplug_slot);
 VAR_5->hotplug_slot = ((void*)0);
error_slot:
 return VAR_6;
}
