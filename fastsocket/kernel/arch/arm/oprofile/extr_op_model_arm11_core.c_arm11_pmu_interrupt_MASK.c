
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pt_regs {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 struct pt_regs* FUNC_4 () ;
 int FUNC_5 (struct pt_regs*,int ) ;
 int FUNC_6 () ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct pt_regs *VAR_7 = FUNC_4();
 unsigned int VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_1();

 for (VAR_8 = VAR_4; VAR_8 <= VAR_0; VAR_8++) {
  if ((VAR_9 & (VAR_3 << VAR_8)) && (VAR_9 & (VAR_2 << VAR_8))) {
   FUNC_2(VAR_8);
   FUNC_5(VAR_7, FUNC_0(FUNC_6(), VAR_8));
  }
 }

 FUNC_3(VAR_9);
 return VAR_1;
}
