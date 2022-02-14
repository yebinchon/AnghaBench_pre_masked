
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct kvmppc_vcpu_e500*,int ,int,unsigned int,int) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0,
    gva_t VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct kvmppc_vcpu_e500 *VAR_4 = FUNC_2(VAR_0);
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_6, VAR_2, VAR_3);
  if (VAR_5 >= 0)
   return FUNC_0(VAR_6, VAR_5);
 }

 return -1;
}
