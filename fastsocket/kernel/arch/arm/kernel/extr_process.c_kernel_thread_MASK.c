
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ARM_r1; unsigned long ARM_r2; unsigned long ARM_r3; unsigned long ARM_pc; int ARM_cpsr; } ;
typedef int regs ;
typedef int pid_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long,int ,struct pt_regs*,int ,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct pt_regs*,int ,int) ;

pid_t FUNC_2(int (*VAR_7)(void *), void *VAR_8, unsigned long VAR_9)
{
 struct pt_regs VAR_10;

 FUNC_1(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.ARM_r1 = (unsigned long)VAR_8;
 VAR_10.ARM_r2 = (unsigned long)VAR_7;
 VAR_10.ARM_r3 = (unsigned long)VAR_5;
 VAR_10.ARM_pc = (unsigned long)VAR_6;
 VAR_10.ARM_cpsr = VAR_4 | VAR_2 | VAR_3;

 return FUNC_0(VAR_9|VAR_1|VAR_0, 0, &VAR_10, 0, ((void*)0), ((void*)0));
}
