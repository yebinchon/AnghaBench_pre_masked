
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct slot {int device_num; int hp_list; struct hotplug_slot* hotplug_slot; int physical_path; struct pci_bus* pci_bus; } ;
struct TYPE_2__ {scalar_t__ bs_persist_busnum; } ;
struct pcibus_info {TYPE_1__ pbi_buscommon; } ;
struct pci_bus {int dummy; } ;
struct hotplug_slot {struct slot* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcibus_info* FUNC_0 (struct pci_bus*) ;
 struct slot* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_bus*,int ) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct hotplug_slot *VAR_3,
        struct pci_bus *VAR_4, int VAR_5,
        char *VAR_6)
{
 struct pcibus_info *VAR_7;
 struct slot *VAR_8;

 VAR_7 = FUNC_0(VAR_4);

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_3->private = VAR_8;

 VAR_8->device_num = VAR_5;
 VAR_8->pci_bus = VAR_4;
 FUNC_5(VAR_6, "%04x:%02x:%02x",
  FUNC_3(VAR_4),
  ((u16)VAR_7->pbi_buscommon.bs_persist_busnum),
  VAR_5 + 1);

 FUNC_4(VAR_4, VAR_8->physical_path);

 VAR_8->hotplug_slot = VAR_3;
 FUNC_2(&VAR_8->hp_list, &VAR_2);

 return 0;
}
