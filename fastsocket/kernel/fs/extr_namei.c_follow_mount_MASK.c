
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_root; } ;
struct path {int dentry; struct vfsmount* mnt; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct vfsmount* FUNC_3 (struct path*) ;
 int FUNC_4 (struct vfsmount*) ;

__attribute__((used)) static void FUNC_5(struct path *VAR_0)
{
 while (FUNC_0(VAR_0->dentry)) {
  struct vfsmount *VAR_1 = FUNC_3(VAR_0);
  if (!VAR_1)
   break;
  FUNC_2(VAR_0->dentry);
  FUNC_4(VAR_0->mnt);
  VAR_0->mnt = VAR_1;
  VAR_0->dentry = FUNC_1(VAR_1->mnt_root);
 }
}
