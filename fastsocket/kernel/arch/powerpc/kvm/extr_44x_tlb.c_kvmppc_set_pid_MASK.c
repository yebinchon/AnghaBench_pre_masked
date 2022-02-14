
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvmppc_vcpu_44x {struct kvmppc_44x_shadow_ref* shadow_refs; } ;
struct kvmppc_44x_shadow_ref {scalar_t__ tid; } ;
struct TYPE_2__ {scalar_t__ pid; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvmppc_44x_shadow_ref*) ;
 int FUNC_1 (struct kvmppc_vcpu_44x*,int) ;
 struct kvmppc_vcpu_44x* FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 struct kvmppc_vcpu_44x *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 if (FUNC_3(VAR_0->arch.pid == VAR_1))
  return;

 VAR_0->arch.pid = VAR_1;





 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->shadow_refs); VAR_3++) {
  struct kvmppc_44x_shadow_ref *VAR_4 = &VAR_2->shadow_refs[VAR_3];

  if (VAR_4->tid == 0)
   FUNC_1(VAR_2, VAR_3);
 }
}
