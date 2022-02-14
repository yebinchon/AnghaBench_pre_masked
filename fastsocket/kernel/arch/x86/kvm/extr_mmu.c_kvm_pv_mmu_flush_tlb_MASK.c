
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cr3; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0)
{
 (void)FUNC_0(VAR_0, VAR_0->arch.cr3);
 return 1;
}
