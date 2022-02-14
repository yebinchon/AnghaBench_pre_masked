
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_dma_region {TYPE_1__* region_ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* unmap ) (struct ps3_dma_region*,int ,unsigned long) ;} ;


 int FUNC_0 (struct ps3_dma_region*,int ,unsigned long) ;

int FUNC_1(struct ps3_dma_region *VAR_0, dma_addr_t VAR_1,
 unsigned long VAR_2)
{
 return VAR_0->region_ops->unmap(VAR_0, VAR_1, VAR_2);
}
