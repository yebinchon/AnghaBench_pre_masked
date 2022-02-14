
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mutex; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_3__* f_op; TYPE_2__ f_path; } ;
typedef int filldir_t ;
struct TYPE_6__ {int (* readdir ) (struct file*,void*,int ) ;} ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int ) ;
 int FUNC_5 (struct file*,void*,int ) ;

int FUNC_6(struct file *VAR_3, filldir_t VAR_4, void *VAR_5)
{
 struct inode *VAR_6 = VAR_3->f_path.dentry->d_inode;
 int VAR_7 = -VAR_1;
 if (!VAR_3->f_op || !VAR_3->f_op->readdir)
  goto out;

 VAR_7 = FUNC_4(VAR_3, VAR_2);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_2(&VAR_6->i_mutex);
 if (VAR_7)
  goto out;

 VAR_7 = -VAR_0;
 if (!FUNC_0(VAR_6)) {
  VAR_7 = VAR_3->f_op->readdir(VAR_3, VAR_5, VAR_4);
  FUNC_1(VAR_3);
 }
 FUNC_3(&VAR_6->i_mutex);
out:
 return VAR_7;
}
