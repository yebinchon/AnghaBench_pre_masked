
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {scalar_t__ orphan_cleanup_state; scalar_t__ orphan_item_inserted; TYPE_2__ root_key; TYPE_1__* fs_info; int root_item; int orphan_lock; struct btrfs_block_rsv* orphan_block_rsv; int orphan_inodes; } ;
struct btrfs_block_rsv {scalar_t__ size; } ;
struct TYPE_3__ {int tree_root; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_trans_handle*,int ,int ) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_block_rsv*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct btrfs_trans_handle *VAR_1,
         struct btrfs_root *VAR_2)
{
 struct btrfs_block_rsv *VAR_3;
 int VAR_4;

 if (FUNC_2(&VAR_2->orphan_inodes) ||
     VAR_2->orphan_cleanup_state != VAR_0)
  return;

 FUNC_6(&VAR_2->orphan_lock);
 if (FUNC_2(&VAR_2->orphan_inodes)) {
  FUNC_7(&VAR_2->orphan_lock);
  return;
 }

 if (VAR_2->orphan_cleanup_state != VAR_0) {
  FUNC_7(&VAR_2->orphan_lock);
  return;
 }

 VAR_3 = VAR_2->orphan_block_rsv;
 VAR_2->orphan_block_rsv = ((void*)0);
 FUNC_7(&VAR_2->orphan_lock);

 if (VAR_2->orphan_item_inserted &&
     FUNC_5(&VAR_2->root_item) > 0) {
  VAR_4 = FUNC_3(VAR_1, VAR_2->fs_info->tree_root,
         VAR_2->root_key.objectid);
  FUNC_0(VAR_4);
  VAR_2->orphan_item_inserted = 0;
 }

 if (VAR_3) {
  FUNC_1(VAR_3->size > 0);
  FUNC_4(VAR_2, VAR_3);
 }
}
