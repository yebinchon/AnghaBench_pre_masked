
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct slot {int hp_slot; int number; int slot_list; int adapter_status; int latch_status; int attention_status; int power_status; scalar_t__ device; struct slot* hotplug_slot; int bus; int * ops; int * release; struct slot* private; int work; int lock; int hpc_ops; struct controller* ctrl; struct slot* info; } ;
struct hotplug_slot_info {int hp_slot; int number; int slot_list; int adapter_status; int latch_status; int attention_status; int power_status; scalar_t__ device; struct hotplug_slot_info* hotplug_slot; int bus; int * ops; int * release; struct hotplug_slot_info* private; int work; int lock; int hpc_ops; struct controller* ctrl; struct hotplug_slot_info* info; } ;
struct hotplug_slot {int hp_slot; int number; int slot_list; int adapter_status; int latch_status; int attention_status; int power_status; scalar_t__ device; struct hotplug_slot* hotplug_slot; int bus; int * ops; int * release; struct hotplug_slot* private; int work; int lock; int hpc_ops; struct controller* ctrl; struct hotplug_slot* info; } ;
struct controller {int num_slots; int first_slot; int slot_num_inc; int slot_list; TYPE_1__* pci_dev; int slot_device_offset; int hpc_ops; } ;
struct TYPE_5__ {int number; } ;
struct TYPE_4__ {TYPE_2__* subordinate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct controller*,char*,int ,int ,scalar_t__,int,int,int ) ;
 int FUNC_2 (struct controller*,char*,int) ;
 int FUNC_3 (struct slot*,int *) ;
 int FUNC_4 (struct slot*,int *) ;
 int FUNC_5 (struct slot*,int *) ;
 int FUNC_6 (struct slot*,int *) ;
 int FUNC_7 (struct slot*) ;
 struct slot* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (struct slot*,TYPE_2__*,scalar_t__,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_14(struct controller *VAR_6)
{
 struct slot *VAR_7;
 struct hotplug_slot *VAR_8;
 struct hotplug_slot_info *VAR_9;
 char VAR_10[VAR_2];
 int VAR_11 = -VAR_0;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_6->num_slots; VAR_12++) {
  VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   goto error;

  VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   goto error_slot;
  VAR_7->hotplug_slot = VAR_8;

  VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1);
  if (!VAR_9)
   goto error_hpslot;
  VAR_8->info = VAR_9;

  VAR_7->hp_slot = VAR_12;
  VAR_7->ctrl = VAR_6;
  VAR_7->bus = VAR_6->pci_dev->subordinate->number;
  VAR_7->device = VAR_6->slot_device_offset + VAR_12;
  VAR_7->hpc_ops = VAR_6->hpc_ops;
  VAR_7->number = VAR_6->first_slot + (VAR_6->slot_num_inc * VAR_12);
  FUNC_10(&VAR_7->lock);
  FUNC_0(&VAR_7->work, VAR_5);


  VAR_8->private = VAR_7;
  VAR_8->release = &VAR_3;
  FUNC_13(VAR_10, VAR_2, "%d", VAR_7->number);
  VAR_8->ops = &VAR_4;

   FUNC_1(VAR_6, "Registering domain:bus:dev=%04x:%02x:%02x "
     "hp_slot=%x sun=%x slot_device_offset=%x\n",
     FUNC_11(VAR_6->pci_dev->subordinate),
     VAR_7->bus, VAR_7->device, VAR_7->hp_slot, VAR_7->number,
     VAR_6->slot_device_offset);
  VAR_11 = FUNC_12(VAR_7->hotplug_slot,
    VAR_6->pci_dev->subordinate, VAR_7->device, VAR_10);
  if (VAR_11) {
   FUNC_2(VAR_6, "pci_hp_register failed with error %d\n",
     VAR_11);
   goto error_info;
  }

  FUNC_6(VAR_8, &VAR_9->power_status);
  FUNC_4(VAR_8, &VAR_9->attention_status);
  FUNC_5(VAR_8, &VAR_9->latch_status);
  FUNC_3(VAR_8, &VAR_9->adapter_status);

  FUNC_9(&VAR_7->slot_list, &VAR_6->slot_list);
 }

 return 0;
error_info:
 FUNC_7(VAR_9);
error_hpslot:
 FUNC_7(VAR_8);
error_slot:
 FUNC_7(VAR_7);
error:
 return VAR_11;
}
