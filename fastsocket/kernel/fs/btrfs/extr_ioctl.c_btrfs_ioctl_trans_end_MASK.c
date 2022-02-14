
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_5__ {int mnt; } ;
struct file {TYPE_1__ f_path; struct btrfs_trans_handle* private_data; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct TYPE_8__ {struct btrfs_root* root; } ;
struct TYPE_7__ {struct inode* d_inode; } ;
struct TYPE_6__ {int open_ioctl_trans; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 long VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 TYPE_3__* FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;

long FUNC_5(struct file *VAR_1)
{
 struct inode *VAR_2 = FUNC_3(VAR_1)->d_inode;
 struct btrfs_root *VAR_3 = FUNC_0(VAR_2)->root;
 struct btrfs_trans_handle *VAR_4;

 VAR_4 = VAR_1->private_data;
 if (!VAR_4)
  return -VAR_0;
 VAR_1->private_data = ((void*)0);

 FUNC_2(VAR_4, VAR_3);

 FUNC_1(&VAR_3->fs_info->open_ioctl_trans);

 FUNC_4(VAR_1->f_path.mnt);
 return 0;
}
