
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_hash; int mnt_mounts; int mnt_mountpoint; struct vfsmount* mnt_parent; } ;


 int FUNC_0 (int) ;
 struct vfsmount* FUNC_1 (struct vfsmount*,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 struct vfsmount* FUNC_4 (struct vfsmount*,struct vfsmount*) ;

__attribute__((used)) static void FUNC_5(struct vfsmount *VAR_0)
{
 struct vfsmount *VAR_1 = VAR_0->mnt_parent;
 struct vfsmount *VAR_2;

 FUNC_0(VAR_1 == VAR_0);

 for (VAR_2 = FUNC_4(VAR_1, VAR_1); VAR_2;
   VAR_2 = FUNC_4(VAR_2, VAR_1)) {

  struct vfsmount *VAR_3 = FUNC_1(VAR_2,
     VAR_0->mnt_mountpoint, 0);




  if (VAR_3 && FUNC_2(&VAR_3->mnt_mounts))
   FUNC_3(&VAR_3->mnt_hash, &VAR_0->mnt_hash);
 }
}
