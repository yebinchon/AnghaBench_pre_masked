
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; } ;
struct path {int dentry; struct vfsmount* mnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vfsmount* FUNC_2 (struct path*) ;
 int FUNC_3 (struct vfsmount*) ;

int FUNC_4(struct path *VAR_0)
{
 struct vfsmount *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_0->dentry);
  FUNC_3(VAR_0->mnt);
  VAR_0->mnt = VAR_1;
  VAR_0->dentry = FUNC_0(VAR_1->mnt_root);
  return 1;
 }
 return 0;
}
