
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long icucr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_4)
{
 unsigned long VAR_5, VAR_6;

 if ((VAR_4 == 0) ||(VAR_4 >= VAR_2)) {
  FUNC_2("bad irq 0x%08x\n", VAR_4);
  return;
 }
 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = VAR_3[VAR_4].icucr|VAR_0|VAR_1;
 FUNC_1(VAR_6, VAR_5);
}
