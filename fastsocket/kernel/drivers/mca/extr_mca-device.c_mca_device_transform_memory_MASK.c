
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct mca_device {TYPE_1__ dev; } ;
struct TYPE_4__ {void* (* mca_transform_memory ) (struct mca_device*,void*) ;} ;
struct mca_bus {TYPE_2__ f; } ;


 void* FUNC_0 (struct mca_device*,void*) ;
 struct mca_bus* FUNC_1 (int ) ;

void *FUNC_2(struct mca_device *VAR_0, void *VAR_1)
{
 struct mca_bus *VAR_2 = FUNC_1(VAR_0->dev.parent);

 return VAR_2->f.mca_transform_memory(VAR_0, VAR_1);
}
