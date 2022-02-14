
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* regs; unsigned long pc; int sr; } ;
typedef int regs ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,int ,struct pt_regs*,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pt_regs*,int ,int) ;

int FUNC_2(int (*VAR_3)(void *), void * VAR_4, unsigned long VAR_5)
{
 struct pt_regs VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.regs[2] = (unsigned long)VAR_4;
 VAR_6.regs[3] = (unsigned long)VAR_3;

 VAR_6.pc = (unsigned long)VAR_2;
 VAR_6.sr = (1 << 30);


 return FUNC_0(VAR_5 | VAR_1 | VAR_0, 0,
        &VAR_6, 0, ((void*)0), ((void*)0));
}
