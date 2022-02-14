
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int root_lock; int data_block_size; } ;
typedef int sector_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dm_pool_metadata *VAR_0, sector_t *VAR_1)
{
 FUNC_0(&VAR_0->root_lock);
 *VAR_1 = VAR_0->data_block_size;
 FUNC_1(&VAR_0->root_lock);

 return 0;
}
