
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs_dirty; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_3)
{
 FUNC_0(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_2);
 FUNC_0(VAR_3, VAR_1);
 VAR_3->arch.regs_dirty = ~0;
}
