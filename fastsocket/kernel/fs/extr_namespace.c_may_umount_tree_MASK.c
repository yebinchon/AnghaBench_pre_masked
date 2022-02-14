
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct vfsmount* FUNC_1 (struct vfsmount*,struct vfsmount*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

int FUNC_4(struct vfsmount *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 struct vfsmount *VAR_4;

 FUNC_2(&VAR_0);
 for (VAR_4 = VAR_1; VAR_4; VAR_4 = FUNC_1(VAR_4, VAR_1)) {
  VAR_2 += FUNC_0(&VAR_4->mnt_count);
  VAR_3 += 2;
 }
 FUNC_3(&VAR_0);

 if (VAR_2 > VAR_3)
  return 0;

 return 1;
}
