
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_thin_device {TYPE_1__* pmd; } ;
typedef int dm_block_t ;
struct TYPE_2__ {int root_lock; int fail_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_thin_device*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dm_thin_device *VAR_1, dm_block_t VAR_2,
    dm_block_t VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_1(&VAR_1->pmd->root_lock);
 if (!VAR_1->pmd->fail_io)
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->pmd->root_lock);

 return VAR_4;
}
