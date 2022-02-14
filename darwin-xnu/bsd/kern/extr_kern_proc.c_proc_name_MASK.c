
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int * p_comm; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int *,int) ;

void
FUNC_3(int VAR_1, char * VAR_2, int VAR_3)
{
 proc_t VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1)) != VAR_0) {
  FUNC_2(VAR_2, &VAR_4->p_comm[0], VAR_3);
  FUNC_1(VAR_4);
 }
}
