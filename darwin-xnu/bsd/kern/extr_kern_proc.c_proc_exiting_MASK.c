
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {int p_lflag; } ;


 int VAR_0 ;

int
FUNC_0(proc_t VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1)
  VAR_2 = VAR_1->p_lflag & VAR_0;
 return(VAR_2? 1: 0);
}
