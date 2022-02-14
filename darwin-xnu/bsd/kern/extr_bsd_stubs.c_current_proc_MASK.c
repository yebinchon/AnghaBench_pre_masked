
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_t ;
struct uthread {int uu_flag; struct proc* uu_proc; } ;
struct proc {int p_lflag; void* p_vforkact; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct proc* VAR_2 ;
 int FUNC_4 (char*) ;

struct proc *
FUNC_5(void)
{

 struct uthread * VAR_3;
 struct proc * VAR_4;
 thread_t VAR_5 = FUNC_1();

 VAR_3 = (struct uthread *)FUNC_3(VAR_5);
 if (VAR_3 && (VAR_3->uu_flag & VAR_1) && VAR_3->uu_proc) {
  VAR_4 = VAR_3->uu_proc;
  if ((VAR_4->p_lflag & VAR_0) == 0)
   FUNC_4("returning child proc not under vfork");
  if (VAR_4->p_vforkact != (void *)VAR_5)
   FUNC_4("returning child proc which is not cur_act");
  return (VAR_4);
 }

 VAR_4 = (struct proc *)FUNC_2(FUNC_0());

 if (VAR_4 == ((void*)0))
  return (VAR_2);

 return (VAR_4);
}
