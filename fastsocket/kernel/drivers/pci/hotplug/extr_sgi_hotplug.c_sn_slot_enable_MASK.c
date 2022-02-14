
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slot {TYPE_2__* pci_bus; } ;
struct pcibus_info {int pbi_enabled_devices; } ;
struct pcibr_slot_enable_resp {int resp_sub_errno; int resp_l1_msg; } ;
struct hotplug_slot {struct slot* private; } ;
struct TYPE_4__ {TYPE_1__* self; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcibus_info* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct pcibus_info*,int,struct pcibr_slot_enable_resp*,char**) ;

__attribute__((used)) static int FUNC_3(struct hotplug_slot *VAR_4,
     int VAR_5, char **VAR_6)
{
 struct slot *VAR_7 = VAR_4->private;
 struct pcibus_info *VAR_8;
 struct pcibr_slot_enable_resp VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_7->pci_bus);





 VAR_10 = FUNC_2(VAR_8, VAR_5, &VAR_9, VAR_6);


 if (VAR_10 == VAR_3) {
  FUNC_1(&VAR_7->pci_bus->self->dev, "is already active\n");
  return 1;
 }

 if (VAR_10 == VAR_2) {
  FUNC_1(&VAR_7->pci_bus->self->dev,
   "L1 failure %d with message: %s",
   VAR_9.resp_sub_errno, VAR_9.resp_l1_msg);
  return -VAR_1;
 }

 if (VAR_10) {
  FUNC_1(&VAR_7->pci_bus->self->dev,
   "insert failed with error %d sub-error %d\n",
   VAR_10, VAR_9.resp_sub_errno);
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_7->pci_bus);
 VAR_8->pbi_enabled_devices |= (1 << VAR_5);

 return 0;
}
