
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int* regs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3)
{
 u32 VAR_4 = VAR_3->arch.regs[VAR_1];
 u64 VAR_5;

 if (FUNC_3(VAR_3, VAR_4, &VAR_5)) {
  FUNC_0(VAR_3, 0);
  return 1;
 }

 FUNC_2(VAR_4, VAR_5);


 VAR_3->arch.regs[VAR_0] = VAR_5 & -1u;
 VAR_3->arch.regs[VAR_2] = (VAR_5 >> 32) & -1u;
 FUNC_1(VAR_3);
 return 1;
}
