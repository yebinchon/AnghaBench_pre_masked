
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int root_lock; int fail_io; } ;
typedef int dm_thin_id ;


 int VAR_0 ;
 int FUNC_0 (struct dm_pool_metadata*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dm_pool_metadata *VAR_1, dm_thin_id VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_1(&VAR_1->root_lock);
 if (!VAR_1->fail_io)
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_1->root_lock);

 return VAR_3;
}
