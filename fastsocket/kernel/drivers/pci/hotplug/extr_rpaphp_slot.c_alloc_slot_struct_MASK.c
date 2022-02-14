
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int index; int power_domain; struct slot* hotplug_slot; struct slot* info; int * release; int * ops; struct slot* private; struct device_node* dn; int name; } ;
struct hotplug_slot_info {int dummy; } ;
struct hotplug_slot {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct slot*) ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

struct slot *FUNC_3(struct device_node *VAR_3,
                       int VAR_4, char *VAR_5, int VAR_6)
{
 struct slot *VAR_7;

 VAR_7 = FUNC_2(sizeof(struct slot), VAR_0);
 if (!VAR_7)
  goto error_nomem;
 VAR_7->hotplug_slot = FUNC_2(sizeof(struct hotplug_slot), VAR_0);
 if (!VAR_7->hotplug_slot)
  goto error_slot;
 VAR_7->hotplug_slot->info = FUNC_2(sizeof(struct hotplug_slot_info),
        VAR_0);
 if (!VAR_7->hotplug_slot->info)
  goto error_hpslot;
 VAR_7->name = FUNC_1(VAR_5, VAR_0);
 if (!VAR_7->name)
  goto error_info;
 VAR_7->dn = VAR_3;
 VAR_7->index = VAR_4;
 VAR_7->power_domain = VAR_6;
 VAR_7->hotplug_slot->private = VAR_7;
 VAR_7->hotplug_slot->ops = &VAR_1;
 VAR_7->hotplug_slot->release = &VAR_2;

 return (VAR_7);

error_info:
 FUNC_0(VAR_7->hotplug_slot->info);
error_hpslot:
 FUNC_0(VAR_7->hotplug_slot);
error_slot:
 FUNC_0(VAR_7);
error_nomem:
 return ((void*)0);
}
