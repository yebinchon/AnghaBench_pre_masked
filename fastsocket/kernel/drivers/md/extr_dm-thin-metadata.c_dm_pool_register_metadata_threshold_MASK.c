
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int root_lock; int metadata_sm; } ;
typedef int dm_sm_threshold_fn ;
typedef int dm_block_t ;


 int FUNC_0 (int ,int ,int ,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dm_pool_metadata *VAR_0,
     dm_block_t VAR_1,
     dm_sm_threshold_fn VAR_2,
     void *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->root_lock);
 VAR_4 = FUNC_0(VAR_0->metadata_sm, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->root_lock);

 return VAR_4;
}
