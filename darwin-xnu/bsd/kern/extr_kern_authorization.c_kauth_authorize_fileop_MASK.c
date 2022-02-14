
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnode_t ;
typedef int kauth_cred_t ;
typedef scalar_t__ kauth_action_t ;
struct TYPE_3__ {int ks_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,uintptr_t,uintptr_t,uintptr_t,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*,int*) ;

int
FUNC_4(kauth_cred_t VAR_7, kauth_action_t VAR_8, uintptr_t VAR_9, uintptr_t VAR_10)
{
 char *VAR_11 = ((void*)0);
 int VAR_12;
 uintptr_t VAR_13 = 0;




 if ((VAR_6->ks_flags & VAR_4) == 0) {
  return(0);
 }

 if (VAR_8 == VAR_2 ||
     VAR_8 == VAR_0 ||
     VAR_8 == VAR_1 ||
     VAR_8 == VAR_3) {


  VAR_11 = FUNC_0();
  VAR_12 = VAR_5;
  if (FUNC_3((vnode_t)VAR_9, VAR_11, &VAR_12) != 0) {
   FUNC_2(VAR_11);
   return(0);
  }
  if (VAR_8 == VAR_0 ||
      VAR_8 == VAR_3) {






   VAR_13 = VAR_10;
  }
  VAR_10 = (uintptr_t)VAR_11;
 }
 FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_13, 0);

 if (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_11);
 }

 return(0);
}
