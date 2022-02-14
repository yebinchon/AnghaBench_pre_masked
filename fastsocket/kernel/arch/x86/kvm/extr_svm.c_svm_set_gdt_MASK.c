
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vcpu_svm {TYPE_3__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct descriptor_table {int base; int limit; } ;
struct TYPE_4__ {int base; int limit; } ;
struct TYPE_5__ {TYPE_1__ gdtr; } ;
struct TYPE_6__ {TYPE_2__ save; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, struct descriptor_table *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_1(VAR_1);

 VAR_3->vmcb->save.gdtr.limit = VAR_2->limit;
 VAR_3->vmcb->save.gdtr.base = VAR_2->base ;
 FUNC_0(VAR_3->vmcb, VAR_0);
}
