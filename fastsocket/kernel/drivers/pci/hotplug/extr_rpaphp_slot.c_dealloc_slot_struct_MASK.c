
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {struct slot* hotplug_slot; struct slot* name; struct slot* info; } ;


 int FUNC_0 (struct slot*) ;

void FUNC_1(struct slot *VAR_0)
{
 FUNC_0(VAR_0->hotplug_slot->info);
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->hotplug_slot);
 FUNC_0(VAR_0);
}
