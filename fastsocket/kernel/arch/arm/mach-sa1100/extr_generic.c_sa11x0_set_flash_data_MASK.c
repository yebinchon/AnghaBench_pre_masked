
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct flash_platform_data {char* name; } ;
struct TYPE_3__ {struct flash_platform_data* platform_data; } ;
struct TYPE_4__ {int num_resources; struct resource* resource; TYPE_1__ dev; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(struct flash_platform_data *VAR_1,
      struct resource *VAR_2, int VAR_3)
{
 VAR_1->name = "sa1100";
 VAR_0.dev.platform_data = VAR_1;
 VAR_0.resource = VAR_2;
 VAR_0.num_resources = VAR_3;
}
