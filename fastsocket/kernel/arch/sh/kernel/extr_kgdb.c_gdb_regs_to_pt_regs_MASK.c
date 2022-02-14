
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* regs; unsigned long pc; unsigned long pr; unsigned long sr; unsigned long gbr; unsigned long mach; unsigned long macl; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

void FUNC_0(unsigned long *VAR_7, struct pt_regs *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++)
  VAR_8->regs[VAR_5 + VAR_9] = VAR_7[VAR_5 + VAR_9];

 VAR_8->pc = VAR_7[VAR_3];
 VAR_8->pr = VAR_7[VAR_4];
 VAR_8->sr = VAR_7[VAR_6];
 VAR_8->gbr = VAR_7[VAR_0];
 VAR_8->mach = VAR_7[VAR_1];
 VAR_8->macl = VAR_7[VAR_2];
}
