
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_klist; } ;
struct TYPE_2__ {int p_proc; } ;
struct knote {TYPE_1__ kn_ptr; } ;


 int FUNC_0 (int *,struct knote*) ;
 int VAR_0 ;
 struct knote* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4(struct proc *VAR_1)
{
 struct knote *VAR_2 = ((void*)0);




 FUNC_2();
 while ((VAR_2 = FUNC_1(&VAR_1->p_klist))) {
  VAR_2->kn_ptr.p_proc = VAR_0;
  FUNC_0(&VAR_1->p_klist, VAR_2);
 }
 FUNC_3();
}
