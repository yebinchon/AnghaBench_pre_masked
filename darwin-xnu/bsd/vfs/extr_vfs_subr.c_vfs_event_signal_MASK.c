
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct mount {int mnt_kern_flag; } ;
typedef int fsid_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 struct mount* FUNC_5 (int *) ;

void
FUNC_6(fsid_t *VAR_5, u_int32_t VAR_6, intptr_t VAR_7)
{
 if (VAR_6 == VAR_1 || VAR_6 == VAR_2) {
  struct mount *VAR_8 = FUNC_5(VAR_5);
  if (VAR_8) {
   FUNC_3(VAR_8);
   if (VAR_7)
    VAR_8->mnt_kern_flag &= ~VAR_0;
   else
    VAR_8->mnt_kern_flag |= VAR_0;
   FUNC_4(VAR_8);
  }
 }

 FUNC_1(VAR_4);
 FUNC_0(&VAR_3, VAR_6);
 FUNC_2(VAR_4);
}
