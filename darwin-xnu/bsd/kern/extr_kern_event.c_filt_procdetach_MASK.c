
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc {int p_klist; } ;
struct TYPE_2__ {struct proc* p_proc; } ;
struct knote {TYPE_1__ kn_ptr; } ;


 int FUNC_0 (int *,struct knote*) ;
 struct proc* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_1)
{
 struct proc *VAR_2;

 FUNC_1();

 VAR_2 = VAR_1->kn_ptr.p_proc;
 if (VAR_2 != VAR_0) {
  VAR_1->kn_ptr.p_proc = VAR_0;
  FUNC_0(&VAR_2->p_klist, VAR_1);
 }

 FUNC_2();
}
