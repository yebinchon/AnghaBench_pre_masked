
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuid_regs {int edx; int ecx; int ebx; int eax; } ;


 int FUNC_0 (int ,int ,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct cpuid_regs *VAR_1 = (struct cpuid_regs *)VAR_0;

 FUNC_0(VAR_1->eax, VAR_1->ecx,
      &VAR_1->eax, &VAR_1->ebx, &VAR_1->ecx, &VAR_1->edx);
}
