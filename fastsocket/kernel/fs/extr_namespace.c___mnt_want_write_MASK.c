
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (struct vfsmount*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(struct vfsmount *VAR_2)
{
 int VAR_3 = 0;

 FUNC_4();
 FUNC_3(VAR_2);





 FUNC_6();
 while (VAR_2->mnt_flags & VAR_1)
  FUNC_1();





 FUNC_7();
 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_2);
  VAR_3 = -VAR_0;
  goto out;
 }
out:
 FUNC_5();

 return VAR_3;
}
