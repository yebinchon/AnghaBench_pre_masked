
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pv_cpu_asm_switch {unsigned long switch_to; unsigned long leave_syscall; unsigned long work_processed_syscall; unsigned long leave_kernel; } ;



void
FUNC_0(const struct pv_cpu_asm_switch *VAR_0)
{
 extern unsigned long VAR_1;
 extern unsigned long VAR_2;
 extern unsigned long VAR_3;
 extern unsigned long VAR_4;

 VAR_1 = VAR_0->switch_to;
 VAR_2 = VAR_0->leave_syscall;
 VAR_3 =
  VAR_0->work_processed_syscall;
 VAR_4 = VAR_0->leave_kernel;
}
