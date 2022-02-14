
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log_buf; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0,
    struct kvm_run *VAR_1)
{
 FUNC_0("VMM: %s", VAR_0->arch.log_buf);
 return 1;
}
