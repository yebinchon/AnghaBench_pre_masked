
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {TYPE_1__* i_sb; int i_mutex; } ;
struct TYPE_3__ {int s_vfs_rename_mutex; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dentry *VAR_0, struct dentry *VAR_1)
{
 FUNC_0(&VAR_0->d_inode->i_mutex);
 if (VAR_0 != VAR_1) {
  FUNC_0(&VAR_1->d_inode->i_mutex);
  FUNC_0(&VAR_0->d_inode->i_sb->s_vfs_rename_mutex);
 }
}
