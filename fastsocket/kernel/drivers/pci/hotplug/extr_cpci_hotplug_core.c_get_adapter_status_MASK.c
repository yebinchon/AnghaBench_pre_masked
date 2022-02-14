
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hotplug_slot {TYPE_1__* info; } ;
struct TYPE_2__ {int adapter_status; } ;



__attribute__((used)) static int
FUNC_0(struct hotplug_slot *VAR_0, u8 * VAR_1)
{
 *VAR_1 = VAR_0->info->adapter_status;
 return 0;
}
