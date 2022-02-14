
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* hsave; } ;
struct vcpu_svm {TYPE_5__* vmcb; TYPE_3__ nested; } ;
struct kvm_vcpu {int vcpu_id; } ;
typedef scalar_t__ s64 ;
struct TYPE_9__ {scalar_t__ tsc_offset; } ;
struct TYPE_10__ {TYPE_4__ control; } ;
struct TYPE_6__ {int tsc_offset; } ;
struct TYPE_7__ {TYPE_1__ control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,scalar_t__) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1, s64 VAR_2, bool VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_3(VAR_1);
 bool VAR_5 = 0;

 if (VAR_2 < 0) {
  VAR_2 = -VAR_2;
  VAR_5 = 1;
 }
 if (VAR_3)
  VAR_2 = FUNC_2(VAR_1, VAR_2);

 if (VAR_5) {
  VAR_2 = -VAR_2;
 }

 VAR_4->vmcb->control.tsc_offset += VAR_2;
 FUNC_1(VAR_4->vmcb, VAR_0);
 if (FUNC_0(VAR_4))
  VAR_4->nested.hsave->control.tsc_offset += VAR_2;
 else
  FUNC_4(VAR_1->vcpu_id,
    VAR_4->vmcb->control.tsc_offset - VAR_2,
    VAR_4->vmcb->control.tsc_offset);
}
