
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct proc {int dummy; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int *) ;
 struct proc* FUNC_3 (struct task*) ;
 int VAR_1 ;
 int FUNC_4 (struct proc*) ;

int
FUNC_5(struct task *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 struct proc *VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 == ((void*)0))
  return VAR_0;

 kauth_cred_t VAR_6 = FUNC_1(VAR_5);
 FUNC_0(VAR_1, VAR_6, VAR_3);
 FUNC_2(&VAR_6);
 FUNC_4(VAR_5);
 return (VAR_4);
}
