
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_5__ {int objectid; } ;
struct btrfs_root {TYPE_2__ root_key; TYPE_1__* fs_info; int orphan_lock; int orphan_inodes; int orphan_item_inserted; struct btrfs_block_rsv* orphan_block_rsv; } ;
struct btrfs_block_rsv {int dummy; } ;
struct TYPE_6__ {int runtime_flags; struct btrfs_root* root; } ;
struct TYPE_4__ {struct btrfs_root* tree_root; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 struct btrfs_block_rsv* FUNC_4 (struct btrfs_root*) ;
 int FUNC_5 (struct btrfs_root*,struct btrfs_block_rsv*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,int ) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct inode*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,int) ;

int FUNC_14(struct btrfs_trans_handle *VAR_4, struct inode *VAR_5)
{
 struct btrfs_root *VAR_6 = FUNC_0(VAR_5)->root;
 struct btrfs_block_rsv *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10;

 if (!VAR_6->orphan_block_rsv) {
  VAR_7 = FUNC_4(VAR_6);
  if (!VAR_7)
   return -VAR_3;
 }

 FUNC_10(&VAR_6->orphan_lock);
 if (!VAR_6->orphan_block_rsv) {
  VAR_6->orphan_block_rsv = VAR_7;
 } else if (VAR_7) {
  FUNC_5(VAR_6, VAR_7);
  VAR_7 = ((void*)0);
 }

 if (!FUNC_12(VAR_0,
         &FUNC_0(VAR_5)->runtime_flags)) {
  VAR_9 = 1;
  FUNC_2(&VAR_6->orphan_inodes);
 }

 if (!FUNC_12(VAR_1,
         &FUNC_0(VAR_5)->runtime_flags))
  VAR_8 = 1;
 FUNC_11(&VAR_6->orphan_lock);


 if (VAR_8) {
  VAR_10 = FUNC_8(VAR_4, VAR_5);
  FUNC_1(VAR_10);
 }


 if (VAR_9 >= 1) {
  VAR_10 = FUNC_7(VAR_4, VAR_6, FUNC_6(VAR_5));
  if (VAR_10 && VAR_10 != -VAR_2) {
   FUNC_9(VAR_0,
      &FUNC_0(VAR_5)->runtime_flags);
   FUNC_3(VAR_4, VAR_6, VAR_10);
   return VAR_10;
  }
  VAR_10 = 0;
 }


 if (VAR_9 >= 2) {
  VAR_10 = FUNC_7(VAR_4, VAR_6->fs_info->tree_root,
            VAR_6->root_key.objectid);
  if (VAR_10 && VAR_10 != -VAR_2) {
   FUNC_3(VAR_4, VAR_6, VAR_10);
   return VAR_10;
  }
 }
 return 0;
}
