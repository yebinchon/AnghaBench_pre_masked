
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {scalar_t__ mnt_pinned; int mnt_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct vfsmount *VAR_1)
{
 FUNC_1(&VAR_0);
 if (VAR_1->mnt_pinned) {
  FUNC_0(&VAR_1->mnt_count);
  VAR_1->mnt_pinned--;
 }
 FUNC_2(&VAR_0);
}
