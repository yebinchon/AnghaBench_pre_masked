
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_space_info {int lock; int bytes_readonly; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {scalar_t__ offset; } ;
struct btrfs_block_group_cache {int lock; scalar_t__ ro; int item; scalar_t__ bytes_super; scalar_t__ pinned; scalar_t__ reserved; TYPE_1__ key; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btrfs_root *VAR_0,
         struct btrfs_block_group_cache *VAR_1)
{
 struct btrfs_space_info *VAR_2 = VAR_1->space_info;
 u64 VAR_3;

 FUNC_0(!VAR_1->ro);

 FUNC_2(&VAR_2->lock);
 FUNC_2(&VAR_1->lock);
 VAR_3 = VAR_1->key.offset - VAR_1->reserved - VAR_1->pinned -
      VAR_1->bytes_super - FUNC_1(&VAR_1->item);
 VAR_2->bytes_readonly -= VAR_3;
 VAR_1->ro = 0;
 FUNC_3(&VAR_1->lock);
 FUNC_3(&VAR_2->lock);
}
