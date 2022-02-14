
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct kvmppc_vcpu_e500 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);

 return 0;
}
