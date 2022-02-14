
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_listflag; scalar_t__ p_parentref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;

void
FUNC_2(proc_t VAR_3)
{




 VAR_3->p_listflag |= VAR_0;

 while (VAR_3->p_parentref > 0) {
  VAR_3->p_listflag |= VAR_1;
  FUNC_0(&VAR_3->p_parentref, VAR_2, 0, "proc_childdrainstart", 0) ;
 }
}
