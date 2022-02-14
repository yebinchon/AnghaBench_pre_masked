
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct dm_thin_lookup_result {int shared; int block; } ;
struct dm_thin_device {int id; struct dm_pool_metadata* pmd; } ;
struct dm_btree_info {int dummy; } ;
struct dm_pool_metadata {int root_lock; int root; scalar_t__ fail_io; struct dm_btree_info nb_info; struct dm_btree_info info; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dm_thin_device*,int ) ;
 int FUNC_1 (struct dm_btree_info*,int ,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dm_thin_device *VAR_2, dm_block_t VAR_3,
         int VAR_4, struct dm_thin_lookup_result *VAR_5)
{
 int VAR_6 = -VAR_0;
 uint64_t VAR_7 = 0;
 __le64 VAR_8;
 struct dm_pool_metadata *VAR_9 = VAR_2->pmd;
 dm_block_t VAR_10[2] = { VAR_2->id, VAR_3 };
 struct dm_btree_info *VAR_11;

 if (VAR_4) {
  FUNC_2(&VAR_9->root_lock);
  VAR_11 = &VAR_9->info;
 } else if (FUNC_3(&VAR_9->root_lock))
  VAR_11 = &VAR_9->nb_info;
 else
  return -VAR_1;

 if (VAR_9->fail_io)
  goto out;

 VAR_6 = FUNC_1(VAR_11, VAR_9->root, VAR_10, &VAR_8);
 if (!VAR_6)
  VAR_7 = FUNC_4(VAR_8);

out:
 FUNC_6(&VAR_9->root_lock);

 if (!VAR_6) {
  dm_block_t VAR_12;
  uint32_t VAR_13;
  FUNC_5(VAR_7, &VAR_12,
      &VAR_13);
  VAR_5->block = VAR_12;
  VAR_5->shared = FUNC_0(VAR_2, VAR_13);
 }

 return VAR_6;
}
