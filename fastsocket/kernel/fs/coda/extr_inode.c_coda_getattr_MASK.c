
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct kstat {int dummy; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ,struct kstat*) ;

int FUNC_2(struct vfsmount *VAR_0, struct dentry *VAR_1, struct kstat *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  FUNC_1(VAR_1->d_inode, VAR_2);
 return VAR_3;
}
