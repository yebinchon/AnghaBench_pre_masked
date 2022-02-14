
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3_mmio_region {TYPE_1__* mmio_ops; } ;
struct TYPE_2__ {int (* free ) (struct ps3_mmio_region*) ;} ;


 int FUNC_0 (struct ps3_mmio_region*) ;

int FUNC_1(struct ps3_mmio_region *VAR_0)
{
 return VAR_0->mmio_ops->free(VAR_0);
}
