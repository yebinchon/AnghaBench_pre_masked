
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slot {int physical_path; TYPE_2__* pci_bus; } ;
struct pcibus_info {int pbi_enabled_devices; } ;
struct pcibr_slot_disable_resp {int resp_sub_errno; int resp_l1_msg; } ;
struct hotplug_slot {struct slot* private; } ;
struct TYPE_4__ {TYPE_1__* self; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pcibus_info* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct pcibus_info*,int,int,struct pcibr_slot_disable_resp*) ;

__attribute__((used)) static int FUNC_3(struct hotplug_slot *VAR_7,
      int VAR_8, int VAR_9)
{
 struct slot *VAR_10 = VAR_7->private;
 struct pcibus_info *VAR_11;
 struct pcibr_slot_disable_resp VAR_12;
 int VAR_13;

 VAR_11 = FUNC_0(VAR_10->pci_bus);

 VAR_13 = FUNC_2(VAR_11, VAR_8, VAR_9, &VAR_12);

 if ((VAR_9 == VAR_5) &&
     (VAR_13 == VAR_6)) {
  FUNC_1(&VAR_10->pci_bus->self->dev, "Slot %s already inactive\n", VAR_10->physical_path);
  return 1;
 }

 if ((VAR_9 == VAR_5) && (VAR_13 == VAR_2)) {
  FUNC_1(&VAR_10->pci_bus->self->dev,
   "Cannot remove last 33MHz card\n");
  return -VAR_1;
 }

 if ((VAR_9 == VAR_5) && (VAR_13 == VAR_3)) {
  FUNC_1(&VAR_10->pci_bus->self->dev,
   "L1 failure %d with message \n%s\n",
   VAR_12.resp_sub_errno, VAR_12.resp_l1_msg);
  return -VAR_1;
 }

 if ((VAR_9 == VAR_5) && VAR_13) {
  FUNC_1(&VAR_10->pci_bus->self->dev,
   "remove failed with error %d sub-error %d\n",
   VAR_13, VAR_12.resp_sub_errno);
  return -VAR_0;
 }

 if ((VAR_9 == VAR_5) && !VAR_13)
  return 0;

 if ((VAR_9 == VAR_4) && !VAR_13) {
  VAR_11 = FUNC_0(VAR_10->pci_bus);
  VAR_11->pbi_enabled_devices &= ~(1 << VAR_8);
  FUNC_1(&VAR_10->pci_bus->self->dev, "remove successful\n");
  return 0;
 }

 if ((VAR_9 == VAR_4) && VAR_13) {
  FUNC_1(&VAR_10->pci_bus->self->dev,"remove failed rc = %d\n", VAR_13);
 }

 return VAR_13;
}
