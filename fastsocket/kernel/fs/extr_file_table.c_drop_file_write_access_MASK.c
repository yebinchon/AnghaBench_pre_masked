
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct inode {int i_mode; } ;
struct TYPE_2__ {struct dentry* dentry; struct vfsmount* mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;


 int FUNC_0 (struct vfsmount*) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct file *VAR_0)
{
 struct vfsmount *VAR_1 = VAR_0->f_path.mnt;
 struct dentry *VAR_2 = VAR_0->f_path.dentry;
 struct inode *VAR_3 = VAR_2->d_inode;

 FUNC_3(VAR_3);

 if (FUNC_4(VAR_3->i_mode))
  return;
 if (FUNC_1(VAR_0) != 0)
  return;
 FUNC_0(VAR_1);
 FUNC_2(VAR_0);
}
