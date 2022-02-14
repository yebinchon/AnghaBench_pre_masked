
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_mode; TYPE_2__ f_path; } ;
typedef int fl_owner_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct inode*,struct file*,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_path.dentry->d_inode;
 int VAR_4 = 0;

 if (VAR_1->f_mode & VAR_0)
  VAR_4 = FUNC_1(VAR_3->i_mapping);

 FUNC_0(1, "Flush inode %p file %p rc %d", VAR_3, VAR_1, VAR_4);

 return VAR_4;
}
