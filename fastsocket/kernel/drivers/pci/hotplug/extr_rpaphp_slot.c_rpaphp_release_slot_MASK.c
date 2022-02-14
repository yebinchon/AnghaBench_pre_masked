
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int dummy; } ;
struct hotplug_slot {scalar_t__ private; } ;


 int FUNC_0 (struct slot*) ;

__attribute__((used)) static void FUNC_1(struct hotplug_slot *VAR_0)
{
 struct slot *VAR_1 = (struct slot *) VAR_0->private;
 FUNC_0(VAR_1);
}
