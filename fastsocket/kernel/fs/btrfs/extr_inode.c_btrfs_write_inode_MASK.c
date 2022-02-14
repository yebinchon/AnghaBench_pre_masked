
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; } ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct TYPE_2__ {int runtime_flags; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct btrfs_root*,struct inode*) ;
 struct btrfs_trans_handle* FUNC_7 (struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_8 (struct btrfs_root*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct inode *VAR_2, struct writeback_control *VAR_3)
{
 struct btrfs_root *VAR_4 = FUNC_0(VAR_2)->root;
 struct btrfs_trans_handle *VAR_5;
 int VAR_6 = 0;
 bool VAR_7 = 0;

 if (FUNC_9(VAR_0, &FUNC_0(VAR_2)->runtime_flags))
  return 0;

 if (FUNC_5(VAR_4->fs_info) && FUNC_6(VAR_4, VAR_2))
  VAR_7 = 1;

 if (VAR_3->sync_mode == VAR_1) {
  if (VAR_7)
   VAR_5 = FUNC_8(VAR_4);
  else
   VAR_5 = FUNC_7(VAR_4);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);
  if (VAR_7)
   VAR_6 = FUNC_4(VAR_5, VAR_4);
  else
   VAR_6 = FUNC_3(VAR_5, VAR_4);
 }
 return VAR_6;
}
