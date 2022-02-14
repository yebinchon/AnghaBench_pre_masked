
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long icucr; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_3)
{
 unsigned long VAR_4, VAR_5;

 if ((VAR_3 == 0) ||(VAR_3 >= VAR_1)) {
  FUNC_2("bad irq 0x%08x\n", VAR_3);
  return;
 }
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_2[VAR_3].icucr|VAR_0;
 FUNC_1(VAR_5, VAR_4);
}
