
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xcr0; } ;
struct kvm_vcpu {int guest_xcr0_loaded; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2)
{
 if (FUNC_0(VAR_2, VAR_0) &&
   !VAR_2->guest_xcr0_loaded) {

  FUNC_1(VAR_1, VAR_2->arch.xcr0);
  VAR_2->guest_xcr0_loaded = 1;
 }
}
