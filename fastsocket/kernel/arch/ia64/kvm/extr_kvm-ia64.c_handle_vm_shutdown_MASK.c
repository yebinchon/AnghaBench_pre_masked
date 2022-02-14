
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_run {int exit_reason; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_1,
  struct kvm_run *VAR_2)
{
 VAR_2->exit_reason = VAR_0;
 return 0;
}
