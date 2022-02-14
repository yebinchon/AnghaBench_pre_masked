
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct task {int dummy; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ucred*,struct proc*) ;
 struct ucred* FUNC_1 () ;
 struct proc* FUNC_2 (struct task*) ;
 int VAR_1 ;
 int FUNC_3 (struct proc*) ;

int
FUNC_4(struct task *VAR_2)
{
 int VAR_3;

 struct proc *VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == ((void*)0))
  return VAR_0;

 struct ucred *VAR_5 = FUNC_1();
 FUNC_0(VAR_1, VAR_5, VAR_4);
 FUNC_3(VAR_4);
 return (VAR_3);
}
