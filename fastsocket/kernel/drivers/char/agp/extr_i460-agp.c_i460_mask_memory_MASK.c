
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct agp_bridge_data {TYPE_2__* driver; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* masks; } ;
struct TYPE_3__ {int mask; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0 (struct agp_bridge_data *VAR_1,
           dma_addr_t VAR_2, int VAR_3)
{

 return VAR_1->driver->masks[0].mask
  | (((VAR_2 & ~((1 << VAR_0) - 1)) & 0xfffff000) >> 12);
}
