
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct socket {int so_flags; int * so_cred; int e_pid; } ;
typedef scalar_t__ proc_t ;
typedef int * kauth_cred_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

int
FUNC_6(struct socket *VAR_2, int VAR_3, boolean_t VAR_4)
{
 kauth_cred_t VAR_5 = ((void*)0);
 proc_t VAR_6 = VAR_0;
 uid_t VAR_7;
 int VAR_8 = 0;

 if (VAR_2->so_flags & VAR_1) {
  VAR_6 = FUNC_4(VAR_2->e_pid);
  if (VAR_6)
   VAR_5 = FUNC_1(VAR_6);
 }

 VAR_7 = FUNC_0(VAR_5 ? VAR_5 : VAR_2->so_cred);


 if (VAR_7 != 0 || !VAR_4)
  VAR_8 = FUNC_3(VAR_5 ? VAR_5 : VAR_2->so_cred, VAR_3, 0);
 if (VAR_5)
  FUNC_2(&VAR_5);
 if (VAR_6 != VAR_0)
  FUNC_5(VAR_6);

 return (VAR_8);
}
