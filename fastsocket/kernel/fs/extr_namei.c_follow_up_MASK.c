
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_mountpoint; struct vfsmount* mnt_parent; } ;
struct path {struct vfsmount* mnt; struct dentry* dentry; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (struct vfsmount*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

int FUNC_6(struct path *VAR_1)
{
 struct vfsmount *VAR_2;
 struct dentry *VAR_3;
 FUNC_4(&VAR_0);
 VAR_2 = VAR_1->mnt->mnt_parent;
 if (VAR_2 == VAR_1->mnt) {
  FUNC_5(&VAR_0);
  return 0;
 }
 FUNC_2(VAR_2);
 VAR_3 = FUNC_0(VAR_1->mnt->mnt_mountpoint);
 FUNC_5(&VAR_0);
 FUNC_1(VAR_1->dentry);
 VAR_1->dentry = VAR_3;
 FUNC_3(VAR_1->mnt);
 VAR_1->mnt = VAR_2;
 return 1;
}
