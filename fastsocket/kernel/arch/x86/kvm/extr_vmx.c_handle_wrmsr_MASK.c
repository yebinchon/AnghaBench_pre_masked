
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned int u32 ;
struct msr_data {int data; unsigned int index; int host_initiated; } ;
struct TYPE_2__ {unsigned int* regs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (unsigned int,int) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,struct msr_data*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3)
{
 struct msr_data VAR_4;
 u32 VAR_5 = VAR_3->arch.regs[VAR_1];
 u64 VAR_6 = (VAR_3->arch.regs[VAR_0] & -1u)
  | ((u64)(VAR_3->arch.regs[VAR_2] & -1u) << 32);

 FUNC_2(VAR_5, VAR_6);

 VAR_4.data = VAR_6;
 VAR_4.index = VAR_5;
 VAR_4.host_initiated = 0;
 if (FUNC_3(VAR_3, &VAR_4) != 0) {
  FUNC_0(VAR_3, 0);
  return 1;
 }

 FUNC_1(VAR_3);
 return 1;
}
