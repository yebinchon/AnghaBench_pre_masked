
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct kstat {int dummy; } ;
struct inode {TYPE_1__* i_op; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int (* getattr ) (struct vfsmount*,struct dentry*,struct kstat*) ;} ;


 int FUNC_0 (struct inode*,struct kstat*) ;
 int FUNC_1 (struct vfsmount*,struct dentry*) ;
 int FUNC_2 (struct vfsmount*,struct dentry*,struct kstat*) ;

int FUNC_3(struct vfsmount *VAR_0, struct dentry *VAR_1, struct kstat *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->i_op->getattr)
  return VAR_3->i_op->getattr(VAR_0, VAR_1, VAR_2);

 FUNC_0(VAR_3, VAR_2);
 return 0;
}
