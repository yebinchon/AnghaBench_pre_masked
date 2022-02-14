
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* p_proc; } ;
struct knote {TYPE_1__ kn_ptr; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_4__ {int p_klist; } ;


 int FUNC_0 (int *,struct knote*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct knote *VAR_0)
{
 proc_t VAR_1 = VAR_0->kn_ptr.p_proc;

 FUNC_1();
 VAR_0->kn_ptr.p_proc = ((void*)0);
 FUNC_0(&VAR_1->p_klist, VAR_0);
 FUNC_2();
}
