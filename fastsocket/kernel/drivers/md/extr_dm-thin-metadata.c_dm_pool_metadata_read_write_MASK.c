
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int read_only; int root_lock; int bm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dm_pool_metadata *VAR_0)
{
 FUNC_1(&VAR_0->root_lock);
 VAR_0->read_only = 0;
 FUNC_0(VAR_0->bm);
 FUNC_2(&VAR_0->root_lock);
}
