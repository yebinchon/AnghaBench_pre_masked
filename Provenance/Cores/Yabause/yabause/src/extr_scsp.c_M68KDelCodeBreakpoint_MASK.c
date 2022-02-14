
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int Exec; } ;
struct TYPE_5__ {int numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
struct TYPE_4__ {int addr; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

int
FUNC_1 (u32 VAR_3)
{
  int VAR_4;
  if (VAR_1->numcodebreakpoints > 0)
    {
      for (VAR_4 = 0; VAR_4 < VAR_1->numcodebreakpoints; VAR_4++)
        {
          if (VAR_1->codebreakpoint[VAR_4].addr == VAR_3)
            {
              VAR_1->codebreakpoint[VAR_4].addr = 0xFFFFFFFF;
              FUNC_0 ();
              VAR_1->numcodebreakpoints--;
              if (VAR_1->numcodebreakpoints == 0)
                VAR_2 = VAR_0->Exec;
              return 0;
            }
        }
    }

  return -1;
}
