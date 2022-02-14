
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dm_pool_metadata {int root_lock; int data_sm; } ;
typedef int dm_block_t ;


 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dm_pool_metadata *VAR_0, dm_block_t VAR_1, bool *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;

 FUNC_1(&VAR_0->root_lock);
 VAR_3 = FUNC_0(VAR_0->data_sm, VAR_1, &VAR_4);
 if (!VAR_3)
  *VAR_2 = (VAR_4 != 0);
 FUNC_2(&VAR_0->root_lock);

 return VAR_3;
}
