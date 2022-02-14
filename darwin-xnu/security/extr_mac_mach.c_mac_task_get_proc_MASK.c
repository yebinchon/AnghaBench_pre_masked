
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct proc {int dummy; } ;


 struct task* FUNC_0 () ;
 struct proc* FUNC_1 (int) ;
 int FUNC_2 (struct proc*) ;
 struct proc* FUNC_3 () ;
 struct task* FUNC_4 (struct proc*) ;
 int FUNC_5 (struct task*) ;

__attribute__((used)) static struct proc *
FUNC_6(struct task *VAR_0)
{
 if (VAR_0 == FUNC_0())
  return FUNC_3();





 int VAR_1 = FUNC_5(VAR_0);
 struct proc *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 != ((void*)0)) {
  if (FUNC_4(VAR_2) == VAR_0)
   return VAR_2;
  FUNC_2(VAR_2);
 }
 return ((void*)0);
}
