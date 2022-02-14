
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_ssize_t ;
struct proc {int dummy; } ;
struct pread_nocancel_args {int dummy; } ;
struct pread_args {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*,struct pread_nocancel_args*,int *) ;

int
FUNC_2(struct proc *VAR_0, struct pread_args *VAR_1, user_ssize_t *VAR_2)
{
 FUNC_0(1);
 return(FUNC_1(VAR_0, (struct pread_nocancel_args *)VAR_1, VAR_2));
}
