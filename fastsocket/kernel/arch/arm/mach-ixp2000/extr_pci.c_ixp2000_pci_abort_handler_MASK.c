
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int ARM_pc; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int*,int volatile) ;
 int FUNC_1 (int*,int volatile) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_2 ;

int FUNC_4(unsigned long VAR_3, unsigned int VAR_4, struct pt_regs *VAR_5)
{

 volatile u32 VAR_6;
 unsigned long VAR_7;

 VAR_2 = 1;

 FUNC_3(VAR_7);
 VAR_6 = *(VAR_1);
 if (VAR_6 & ((1 << 8) | (1 << 5))) {
  FUNC_0(VAR_1, VAR_6);
 }

 VAR_6 = *(VAR_0);
 if (VAR_6 & (1 << 29)) {
  while (VAR_6 & (1 << 29)) {
   FUNC_1(VAR_0, VAR_6);
   VAR_6 = *(VAR_0);
  }
 }
 FUNC_2(VAR_7);





 if (VAR_4 & (1 << 10))
  VAR_5->ARM_pc += 4;

 return 0;
}
