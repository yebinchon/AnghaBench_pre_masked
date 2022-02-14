
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_pool_metadata {int fail_io; int root_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_pool_metadata*,int) ;
 int FUNC_1 (struct dm_pool_metadata*) ;
 int FUNC_2 (struct dm_pool_metadata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dm_pool_metadata *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_3(&VAR_1->root_lock);
 if (VAR_1->fail_io)
  goto out;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_1, 0);
 if (VAR_2)
  VAR_1->fail_io = 1;

out:
 FUNC_4(&VAR_1->root_lock);

 return VAR_2;
}
