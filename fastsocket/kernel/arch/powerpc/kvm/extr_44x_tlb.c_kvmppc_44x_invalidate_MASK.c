
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_44x {struct kvmppc_44x_shadow_ref* shadow_refs; } ;
struct kvmppc_44x_shadow_ref {unsigned int gtlb_index; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvmppc_44x_shadow_ref*) ;
 int FUNC_1 (struct kvmppc_vcpu_44x*,int) ;
 struct kvmppc_vcpu_44x* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0,
                                  unsigned int VAR_1)
{
 struct kvmppc_vcpu_44x *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->shadow_refs); VAR_3++) {
  struct kvmppc_44x_shadow_ref *VAR_4 = &VAR_2->shadow_refs[VAR_3];
  if (VAR_4->gtlb_index == VAR_1)
   FUNC_1(VAR_2, VAR_3);
 }
}
