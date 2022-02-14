
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hotplug_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hotplug_slot *VAR_2,
        u8 *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0);

 if (VAR_4 == 1 || VAR_4 == 0)
  *VAR_3 = VAR_4;
 else
  return -VAR_1;

 return 0;
}
