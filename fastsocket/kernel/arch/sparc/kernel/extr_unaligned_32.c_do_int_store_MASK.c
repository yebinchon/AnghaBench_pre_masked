
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned long*,int,unsigned long*) ;
 unsigned long FUNC_1 (int,struct pt_regs*) ;
 unsigned long* FUNC_2 (int,struct pt_regs*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, unsigned long *VAR_2,
   struct pt_regs *VAR_3)
{
 unsigned long VAR_4[2] = { 0, 0 };
 unsigned long *VAR_5;

 if (VAR_0)
  VAR_5 = FUNC_2(VAR_0, VAR_3);
 else {
  VAR_5 = &VAR_4[0];
  if (VAR_1 == 8)
   VAR_4[1] = FUNC_1(1, VAR_3);
 }
 return FUNC_0(VAR_2, VAR_1, VAR_5);
}
