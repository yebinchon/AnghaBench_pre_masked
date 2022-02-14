
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {scalar_t__ uu_ucred; } ;
struct proc {int dummy; } ;
typedef struct proc* proc_t ;
typedef scalar_t__ kauth_cred_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 struct uthread* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct proc*) ;
 int FUNC_5 (char*) ;

kauth_cred_t
FUNC_6(void)
{
 struct proc *VAR_1;
 struct uthread *VAR_2;

 VAR_2 = FUNC_2(FUNC_0());

 if (VAR_2 == ((void*)0))
  FUNC_5("thread wants credential but has no BSD thread info");







 if (VAR_2->uu_ucred == VAR_0) {
  if ((VAR_1 = (proc_t) FUNC_1(FUNC_3(FUNC_0()))) == ((void*)0))
   FUNC_5("thread wants credential but has no BSD process");
  VAR_2->uu_ucred = FUNC_4(VAR_1);
 }
 return(VAR_2->uu_ucred);
}
