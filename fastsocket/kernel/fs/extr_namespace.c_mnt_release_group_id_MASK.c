
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_group_id; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct vfsmount *VAR_2)
{
 int VAR_3 = VAR_2->mnt_group_id;
 FUNC_0(&VAR_0, VAR_3);
 if (VAR_1 > VAR_3)
  VAR_1 = VAR_3;
 VAR_2->mnt_group_id = 0;
}
