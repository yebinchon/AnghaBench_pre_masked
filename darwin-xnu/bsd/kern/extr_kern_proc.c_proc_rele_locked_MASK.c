
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_4__ {scalar_t__ p_refcount; int p_listflag; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__*) ;

void
FUNC_3(proc_t VAR_1)
{

 if (VAR_1->p_refcount > 0) {
  VAR_1->p_refcount--;
  FUNC_1(VAR_1, -1);
  if ((VAR_1->p_refcount == 0) && ((VAR_1->p_listflag & VAR_0) == VAR_0)) {
   VAR_1->p_listflag &= ~VAR_0;
   FUNC_2(&VAR_1->p_refcount);
  }
 } else
  FUNC_0("proc_rele_locked  -ve ref\n");

}
