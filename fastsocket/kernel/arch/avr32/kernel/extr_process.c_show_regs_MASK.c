
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long sp; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_regs*,char*) ;
 int FUNC_1 (int ,unsigned long*,struct pt_regs*,char*) ;
 int FUNC_2 (struct pt_regs*) ;

void FUNC_3(struct pt_regs *VAR_2)
{
 unsigned long VAR_3 = VAR_2->sp;

 if (!FUNC_2(VAR_2))
  VAR_3 = (unsigned long)VAR_2 + VAR_0;

 FUNC_0(VAR_2, "");
 FUNC_1(VAR_1, (unsigned long *)VAR_3, VAR_2, "");
}
