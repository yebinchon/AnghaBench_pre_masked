
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_thin_device {TYPE_1__* pmd; } ;
struct TYPE_2__ {int root_lock; } ;


 int FUNC_0 (struct dm_thin_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dm_thin_device *VAR_0)
{
 FUNC_1(&VAR_0->pmd->root_lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->pmd->root_lock);

 return 0;
}
