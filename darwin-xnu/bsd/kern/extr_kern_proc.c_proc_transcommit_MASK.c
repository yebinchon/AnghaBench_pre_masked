
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_lflag; scalar_t__ p_transholder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*) ;

void
FUNC_5(proc_t VAR_3, int VAR_4)
{
 if (VAR_4 == 0)
  FUNC_2(VAR_3);

 FUNC_0 ((VAR_3->p_lflag & VAR_0) == VAR_0);
 FUNC_0 (VAR_3->p_transholder == FUNC_1());
 VAR_3->p_lflag |= VAR_1;

 if ((VAR_3->p_lflag & VAR_2) == VAR_2) {
  VAR_3->p_lflag &= ~VAR_2;
  FUNC_4(&VAR_3->p_lflag);
 }
 if (VAR_4 == 0)
  FUNC_3(VAR_3);
}
