
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_thin_device {int aborted_with_changes; TYPE_1__* pmd; } ;
struct TYPE_2__ {int root_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct dm_thin_device *VAR_0)
{
 bool VAR_1;

 FUNC_0(&VAR_0->pmd->root_lock);
 VAR_1 = VAR_0->aborted_with_changes;
 FUNC_1(&VAR_0->pmd->root_lock);

 return VAR_1;
}
