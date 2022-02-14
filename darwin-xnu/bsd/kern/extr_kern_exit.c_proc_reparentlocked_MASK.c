
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_9__ {scalar_t__ p_childrencnt; scalar_t__ p_stat; int p_pid; int p_ppid; struct TYPE_9__* p_pptr; int p_children; } ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(proc_t VAR_5, proc_t VAR_6, int VAR_7, int VAR_8)
{
 proc_t VAR_9 = VAR_0;

 if (VAR_5->p_pptr == VAR_6)
  return;

 if (VAR_8 == 0)
  FUNC_3();

 VAR_9 = VAR_5->p_pptr;





 FUNC_1(VAR_5, VAR_4);




 VAR_9->p_childrencnt--;




 FUNC_0(&VAR_6->p_children, VAR_5, VAR_4);
 VAR_6->p_childrencnt++;
 VAR_5->p_pptr = VAR_6;
 VAR_5->p_ppid = VAR_6->p_pid;

 FUNC_4();

 if ((VAR_7 != 0) && (VAR_3 == VAR_6) && (VAR_5->p_stat == VAR_2))
  FUNC_5(VAR_3, VAR_1);
 if (VAR_8 == 1)
  FUNC_3();
}
