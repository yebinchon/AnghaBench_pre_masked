
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvmppc_vcpu_e500 {struct kvm_vcpu vcpu; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 struct kvm_vcpu* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvmppc_vcpu_e500*) ;

struct kvm_vcpu *FUNC_6(struct kvm *VAR_3, unsigned int VAR_4)
{
 struct kvmppc_vcpu_e500 *VAR_5;
 struct kvm_vcpu *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_6 = &VAR_5->vcpu;
 VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_4);
 if (VAR_7)
  goto free_vcpu;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto uninit_vcpu;

 return VAR_6;

uninit_vcpu:
 FUNC_4(VAR_6);
free_vcpu:
 FUNC_1(VAR_2, VAR_5);
out:
 return FUNC_0(VAR_7);
}
