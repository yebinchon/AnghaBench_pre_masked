
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_sigignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;

void
FUNC_1(proc_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3[VAR_5] & VAR_1 && VAR_5 != VAR_2)
   VAR_4->p_sigignore |= FUNC_0(VAR_5);
}
