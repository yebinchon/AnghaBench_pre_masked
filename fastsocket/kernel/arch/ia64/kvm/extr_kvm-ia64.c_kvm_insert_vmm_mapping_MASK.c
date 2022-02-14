
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vmm_tr_slot; int vm_tr_slot; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct TYPE_4__ {scalar_t__ is_sn2; int vm_base; } ;
struct kvm {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,unsigned long,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 unsigned long FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_6)
{
 unsigned long VAR_7;
 struct kvm *VAR_8 = VAR_6->kvm;
 int VAR_9;


 VAR_7 = FUNC_4(FUNC_3(FUNC_0(VAR_5), VAR_4));
 VAR_9 = FUNC_1(0x3, VAR_0, VAR_7, VAR_1);
 if (VAR_9 < 0)
  goto out;
 VAR_6->arch.vmm_tr_slot = VAR_9;

 VAR_7 = FUNC_4(FUNC_3(FUNC_0(VAR_8->arch.vm_base), VAR_4));
 VAR_9 = FUNC_1(0x3, VAR_2,
     VAR_7, VAR_3);
 if (VAR_9 < 0)
  goto out;
 VAR_6->arch.vm_tr_slot = VAR_9;
 VAR_9 = 0;
out:
 return VAR_9;
}
