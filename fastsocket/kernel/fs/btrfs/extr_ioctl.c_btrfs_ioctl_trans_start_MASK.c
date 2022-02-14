
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_6__ {int mnt; } ;
struct file {TYPE_2__ f_path; struct btrfs_trans_handle* private_data; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_8__ {struct btrfs_root* root; } ;
struct TYPE_7__ {struct inode* d_inode; } ;
struct TYPE_5__ {int open_ioctl_trans; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*) ;
 int FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (struct file*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static long FUNC_10(struct file *VAR_5)
{
 struct inode *VAR_6 = FUNC_7(VAR_5)->d_inode;
 struct btrfs_root *VAR_7 = FUNC_0(VAR_6)->root;
 struct btrfs_trans_handle *VAR_8;
 int VAR_9;

 VAR_9 = -VAR_3;
 if (!FUNC_6(VAR_0))
  goto out;

 VAR_9 = -VAR_1;
 if (VAR_5->private_data)
  goto out;

 VAR_9 = -VAR_4;
 if (FUNC_4(VAR_7))
  goto out;

 VAR_9 = FUNC_9(VAR_5->f_path.mnt);
 if (VAR_9)
  goto out;

 FUNC_3(&VAR_7->fs_info->open_ioctl_trans);

 VAR_9 = -VAR_2;
 VAR_8 = FUNC_5(VAR_7);
 if (FUNC_1(VAR_8))
  goto out_drop;

 VAR_5->private_data = VAR_8;
 return 0;

out_drop:
 FUNC_2(&VAR_7->fs_info->open_ioctl_trans);
 FUNC_8(VAR_5->f_path.mnt);
out:
 return VAR_9;
}
