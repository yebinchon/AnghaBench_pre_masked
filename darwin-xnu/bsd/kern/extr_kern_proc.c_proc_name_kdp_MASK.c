
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int task_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int * p_comm; int * p_name; } ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int ) ;

void
FUNC_3(task_t VAR_1, char * VAR_2, int VAR_3)
{
 proc_t VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == VAR_0)
  return;

 if ((size_t)VAR_3 > sizeof(VAR_4->p_comm))
  FUNC_2(VAR_2, &VAR_4->p_name[0], FUNC_0((int)sizeof(VAR_4->p_name), VAR_3));
 else
  FUNC_2(VAR_2, &VAR_4->p_comm[0], FUNC_0((int)sizeof(VAR_4->p_comm), VAR_3));
}
