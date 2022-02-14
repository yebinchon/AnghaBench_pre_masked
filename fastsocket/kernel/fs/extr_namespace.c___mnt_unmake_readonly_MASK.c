
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct vfsmount *VAR_2)
{
 FUNC_0(&VAR_1);
 VAR_2->mnt_flags &= ~VAR_0;
 FUNC_1(&VAR_1);
}
