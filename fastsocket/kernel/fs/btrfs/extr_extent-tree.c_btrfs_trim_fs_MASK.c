
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct fstrim_range {scalar_t__ len; scalar_t__ start; scalar_t__ minlen; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int tree_root; int super_copy; } ;
struct TYPE_2__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {TYPE_1__ key; } ;


 int FUNC_0 (struct btrfs_block_group_cache*) ;
 struct btrfs_block_group_cache* FUNC_1 (struct btrfs_fs_info*,scalar_t__) ;
 struct btrfs_block_group_cache* FUNC_2 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct btrfs_block_group_cache*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct btrfs_block_group_cache*,int *,struct btrfs_root*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 struct btrfs_block_group_cache* FUNC_9 (int ,struct btrfs_block_group_cache*) ;
 int FUNC_10 (struct btrfs_block_group_cache*) ;

int FUNC_11(struct btrfs_root *VAR_0, struct fstrim_range *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_0->fs_info;
 struct btrfs_block_group_cache *VAR_3 = ((void*)0);
 u64 VAR_4;
 u64 VAR_5;
 u64 VAR_6;
 u64 VAR_7 = 0;
 u64 VAR_8 = FUNC_4(VAR_2->super_copy);
 int VAR_9 = 0;




 if (VAR_1->len == VAR_8)
  VAR_3 = FUNC_2(VAR_2, VAR_1->start);
 else
  VAR_3 = FUNC_1(VAR_2, VAR_1->start);

 while (VAR_3) {
  if (VAR_3->key.objectid >= (VAR_1->start + VAR_1->len)) {
   FUNC_3(VAR_3);
   break;
  }

  VAR_5 = FUNC_7(VAR_1->start, VAR_3->key.objectid);
  VAR_6 = FUNC_8(VAR_1->start + VAR_1->len,
    VAR_3->key.objectid + VAR_3->key.offset);

  if (VAR_6 - VAR_5 >= VAR_1->minlen) {
   if (!FUNC_0(VAR_3)) {
    VAR_9 = FUNC_6(VAR_3, ((void*)0), VAR_0, 0);
    if (!VAR_9)
     FUNC_10(VAR_3);
   }
   VAR_9 = FUNC_5(VAR_3,
           &VAR_4,
           VAR_5,
           VAR_6,
           VAR_1->minlen);

   VAR_7 += VAR_4;
   if (VAR_9) {
    FUNC_3(VAR_3);
    break;
   }
  }

  VAR_3 = FUNC_9(VAR_2->tree_root, VAR_3);
 }

 VAR_1->len = VAR_7;
 return VAR_9;
}
