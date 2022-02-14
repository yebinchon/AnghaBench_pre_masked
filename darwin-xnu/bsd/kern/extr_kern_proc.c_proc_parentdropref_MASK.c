
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {scalar_t__ p_parentref; int p_listflag; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__*) ;

int
FUNC_4(proc_t VAR_1, int VAR_2)
{
 if (VAR_2 == 0)
  FUNC_1();

 if (VAR_1->p_parentref > 0) {
  VAR_1->p_parentref--;
  if ((VAR_1->p_parentref == 0) && ((VAR_1->p_listflag & VAR_0) == VAR_0)) {
   VAR_1->p_listflag &= ~VAR_0;
   FUNC_3(&VAR_1->p_parentref);
  }
 } else
  FUNC_0("proc_parentdropref  -ve ref\n");
 if (VAR_2 == 0)
  FUNC_2();

 return(0);
}
