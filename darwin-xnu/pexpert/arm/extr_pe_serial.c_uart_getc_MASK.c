
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* rd0 ) () ;int (* rr0 ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;

int
FUNC_2(void)
{
 if (VAR_1) {
  if (!VAR_0->rr0())
   return -1;
  return VAR_0->rd0();
 }
 return -1;
}
