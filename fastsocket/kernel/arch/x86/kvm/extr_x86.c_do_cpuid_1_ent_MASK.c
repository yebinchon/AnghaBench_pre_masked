
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct kvm_cpuid_entry2 {scalar_t__ flags; int edx; int ecx; int ebx; int eax; void* index; void* function; } ;


 int FUNC_0 (void*,void*,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kvm_cpuid_entry2 *VAR_0, u32 VAR_1,
      u32 VAR_2)
{
 VAR_0->function = VAR_1;
 VAR_0->index = VAR_2;
 FUNC_0(VAR_0->function, VAR_0->index,
      &VAR_0->eax, &VAR_0->ebx, &VAR_0->ecx, &VAR_0->edx);
 VAR_0->flags = 0;
}
