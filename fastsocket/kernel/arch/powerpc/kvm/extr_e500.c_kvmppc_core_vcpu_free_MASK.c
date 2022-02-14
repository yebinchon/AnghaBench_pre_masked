
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ,struct kvmppc_vcpu_e500*) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct kvmppc_vcpu_e500 *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2);
 FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_2);
}
