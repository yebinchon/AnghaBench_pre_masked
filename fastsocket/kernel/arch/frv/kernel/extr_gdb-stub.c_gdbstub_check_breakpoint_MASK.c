
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pc; } ;
struct TYPE_3__ {unsigned long addr; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned long VAR_2 = VAR_0->pc - 4;
 int VAR_3;

 for (VAR_3 = 255; VAR_3 >= 0; VAR_3--)
  if (VAR_1[VAR_3].addr == VAR_2)
   break;
 if (VAR_3 >= 0)
  VAR_0->pc = VAR_2;



}
