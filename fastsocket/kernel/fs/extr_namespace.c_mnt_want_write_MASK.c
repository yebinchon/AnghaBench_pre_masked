
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_sb; } ;


 int FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct vfsmount *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0->mnt_sb);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_0->mnt_sb);
 return VAR_1;
}
