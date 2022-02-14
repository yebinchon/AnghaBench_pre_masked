
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct dm_pool_metadata {scalar_t__ trans_id; int root_lock; scalar_t__ fail_io; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dm_pool_metadata *VAR_1,
     uint64_t VAR_2,
     uint64_t VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_1(&VAR_1->root_lock);

 if (VAR_1->fail_io)
  goto out;

 if (VAR_1->trans_id != VAR_2) {
  FUNC_0("mismatched transaction id");
  goto out;
 }

 VAR_1->trans_id = VAR_3;
 VAR_4 = 0;

out:
 FUNC_2(&VAR_1->root_lock);

 return VAR_4;
}
