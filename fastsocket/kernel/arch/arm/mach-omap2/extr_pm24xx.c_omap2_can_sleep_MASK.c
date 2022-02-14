
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usecount; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(void)
{
 if (FUNC_0())
  return 0;
 if (VAR_0->usecount > 1)
  return 0;
 if (FUNC_1())
  return 0;

 return 1;
}
