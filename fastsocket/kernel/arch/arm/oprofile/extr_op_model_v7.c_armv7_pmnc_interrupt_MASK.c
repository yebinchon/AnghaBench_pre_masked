
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct pt_regs* FUNC_5 () ;
 int FUNC_6 (struct pt_regs*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct pt_regs *VAR_7 = FUNC_5();
 unsigned int VAR_8;
 u32 VAR_9;





 FUNC_4();




 VAR_9 = FUNC_1();




 if (VAR_9 & VAR_3) {
  u32 VAR_10 = FUNC_0(FUNC_7(), VAR_0);
  FUNC_2(VAR_0);
  FUNC_6(VAR_7, VAR_10);
 }




 for (VAR_8 = VAR_1; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_9 & (1 << (VAR_8 - VAR_1))) {
   u32 VAR_11 = FUNC_0(FUNC_7(), VAR_8);
   FUNC_2(VAR_8);
   FUNC_6(VAR_7, VAR_11);
  }
 }




 FUNC_3();

 return VAR_4;
}
