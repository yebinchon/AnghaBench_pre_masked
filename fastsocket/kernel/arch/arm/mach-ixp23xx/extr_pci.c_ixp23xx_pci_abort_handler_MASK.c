
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ARM_pc; } ;


 unsigned long volatile* VAR_0 ;
 unsigned long volatile* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_2 ;

int FUNC_2(unsigned long VAR_3, unsigned int VAR_4, struct pt_regs *VAR_5)
{
 volatile unsigned long VAR_6;
 unsigned long VAR_7;

 VAR_2 = 1;

 FUNC_1(VAR_7);
 VAR_6 = *VAR_1;




 if (VAR_6 & ((1 << 8) | (1 << 5)))
  *VAR_1 = VAR_6;

 VAR_6 = *VAR_0;

 if (VAR_6 & (1 << 29))
  *VAR_0 = VAR_6;
 FUNC_0(VAR_7);





 if (VAR_4 & (1 << 10))
  VAR_5->ARM_pc += 4;

 return 0;
}
