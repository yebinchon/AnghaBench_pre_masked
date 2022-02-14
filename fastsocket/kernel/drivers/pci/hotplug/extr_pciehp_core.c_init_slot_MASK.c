
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct slot {struct hotplug_slot_info* hotplug_slot; } ;
struct hotplug_slot_info {int adapter_status; int latch_status; int attention_status; int power_status; int * ops; int * release; struct slot* private; struct hotplug_slot_info* info; } ;
struct hotplug_slot {int adapter_status; int latch_status; int attention_status; int power_status; int * ops; int * release; struct slot* private; struct hotplug_slot* info; } ;
struct controller {TYPE_2__* pcie; struct slot* slot; } ;
struct TYPE_7__ {int number; } ;
struct TYPE_6__ {TYPE_1__* port; } ;
struct TYPE_5__ {TYPE_3__* subordinate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*) ;
 int VAR_2 ;
 int FUNC_1 (struct controller*,char*,int ,int ,int) ;
 int FUNC_2 (struct controller*,char*,int) ;
 int FUNC_3 (struct hotplug_slot_info*,int *) ;
 int FUNC_4 (struct hotplug_slot_info*,int *) ;
 int FUNC_5 (struct hotplug_slot_info*,int *) ;
 int FUNC_6 (struct hotplug_slot_info*,int *) ;
 int FUNC_7 (struct hotplug_slot_info*) ;
 struct hotplug_slot_info* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct hotplug_slot_info*,TYPE_3__*,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_12(struct controller *VAR_5)
{
 struct slot *VAR_6 = VAR_5->slot;
 struct hotplug_slot *VAR_7 = ((void*)0);
 struct hotplug_slot_info *VAR_8 = ((void*)0);
 char VAR_9[VAR_2];
 int VAR_10 = -VAR_0;

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  goto out;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  goto out;


 VAR_7->info = VAR_8;
 VAR_7->private = VAR_6;
 VAR_7->release = &VAR_4;
 VAR_7->ops = &VAR_3;
 VAR_6->hotplug_slot = VAR_7;
 FUNC_11(VAR_9, VAR_2, "%u", FUNC_0(VAR_5));

 FUNC_1(VAR_5, "Registering domain:bus:dev=%04x:%02x:00 sun=%x\n",
   FUNC_9(VAR_5->pcie->port->subordinate),
   VAR_5->pcie->port->subordinate->number, FUNC_0(VAR_5));
 VAR_10 = FUNC_10(VAR_7,
     VAR_5->pcie->port->subordinate, 0, VAR_9);
 if (VAR_10) {
  FUNC_2(VAR_5,
    "pci_hp_register failed with error %d\n", VAR_10);
  goto out;
 }
 FUNC_6(VAR_7, &VAR_8->power_status);
 FUNC_4(VAR_7, &VAR_8->attention_status);
 FUNC_5(VAR_7, &VAR_8->latch_status);
 FUNC_3(VAR_7, &VAR_8->adapter_status);
out:
 if (VAR_10) {
  FUNC_7(VAR_8);
  FUNC_7(VAR_7);
 }
 return VAR_10;
}
