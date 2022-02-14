
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_4__ {struct vfsmount* mnt; struct dentry* dentry; } ;
struct nameidata {TYPE_2__ path; } ;
struct inode {int dummy; } ;
struct dentry {scalar_t__ d_inode; TYPE_1__* d_op; } ;
struct TYPE_3__ {int (* d_revalidate ) (struct dentry*,struct nameidata*) ;} ;


 struct dentry* FUNC_0 (struct dentry*) ;
 struct vfsmount* FUNC_1 (struct dentry*) ;
 struct inode* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,struct inode*,int *) ;
 int FUNC_4 (struct dentry*,struct nameidata*) ;

__attribute__((used)) static int FUNC_5(struct dentry *VAR_0, struct nameidata *VAR_1)
{
 struct dentry *VAR_2 = FUNC_0(VAR_0);
 struct vfsmount *VAR_3 = FUNC_1(VAR_0);
 struct dentry *VAR_4;
 struct vfsmount *VAR_5;
 int VAR_6 = 1;

 if (!VAR_2->d_op || !VAR_2->d_op->d_revalidate)
  goto out;
 VAR_4 = VAR_1->path.dentry;
 VAR_5 = VAR_1->path.mnt;
 VAR_1->path.dentry = VAR_2;
 VAR_1->path.mnt = VAR_3;
 VAR_6 = VAR_2->d_op->d_revalidate(VAR_2, VAR_1);
 VAR_1->path.dentry = VAR_4;
 VAR_1->path.mnt = VAR_5;
 if (VAR_0->d_inode) {
  struct inode *VAR_7 =
   FUNC_2(VAR_0->d_inode);

  FUNC_3(VAR_0->d_inode, VAR_7, ((void*)0));
 }
out:
 return VAR_6;
}
