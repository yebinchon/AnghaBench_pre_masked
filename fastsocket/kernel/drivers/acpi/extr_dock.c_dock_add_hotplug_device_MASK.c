
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int hp_lock; int hotplug_devices; } ;
struct dock_dependent_device {int hotplug_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct dock_station *VAR_0,
   struct dock_dependent_device *VAR_1)
{
 FUNC_1(&VAR_0->hp_lock);
 FUNC_0(&VAR_1->hotplug_list, &VAR_0->hotplug_devices);
 FUNC_2(&VAR_0->hp_lock);
}
