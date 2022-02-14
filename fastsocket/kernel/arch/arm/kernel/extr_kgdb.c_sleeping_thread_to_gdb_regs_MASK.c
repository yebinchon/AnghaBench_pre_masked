
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long ARM_r0; unsigned long ARM_r1; unsigned long ARM_r2; unsigned long ARM_r3; unsigned long ARM_r4; unsigned long ARM_r5; unsigned long ARM_r6; unsigned long ARM_r7; unsigned long ARM_r8; unsigned long ARM_r9; unsigned long ARM_r10; unsigned long ARM_fp; unsigned long ARM_ip; unsigned long ARM_sp; unsigned long ARM_lr; unsigned long ARM_pc; unsigned long ARM_cpsr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 struct pt_regs* FUNC_0 (struct task_struct*) ;

void
FUNC_1(unsigned long *VAR_18, struct task_struct *VAR_19)
{
 struct pt_regs *VAR_20;
 int VAR_21;


 if (VAR_19 == ((void*)0))
  return;


 for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++)
  VAR_18[VAR_21] = 0;


 VAR_20 = FUNC_0(VAR_19);
 VAR_18[VAR_6] = VAR_20->ARM_r0;
 VAR_18[VAR_7] = VAR_20->ARM_r1;
 VAR_18[VAR_9] = VAR_20->ARM_r2;
 VAR_18[VAR_10] = VAR_20->ARM_r3;
 VAR_18[VAR_11] = VAR_20->ARM_r4;
 VAR_18[VAR_12] = VAR_20->ARM_r5;
 VAR_18[VAR_13] = VAR_20->ARM_r6;
 VAR_18[VAR_14] = VAR_20->ARM_r7;
 VAR_18[VAR_15] = VAR_20->ARM_r8;
 VAR_18[VAR_16] = VAR_20->ARM_r9;
 VAR_18[VAR_8] = VAR_20->ARM_r10;
 VAR_18[VAR_2] = VAR_20->ARM_fp;
 VAR_18[VAR_3] = VAR_20->ARM_ip;
 VAR_18[VAR_17] = VAR_20->ARM_sp;
 VAR_18[VAR_4] = VAR_20->ARM_lr;
 VAR_18[VAR_5] = VAR_20->ARM_pc;
 VAR_18[VAR_1] = VAR_20->ARM_cpsr;
}
