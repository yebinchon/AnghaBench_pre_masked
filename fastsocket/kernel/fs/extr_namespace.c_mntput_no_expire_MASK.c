
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {scalar_t__ mnt_pinned; int mnt_count; } ;


 int FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct vfsmount*) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;

void FUNC_7(struct vfsmount *VAR_1)
{
repeat:
 if (FUNC_3(&VAR_1->mnt_count, &VAR_0)) {
  if (FUNC_4(!VAR_1->mnt_pinned)) {
   FUNC_6(&VAR_0);
   FUNC_0(VAR_1);
   return;
  }
  FUNC_2(VAR_1->mnt_pinned + 1, &VAR_1->mnt_count);
  VAR_1->mnt_pinned = 0;
  FUNC_6(&VAR_0);
  FUNC_1(VAR_1);
  FUNC_5(VAR_1);
  goto repeat;
 }
}
