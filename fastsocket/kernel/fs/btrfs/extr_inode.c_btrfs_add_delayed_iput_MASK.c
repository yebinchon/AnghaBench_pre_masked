
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_count; } ;
struct delayed_iput {int list; struct inode* inode; } ;
struct btrfs_fs_info {int delayed_iput_lock; int delayed_iputs; } ;
struct TYPE_4__ {TYPE_1__* root; } ;
struct TYPE_3__ {struct btrfs_fs_info* fs_info; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 struct delayed_iput* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = FUNC_0(VAR_2)->root->fs_info;
 struct delayed_iput *VAR_4;

 if (FUNC_1(&VAR_2->i_count, -1, 1))
  return;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0 | VAR_1);
 VAR_4->inode = VAR_2;

 FUNC_4(&VAR_3->delayed_iput_lock);
 FUNC_3(&VAR_4->list, &VAR_3->delayed_iputs);
 FUNC_5(&VAR_3->delayed_iput_lock);
}
