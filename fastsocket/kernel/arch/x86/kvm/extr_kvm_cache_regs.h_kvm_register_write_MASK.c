
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* regs; int regs_avail; int regs_dirty; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum kvm_reg { ____Placeholder_kvm_reg } kvm_reg ;


 int FUNC_0 (int,unsigned long*) ;

__attribute__((used)) static inline void FUNC_1(struct kvm_vcpu *VAR_0,
          enum kvm_reg VAR_1,
          unsigned long VAR_2)
{
 VAR_0->arch.regs[VAR_1] = VAR_2;
 FUNC_0(VAR_1, (unsigned long *)&VAR_0->arch.regs_dirty);
 FUNC_0(VAR_1, (unsigned long *)&VAR_0->arch.regs_avail);
}
