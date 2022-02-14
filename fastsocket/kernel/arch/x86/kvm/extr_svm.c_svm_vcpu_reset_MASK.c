
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sipi_vector; } ;
struct TYPE_10__ {TYPE_3__ arch; } ;
struct vcpu_svm {TYPE_6__* vmcb; TYPE_4__ vcpu; } ;
struct TYPE_11__ {int regs_dirty; int regs_avail; } ;
struct kvm_vcpu {TYPE_5__ arch; } ;
struct TYPE_7__ {int base; int selector; } ;
struct TYPE_8__ {TYPE_1__ cs; } ;
struct TYPE_12__ {TYPE_2__ save; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);

 if (!FUNC_2(VAR_1)) {
  FUNC_1(VAR_1, 0);
  VAR_2->vmcb->save.cs.base = VAR_2->vcpu.arch.sipi_vector << 12;
  VAR_2->vmcb->save.cs.selector = VAR_2->vcpu.arch.sipi_vector << 8;
  FUNC_3(VAR_2->vmcb, VAR_0);
 }
 VAR_1->arch.regs_avail = ~0;
 VAR_1->arch.regs_dirty = ~0;

 return 0;
}
