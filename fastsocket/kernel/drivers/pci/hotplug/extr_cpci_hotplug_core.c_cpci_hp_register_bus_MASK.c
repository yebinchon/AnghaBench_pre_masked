
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {int number; int slot_list; struct slot* hotplug_slot; int attention_status; int power_status; int * ops; int * release; struct slot* private; int devfn; struct pci_bus* bus; struct slot* info; } ;
struct pci_bus {int number; } ;
struct hotplug_slot_info {int number; int slot_list; struct hotplug_slot_info* hotplug_slot; int attention_status; int power_status; int * ops; int * release; struct hotplug_slot_info* private; int devfn; struct pci_bus* bus; struct hotplug_slot_info* info; } ;
struct hotplug_slot {int number; int slot_list; struct hotplug_slot* hotplug_slot; int attention_status; int power_status; int * ops; int * release; struct hotplug_slot* private; int devfn; struct pci_bus* bus; struct hotplug_slot* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct slot*) ;
 int FUNC_2 (struct slot*) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct slot*) ;
 struct slot* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int VAR_6 ;
 int FUNC_9 (struct slot*,struct pci_bus*,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_10 (struct slot*) ;
 int VAR_9 ;
 int FUNC_11 (char*,int,char*,int,int) ;
 int FUNC_12 (int *) ;

int
FUNC_13(struct pci_bus *VAR_10, u8 VAR_11, u8 VAR_12)
{
 struct slot *VAR_13;
 struct hotplug_slot *VAR_14;
 struct hotplug_slot_info *VAR_15;
 char VAR_16[VAR_3];
 int VAR_17 = -VAR_1;
 int VAR_18;

 if (!(VAR_4 && VAR_10))
  return -VAR_0;





 for (VAR_18 = VAR_11; VAR_18 <= VAR_12; ++VAR_18) {
  VAR_13 = FUNC_7(sizeof (struct slot), VAR_2);
  if (!VAR_13)
   goto error;

  VAR_14 =
   FUNC_7(sizeof (struct hotplug_slot), VAR_2);
  if (!VAR_14)
   goto error_slot;
  VAR_13->hotplug_slot = VAR_14;

  VAR_15 = FUNC_7(sizeof (struct hotplug_slot_info), VAR_2);
  if (!VAR_15)
   goto error_hpslot;
  VAR_14->info = VAR_15;

  VAR_13->bus = VAR_10;
  VAR_13->number = VAR_18;
  VAR_13->devfn = FUNC_0(VAR_18, 0);

  FUNC_11(VAR_16, VAR_3, "%02x:%02x", VAR_10->number, VAR_18);

  VAR_14->private = VAR_13;
  VAR_14->release = &VAR_7;
  VAR_14->ops = &VAR_5;





  FUNC_3("initializing slot %s", VAR_16);
  VAR_15->power_status = FUNC_2(VAR_13);
  VAR_15->attention_status = FUNC_1(VAR_13);

  FUNC_3("registering slot %s", VAR_16);
  VAR_17 = FUNC_9(VAR_13->hotplug_slot, VAR_10, VAR_18, VAR_16);
  if (VAR_17) {
   FUNC_5("pci_hp_register failed with error %d", VAR_17);
   goto error_info;
  }
  FUNC_3("slot registered with name: %s", FUNC_10(VAR_13));


  FUNC_4(&VAR_6);
  FUNC_8(&VAR_13->slot_list, &VAR_8);
  VAR_9++;
  FUNC_12(&VAR_6);
 }
 return 0;
error_info:
 FUNC_6(VAR_15);
error_hpslot:
 FUNC_6(VAR_14);
error_slot:
 FUNC_6(VAR_13);
error:
 return VAR_17;
}
