
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_listflag; int p_stat; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

void
FUNC_3(proc_t VAR_1)
{
 FUNC_0();
 if ((VAR_1->p_listflag & VAR_0) == VAR_0) {
  VAR_1->p_listflag &= ~VAR_0;
  FUNC_2(&VAR_1->p_stat);
 }
 FUNC_1();
}
