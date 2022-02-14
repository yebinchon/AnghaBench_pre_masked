
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct inode {int * i_cdev; int i_mode; } ;
struct TYPE_5__ {struct vfsmount* mnt; struct dentry* dentry; } ;
struct TYPE_4__ {int pid; } ;
struct file {int f_flags; int f_mode; TYPE_2__ f_path; TYPE_1__ f_owner; TYPE_3__* f_op; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_6__ {int (* release ) (struct inode*,struct file*) ;int (* fasync ) (int,struct file*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct vfsmount*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct file*) ;
 int FUNC_15 (int,struct file*,int ) ;
 int FUNC_16 (struct inode*,struct file*) ;
 scalar_t__ FUNC_17 (int) ;

void FUNC_18(struct file *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->f_path.dentry;
 struct vfsmount *VAR_4 = VAR_2->f_path.mnt;
 struct inode *VAR_5 = VAR_3->d_inode;

 FUNC_11();

 FUNC_8(VAR_2);




 FUNC_4(VAR_2);
 FUNC_10(VAR_2);

 if (FUNC_17(VAR_2->f_flags & VAR_0)) {
  if (VAR_2->f_op && VAR_2->f_op->fasync)
   VAR_2->f_op->fasync(-1, VAR_2, 0);
 }
 if (VAR_2->f_op && VAR_2->f_op->release)
  VAR_2->f_op->release(VAR_5, VAR_2);
 FUNC_14(VAR_2);
 FUNC_9(VAR_2);
 if (FUNC_17(FUNC_0(VAR_5->i_mode) && VAR_5->i_cdev != ((void*)0)))
  FUNC_1(VAR_5->i_cdev);
 FUNC_7(VAR_2->f_op);
 FUNC_13(VAR_2->f_owner.pid);
 FUNC_6(VAR_2);
 if (VAR_2->f_mode & VAR_1)
  FUNC_3(VAR_2);
 VAR_2->f_path.dentry = ((void*)0);
 VAR_2->f_path.mnt = ((void*)0);
 FUNC_5(VAR_2);
 FUNC_2(VAR_3);
 FUNC_12(VAR_4);
}
