
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct plimit {scalar_t__ pl_refcnt; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_3__ {struct plimit* p_olimit; struct plimit* p_limit; } ;


 int FUNC_0 (struct plimit*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void
FUNC_3(proc_t VAR_1, int VAR_2)
{
 struct plimit * VAR_3 = ((void*)0);
 struct plimit * VAR_4 = ((void*)0);

 FUNC_1();

 if (--VAR_1->p_limit->pl_refcnt == 0) {
  VAR_3 = VAR_1->p_limit;
  VAR_1->p_limit = ((void*)0);
 }
 if ((VAR_2 != 0) && (VAR_1->p_olimit != ((void*)0)) && (--VAR_1->p_olimit->pl_refcnt == 0)) {
  VAR_4 = VAR_1->p_olimit;
  VAR_1->p_olimit = ((void*)0);
 }

 FUNC_2();
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3, sizeof *VAR_1->p_limit, VAR_0);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4, sizeof *VAR_1->p_olimit, VAR_0);
}
