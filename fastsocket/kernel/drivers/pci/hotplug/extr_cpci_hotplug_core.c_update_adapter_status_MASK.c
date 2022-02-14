
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hotplug_slot_info {int adapter_status; } ;
struct hotplug_slot {int info; } ;


 int FUNC_0 (struct hotplug_slot_info*,int ,int) ;
 int FUNC_1 (struct hotplug_slot*,struct hotplug_slot_info*) ;

__attribute__((used)) static int
FUNC_2(struct hotplug_slot *VAR_0, u8 VAR_1)
{
 struct hotplug_slot_info VAR_2;

 FUNC_0(&VAR_2, VAR_0->info, sizeof(struct hotplug_slot_info));
 VAR_2.adapter_status = VAR_1;
 return FUNC_1(VAR_0, &VAR_2);
}
