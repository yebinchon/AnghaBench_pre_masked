
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sync_type_t ;
typedef TYPE_1__* mount_t ;
struct TYPE_4__ {int mnt_kern_flag; int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_1(mount_t VAR_5, void *VAR_6)
{
 if (VAR_6) {
  int VAR_7 = !(VAR_5->mnt_kern_flag & VAR_0) &&
                     (VAR_5->mnt_flag & VAR_1);
  sync_type_t VAR_8 = *((sync_type_t *)VAR_6);

  if ((VAR_8 == VAR_2) && !VAR_7)
   return (VAR_4);
  else if ((VAR_8 = VAR_3) && VAR_7)
   return (VAR_4);
 }

 (void)FUNC_0(VAR_5, ((void*)0));

 return (VAR_4);
}
