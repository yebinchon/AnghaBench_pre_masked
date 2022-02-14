
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slot {int power_domain; } ;
struct hotplug_slot {scalar_t__ private; } ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct hotplug_slot *VAR_0, u8 * VAR_1)
{
 int VAR_2, VAR_3;
 struct slot *VAR_4 = (struct slot *)VAR_0->private;

 VAR_2 = FUNC_0 (VAR_4->power_domain, &VAR_3);
 if (!VAR_2)
  *VAR_1 = VAR_3;
 return VAR_2;
}
