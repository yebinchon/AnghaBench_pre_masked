
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct vfsmount *VAR_4)
{
 int VAR_5 = 0;

 FUNC_3(&VAR_3);
 VAR_4->mnt_flags |= VAR_2;




 FUNC_1();
 if (FUNC_0(VAR_4) > 0)
  VAR_5 = -VAR_0;
 else
  VAR_4->mnt_flags |= VAR_1;




 FUNC_2();
 VAR_4->mnt_flags &= ~VAR_2;
 FUNC_4(&VAR_3);
 return VAR_5;
}
