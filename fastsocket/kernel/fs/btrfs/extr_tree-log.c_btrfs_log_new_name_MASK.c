
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct dentry {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {scalar_t__ logged_trans; int last_unlink_trans; struct btrfs_root* root; } ;
struct TYPE_3__ {scalar_t__ last_trans_committed; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct dentry*,int) ;

int FUNC_3(struct btrfs_trans_handle *VAR_0,
   struct inode *VAR_1, struct inode *VAR_2,
   struct dentry *VAR_3)
{
 struct btrfs_root * VAR_4 = FUNC_0(VAR_1)->root;





 if (FUNC_1(VAR_1->i_mode))
  FUNC_0(VAR_1)->last_unlink_trans = VAR_0->transid;





 if (FUNC_0(VAR_1)->logged_trans <=
     VAR_4->fs_info->last_trans_committed &&
     (!VAR_2 || FUNC_0(VAR_2)->logged_trans <=
      VAR_4->fs_info->last_trans_committed))
  return 0;

 return FUNC_2(VAR_0, VAR_4, VAR_1, VAR_3, 1);
}
