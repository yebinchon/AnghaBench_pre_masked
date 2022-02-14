
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {scalar_t__ mnt_group_id; } ;


 int FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 struct vfsmount* FUNC_2 (struct vfsmount*,struct vfsmount*) ;

__attribute__((used)) static void FUNC_3(struct vfsmount *VAR_0, struct vfsmount *VAR_1)
{
 struct vfsmount *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != VAR_1; VAR_2 = FUNC_2(VAR_2, VAR_0)) {
  if (VAR_2->mnt_group_id && !FUNC_0(VAR_2))
   FUNC_1(VAR_2);
 }
}
