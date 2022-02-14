
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {scalar_t__ p_childrencnt; int p_listflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__*) ;

void
FUNC_2(proc_t VAR_3)
{




 VAR_3->p_listflag |= VAR_0;
 if ((VAR_3->p_listflag & (VAR_2 |VAR_1)) != 0) {
  VAR_3->p_listflag &= ~(VAR_2 |VAR_1);
  FUNC_1(&VAR_3->p_childrencnt);
 }
}
