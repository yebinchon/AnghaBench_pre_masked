
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct decode_cache {int eip; int* regs; } ;
struct x86_emulate_ctxt {int mode; int eflags; int vcpu; struct decode_cache decode; } ;
struct kvm_segment {int selector; int l; scalar_t__ db; } ;
struct TYPE_2__ {int (* get_msr ) (int ,int ,int*) ;int (* set_segment ) (int ,struct kvm_segment*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_14 ;
 int FUNC_2 (struct x86_emulate_ctxt*,struct kvm_segment*,struct kvm_segment*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,struct kvm_segment*,int ) ;
 int FUNC_5 (int ,struct kvm_segment*,int ) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_8(struct x86_emulate_ctxt *VAR_15)
{
 struct decode_cache *VAR_16 = &VAR_15->decode;
 struct kvm_segment VAR_17, VAR_18;
 u64 VAR_19;


 if (VAR_15->mode == VAR_11) {
  FUNC_1(VAR_15->vcpu, 0);
  return VAR_13;
 }




 if (VAR_15->mode == 128)
  return VAR_13;

 FUNC_2(VAR_15, &VAR_17, &VAR_18);

 VAR_14->get_msr(VAR_15->vcpu, VAR_3, &VAR_19);
 switch (VAR_15->mode) {
 case 129:
  if ((VAR_19 & 0xfffc) == 0x0) {
   FUNC_1(VAR_15->vcpu, 0);
   return VAR_12;
  }
  break;
 case 128:
  if (VAR_19 == 0x0) {
   FUNC_1(VAR_15->vcpu, 0);
   return VAR_12;
  }
  break;
 }

 VAR_15->eflags &= ~(VAR_2 | VAR_0 | VAR_1);
 VAR_17.selector = (u16)VAR_19;
 VAR_17.selector &= ~VAR_6;
 VAR_18.selector = VAR_17.selector + 8;
 VAR_18.selector &= ~VAR_6;
 if (VAR_15->mode == 128
  || FUNC_0(VAR_15->vcpu)) {
  VAR_17.db = 0;
  VAR_17.l = 1;
 }

 VAR_14->set_segment(VAR_15->vcpu, &VAR_17, VAR_8);
 VAR_14->set_segment(VAR_15->vcpu, &VAR_18, VAR_9);

 VAR_14->get_msr(VAR_15->vcpu, VAR_4, &VAR_19);
 VAR_16->eip = VAR_19;

 VAR_14->get_msr(VAR_15->vcpu, VAR_5, &VAR_19);
 VAR_16->regs[VAR_7] = VAR_19;

 return VAR_10;
}
