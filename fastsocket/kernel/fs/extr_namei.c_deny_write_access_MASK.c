
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_lock; int i_writecount; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct file * VAR_1)
{
 struct inode *VAR_2 = VAR_1->f_path.dentry->d_inode;

 FUNC_2(&VAR_2->i_lock);
 if (FUNC_1(&VAR_2->i_writecount) > 0) {
  FUNC_3(&VAR_2->i_lock);
  return -VAR_0;
 }
 FUNC_0(&VAR_2->i_writecount);
 FUNC_3(&VAR_2->i_lock);

 return 0;
}
