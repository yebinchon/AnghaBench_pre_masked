
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
struct TYPE_3__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

int
FUNC_0 (u32 VAR_4)
{
  int VAR_5;

  if (VAR_2->numcodebreakpoints < VAR_1)
    {

      for (VAR_5 = 0; VAR_5 < VAR_2->numcodebreakpoints; VAR_5++)
        {
          if (VAR_4 == VAR_2->codebreakpoint[VAR_5].addr)
            return -1;
        }

      VAR_2->codebreakpoint[VAR_5].addr = VAR_4;
      VAR_2->numcodebreakpoints++;
      VAR_3 = VAR_0;

      return 0;
    }

  return -1;
}
