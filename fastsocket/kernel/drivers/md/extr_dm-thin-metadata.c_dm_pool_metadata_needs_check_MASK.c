
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int flags; int root_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(struct dm_pool_metadata *VAR_1)
{
 bool VAR_2;

 FUNC_0(&VAR_1->root_lock);
 VAR_2 = VAR_1->flags & VAR_0;
 FUNC_1(&VAR_1->root_lock);

 return VAR_2;
}
