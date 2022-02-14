
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
typedef int caddr_t ;
struct TYPE_5__ {int mnt_lflag; int mnt_rwlock; int mnt_mlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *,int,char*,int *) ;

int
FUNC_5(mount_t VAR_7, int VAR_8)
{

restart:
 if (VAR_7->mnt_lflag & VAR_2)
  return (VAR_0);

 FUNC_2(VAR_7);

 if (VAR_7->mnt_lflag & VAR_3) {
  if (VAR_8 & VAR_1 || VAR_7->mnt_lflag & VAR_2) {
          FUNC_3(VAR_7);
   return (VAR_0);
  }







  VAR_7->mnt_lflag |= VAR_4;
  FUNC_4((caddr_t)VAR_7, &VAR_7->mnt_mlock, (VAR_6 | VAR_5), "vfsbusy", ((void*)0));
  return (VAR_0);
 }

 FUNC_3(VAR_7);

 FUNC_1(&VAR_7->mnt_rwlock);





 if (VAR_7->mnt_lflag & (VAR_2 | VAR_3)) {
  FUNC_0(&VAR_7->mnt_rwlock);
  goto restart;
 }
 return (0);
}
