
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {TYPE_1__* run; int kvm; } ;
struct TYPE_2__ {scalar_t__ request_interrupt_window; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0)
{
 return (!FUNC_0(VAR_0->kvm) && !FUNC_2(VAR_0) &&
  VAR_0->run->request_interrupt_window &&
  FUNC_1(VAR_0));
}
