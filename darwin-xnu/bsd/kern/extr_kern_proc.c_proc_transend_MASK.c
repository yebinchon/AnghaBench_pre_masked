
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_lflag; int * p_transholder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*) ;

void
FUNC_3(proc_t VAR_3, int VAR_4)
{
 if (VAR_4 == 0)
  FUNC_0(VAR_3);

 VAR_3->p_lflag &= ~( VAR_0 | VAR_1);
 VAR_3->p_transholder = ((void*)0);

 if ((VAR_3->p_lflag & VAR_2) == VAR_2) {
  VAR_3->p_lflag &= ~VAR_2;
  FUNC_2(&VAR_3->p_lflag);
 }
 if (VAR_4 == 0)
  FUNC_1(VAR_3);
}
