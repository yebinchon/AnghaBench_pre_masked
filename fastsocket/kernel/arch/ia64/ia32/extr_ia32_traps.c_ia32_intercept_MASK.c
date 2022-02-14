
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int id; } ;


 TYPE_1__* FUNC_0 (struct pt_regs*) ;

int
FUNC_1 (struct pt_regs *VAR_0, unsigned long VAR_1)
{
 switch ((VAR_1 >> 16) & 0xff) {
       case 0:
       case 4:
       case 1:
  return -1;

       case 2:
  if (((VAR_1 >> 14) & 0x3) >= 2) {

   FUNC_0(VAR_0)->id = 1;
   return 0;
  } else
   return -1;
 }
 return -1;
}
