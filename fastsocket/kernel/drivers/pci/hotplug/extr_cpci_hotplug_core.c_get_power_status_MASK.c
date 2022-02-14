
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {int dummy; } ;
struct hotplug_slot {struct slot* private; } ;


 int FUNC_0 (struct slot*) ;

__attribute__((used)) static int
FUNC_1(struct hotplug_slot *VAR_0, u8 * VAR_1)
{
 struct slot *VAR_2 = VAR_0->private;

 *VAR_1 = FUNC_0(VAR_2);
 return 0;
}
