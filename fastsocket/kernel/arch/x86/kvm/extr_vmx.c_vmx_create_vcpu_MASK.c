
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int cpu; } ;
struct vcpu_vmx {struct kvm_vcpu vcpu; int guest_msrs; int vmcs; } ;
struct TYPE_2__ {scalar_t__ ept_identity_map_addr; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 struct kvm_vcpu* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct kvm*) ;
 scalar_t__ FUNC_2 (struct kvm*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct vcpu_vmx*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct vcpu_vmx*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct kvm*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct vcpu_vmx*) ;
 struct vcpu_vmx* FUNC_12 (int ,int ) ;
 int VAR_5 ;
 int FUNC_13 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (struct kvm*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct kvm_vcpu*,int) ;
 int FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct vcpu_vmx*) ;

__attribute__((used)) static struct kvm_vcpu *FUNC_21(struct kvm *VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 struct vcpu_vmx *VAR_9 = FUNC_12(VAR_5, VAR_1);
 int VAR_10;

 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_4(VAR_9);

 VAR_8 = FUNC_13(&VAR_9->vcpu, VAR_6, VAR_7);
 if (VAR_8)
  goto free_vcpu;

 VAR_9->guest_msrs = FUNC_10(VAR_2, VAR_1);
 if (!VAR_9->guest_msrs) {
  VAR_8 = -VAR_0;
  goto uninit_vcpu;
 }

 VAR_9->vmcs = FUNC_3();
 if (!VAR_9->vmcs)
  goto free_msrs;

 FUNC_17(VAR_9->vmcs);

 VAR_10 = FUNC_7();
 FUNC_18(&VAR_9->vcpu, VAR_10);
 VAR_9->vcpu.cpu = VAR_10;
 VAR_8 = FUNC_20(VAR_9);
 FUNC_19(&VAR_9->vcpu);
 FUNC_15();
 if (VAR_8)
  goto free_vmcs;
 if (FUNC_16(VAR_6))
  if (FUNC_1(VAR_6) != 0)
   goto free_vmcs;

 if (VAR_4) {
  if (!VAR_6->arch.ept_identity_map_addr)
   VAR_6->arch.ept_identity_map_addr =
    VAR_3;
  VAR_8 = -VAR_0;
  if (FUNC_2(VAR_6) != 0)
   goto free_vmcs;
  if (!FUNC_8(VAR_6))
   goto free_vmcs;
 }

 return &VAR_9->vcpu;

free_vmcs:
 FUNC_5(VAR_9->vmcs);
free_msrs:
 FUNC_9(VAR_9->guest_msrs);
uninit_vcpu:
 FUNC_14(&VAR_9->vcpu);
free_vcpu:
 FUNC_6(VAR_9);
 FUNC_11(VAR_5, VAR_9);
 return FUNC_0(VAR_8);
}
