
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct vfsmount* mnt_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 scalar_t__ FUNC_1 (struct vfsmount*) ;
 struct vfsmount* FUNC_2 (struct vfsmount*) ;

__attribute__((used)) static struct vfsmount *FUNC_3(struct vfsmount *VAR_3,
     struct vfsmount *VAR_4,
     struct vfsmount *VAR_5,
     int *VAR_6)
{
 struct vfsmount *VAR_7 = ((void*)0);
 struct vfsmount *VAR_8 = ((void*)0);
 *VAR_6 = VAR_1;

 if (FUNC_1(VAR_3))
  *VAR_6 |= VAR_0;

 while (VAR_4 != VAR_3->mnt_master) {
  VAR_8 = VAR_4;
  VAR_7 = VAR_5;
  VAR_4 = VAR_4->mnt_master;
  VAR_5 = VAR_5->mnt_master;
 }

 if (VAR_8) {
  do {
   VAR_8 = FUNC_2(VAR_8);
  } while (FUNC_0(VAR_8));
 }

 if (VAR_3 != VAR_8) {
  *VAR_6 |= VAR_2;
  return VAR_5;
 } else
  return VAR_7;
}
