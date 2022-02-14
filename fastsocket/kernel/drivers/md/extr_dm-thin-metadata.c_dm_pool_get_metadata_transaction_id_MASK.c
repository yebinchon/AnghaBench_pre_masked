
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dm_pool_metadata {int root_lock; int trans_id; int fail_io; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dm_pool_metadata *VAR_1,
     uint64_t *VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_0(&VAR_1->root_lock);
 if (!VAR_1->fail_io) {
  *VAR_2 = VAR_1->trans_id;
  VAR_3 = 0;
 }
 FUNC_1(&VAR_1->root_lock);

 return VAR_3;
}
