
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {struct btrfs_block_rsv* block_rsv; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_block_rsv {scalar_t__ reserved; int lock; } ;
typedef int loff_t ;
struct TYPE_2__ {struct btrfs_block_rsv global_block_rsv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 scalar_t__ FUNC_1 (struct btrfs_root*,int) ;
 scalar_t__ FUNC_2 (struct btrfs_root*,int) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,int ,int ) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*,int ,int ) ;

int FUNC_10(struct btrfs_root *VAR_2,
        struct btrfs_trans_handle *VAR_3,
        struct btrfs_path *VAR_4,
        struct inode *VAR_5)
{
 struct btrfs_block_rsv *VAR_6;
 u64 VAR_7;
 loff_t VAR_8;
 int VAR_9 = 0;

 VAR_6 = VAR_3->block_rsv;
 VAR_3->block_rsv = &VAR_2->fs_info->global_block_rsv;


 VAR_7 = FUNC_2(VAR_2, 1) +
  FUNC_1(VAR_2, 1);

 FUNC_7(&VAR_3->block_rsv->lock);
 if (VAR_3->block_rsv->reserved < VAR_7) {
  FUNC_8(&VAR_3->block_rsv->lock);
  VAR_3->block_rsv = VAR_6;
  return -VAR_1;
 }
 FUNC_8(&VAR_3->block_rsv->lock);

 VAR_8 = FUNC_6(VAR_5);
 FUNC_3(VAR_5, 0);
 FUNC_9(VAR_5, VAR_8, 0);





 VAR_9 = FUNC_4(VAR_3, VAR_2, VAR_5,
      0, VAR_0);

 if (VAR_9) {
  VAR_3->block_rsv = VAR_6;
  FUNC_0(VAR_3, VAR_2, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_3, VAR_2, VAR_5);
 if (VAR_9)
  FUNC_0(VAR_3, VAR_2, VAR_9);
 VAR_3->block_rsv = VAR_6;

 return VAR_9;
}
