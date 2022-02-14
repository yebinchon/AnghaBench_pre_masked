
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_4__ {int mnt; } ;
struct file {int f_mode; TYPE_2__ f_path; TYPE_1__* f_dentry; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct file *VAR_1)
{
 struct inode *VAR_2 = VAR_1->f_dentry->d_inode;
 if (!(VAR_1->f_mode & VAR_0) || FUNC_2(VAR_2->i_mode))
  return FUNC_0(VAR_1->f_path.mnt);
 else
  return FUNC_1(VAR_1->f_path.mnt);
}
