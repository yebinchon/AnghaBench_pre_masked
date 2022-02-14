
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_group_id; } ;


 int FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*,struct vfsmount*) ;
 int FUNC_2 (struct vfsmount*) ;
 struct vfsmount* FUNC_3 (struct vfsmount*,struct vfsmount*) ;

__attribute__((used)) static int FUNC_4(struct vfsmount *VAR_0, bool VAR_1)
{
 struct vfsmount *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_1 ? FUNC_3(VAR_2, VAR_0) : ((void*)0)) {
  if (!VAR_2->mnt_group_id && !FUNC_0(VAR_2)) {
   int VAR_3 = FUNC_2(VAR_2);
   if (VAR_3) {
    FUNC_1(VAR_0, VAR_2);
    return VAR_3;
   }
  }
 }

 return 0;
}
