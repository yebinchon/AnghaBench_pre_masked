
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_flag; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(proc_t VAR_1, void * VAR_2)
{
 int VAR_3 = *(int*)VAR_2;

 if ((VAR_3 == 0) || VAR_1->p_flag & VAR_0)
  return(1);
 else
  return(0);
}
