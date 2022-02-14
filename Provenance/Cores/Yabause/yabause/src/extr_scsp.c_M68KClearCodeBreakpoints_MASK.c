
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ numcodebreakpoints; TYPE_1__* codebreakpoint; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void
FUNC_0 ()
{
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    VAR_1->codebreakpoint[VAR_2].addr = 0xFFFFFFFF;

  VAR_1->numcodebreakpoints = 0;
}
