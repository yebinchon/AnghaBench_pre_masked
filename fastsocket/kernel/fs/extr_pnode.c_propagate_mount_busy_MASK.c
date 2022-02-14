
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_mounts; int mnt_mountpoint; struct vfsmount* mnt_parent; } ;


 struct vfsmount* FUNC_0 (struct vfsmount*,int ,int ) ;
 int FUNC_1 (struct vfsmount*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct vfsmount* FUNC_3 (struct vfsmount*,struct vfsmount*) ;

int FUNC_4(struct vfsmount *VAR_0, int VAR_1)
{
 struct vfsmount *VAR_2, *VAR_3;
 struct vfsmount *VAR_4 = VAR_0->mnt_parent;
 int VAR_5 = 0;

 if (VAR_0 == VAR_4)
  return FUNC_1(VAR_0, VAR_1);






 if (!FUNC_2(&VAR_0->mnt_mounts) || FUNC_1(VAR_0, VAR_1))
  return 1;

 for (VAR_2 = FUNC_3(VAR_4, VAR_4); VAR_2;
        VAR_2 = FUNC_3(VAR_2, VAR_4)) {
  VAR_3 = FUNC_0(VAR_2, VAR_0->mnt_mountpoint, 0);
  if (VAR_3 && FUNC_2(&VAR_3->mnt_mounts) &&
      (VAR_5 = FUNC_1(VAR_3, 1)))
   break;
 }
 return VAR_5;
}
