
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; unsigned long* u_regs; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;

unsigned long FUNC_1(struct pt_regs *VAR_1)
{
 extern char VAR_2[], VAR_3[];
 extern char VAR_4[], VAR_5[];
 extern char VAR_6[], VAR_7[];

 unsigned long VAR_8 = VAR_1->pc;

 if (FUNC_0(VAR_8) ||
     (VAR_8 >= (unsigned long) VAR_2 &&
      VAR_8 < (unsigned long) VAR_3) ||
     (VAR_8 >= (unsigned long) VAR_4 &&
      VAR_8 < (unsigned long) VAR_5) ||
     (VAR_8 >= (unsigned long) VAR_6 &&
      VAR_8 < (unsigned long) VAR_7))
  VAR_8 = VAR_1->u_regs[VAR_0];
 return VAR_8;
}
