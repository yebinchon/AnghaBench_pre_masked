
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmcb_seg {int attrib; int selector; int limit; int base; } ;
struct vcpu_svm {TYPE_3__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int type; int s; int dpl; int present; int avl; int l; int db; int g; scalar_t__ unusable; int selector; int limit; int base; } ;
struct TYPE_4__ {int attrib; } ;
struct TYPE_5__ {int cpl; TYPE_1__ cs; } ;
struct TYPE_6__ {TYPE_2__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 struct vmcb_seg* FUNC_1 (struct kvm_vcpu*,int) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_10,
       struct kvm_segment *VAR_11, int VAR_12)
{
 struct vcpu_svm *VAR_13 = FUNC_2(VAR_10);
 struct vmcb_seg *VAR_14 = FUNC_1(VAR_10, VAR_12);

 VAR_14->base = VAR_11->base;
 VAR_14->limit = VAR_11->limit;
 VAR_14->selector = VAR_11->selector;
 if (VAR_11->unusable)
  VAR_14->attrib = 0;
 else {
  VAR_14->attrib = (VAR_11->type & VAR_7);
  VAR_14->attrib |= (VAR_11->s & 1) << VAR_6;
  VAR_14->attrib |= (VAR_11->dpl & 3) << VAR_2;
  VAR_14->attrib |= (VAR_11->present & 1) << VAR_5;
  VAR_14->attrib |= (VAR_11->avl & 1) << VAR_0;
  VAR_14->attrib |= (VAR_11->l & 1) << VAR_4;
  VAR_14->attrib |= (VAR_11->db & 1) << VAR_1;
  VAR_14->attrib |= (VAR_11->g & 1) << VAR_3;
 }
 if (VAR_12 == VAR_8)
  VAR_13->vmcb->save.cpl
   = (VAR_13->vmcb->save.cs.attrib
      >> VAR_2) & 3;

 FUNC_0(VAR_13->vmcb, VAR_9);
}
