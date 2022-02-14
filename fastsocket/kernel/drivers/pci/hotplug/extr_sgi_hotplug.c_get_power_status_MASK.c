
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slot {int device_num; int pci_bus; } ;
struct pcibus_info {int pbi_enabled_devices; } ;
struct hotplug_slot {struct slot* private; } ;


 struct pcibus_info* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_3(struct hotplug_slot *VAR_1,
       u8 *VAR_2)
{
 struct slot *VAR_3 = VAR_1->private;
 struct pcibus_info *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3->pci_bus);
 FUNC_1(&VAR_0);
 VAR_5 = VAR_4->pbi_enabled_devices & (1 << VAR_3->device_num);
 *VAR_2 = VAR_5 ? 1 : 0;
 FUNC_2(&VAR_0);
 return 0;
}
