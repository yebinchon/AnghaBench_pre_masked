
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid_filter; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(unsigned VAR_3, int VAR_4)
{
 if ((VAR_3 > VAR_1) || (VAR_3 == 0)) {
  return VAR_0;
 }

 VAR_2[VAR_3 - 1].pid_filter = VAR_4;

 return 0;
}
