
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int * p_comm; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int *,int) ;

void
FUNC_2(char * VAR_0, int VAR_1)
{
 proc_t VAR_2;

 if ((VAR_2 = FUNC_0())!= (proc_t)0) {
  FUNC_1(VAR_0, &VAR_2->p_comm[0], VAR_1);
 }
}
