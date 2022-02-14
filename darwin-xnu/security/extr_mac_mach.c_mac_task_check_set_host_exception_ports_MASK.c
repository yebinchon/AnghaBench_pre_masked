
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct proc {int dummy; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int *) ;
 struct proc* FUNC_3 (struct task*) ;
 int VAR_3 ;
 int FUNC_4 (struct proc*) ;

int
FUNC_5(struct task *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 struct proc *VAR_8 = FUNC_3(VAR_4);
 if (VAR_8 == ((void*)0))
  return VAR_0;

 kauth_cred_t VAR_9 = FUNC_1(VAR_8);
 for (VAR_7 = VAR_2; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_5 & (1 << VAR_7)) {
   FUNC_0(VAR_3, VAR_9, VAR_7);
   if (VAR_6)
    break;
  }
 }
 FUNC_2(&VAR_9);
 FUNC_4(VAR_8);
 return (VAR_6);
}
