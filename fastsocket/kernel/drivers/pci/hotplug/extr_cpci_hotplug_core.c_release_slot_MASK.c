
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {scalar_t__ dev; struct slot* hotplug_slot; struct slot* info; } ;
struct hotplug_slot {struct slot* private; } ;


 int FUNC_0 (struct slot*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hotplug_slot *VAR_0)
{
 struct slot *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1->hotplug_slot->info);
 FUNC_0(VAR_1->hotplug_slot);
 if (VAR_1->dev)
  FUNC_1(VAR_1->dev);
 FUNC_0(VAR_1);
}
