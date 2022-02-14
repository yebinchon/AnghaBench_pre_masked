
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct x86_emulate_ops {int dummy; } ;
struct decode_cache {int* regs; int eip; } ;
struct x86_emulate_ctxt {scalar_t__ mode; int eflags; int vcpu; struct decode_cache decode; } ;
struct kvm_segment {int l; scalar_t__ db; void* selector; } ;
struct TYPE_2__ {int (* get_msr ) (int ,int ,int*) ;int (* set_segment ) (int ,struct kvm_segment*,int ) ;} ;


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
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct x86_emulate_ctxt*,struct x86_emulate_ops*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_20 ;
 int FUNC_3 (struct x86_emulate_ctxt*,struct kvm_segment*,struct kvm_segment*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,struct kvm_segment*,int ) ;
 int FUNC_7 (int ,struct kvm_segment*,int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_11(struct x86_emulate_ctxt *VAR_21, struct x86_emulate_ops *VAR_22)
{
 struct decode_cache *VAR_23 = &VAR_21->decode;
 struct kvm_segment VAR_24, VAR_25;
 u64 VAR_26;
 u64 VAR_27;


 if (VAR_21->mode == VAR_16 || VAR_21->mode == VAR_17)
  return VAR_19;

 if (!(FUNC_0(VAR_21, VAR_22))) {
  FUNC_2(VAR_21->vcpu, VAR_9);
  return VAR_18;
 }

 FUNC_3(VAR_21, &VAR_24, &VAR_25);

 VAR_20->get_msr(VAR_21->vcpu, VAR_5, &VAR_27);

 if (!(VAR_27 & VAR_0)) {
  FUNC_2(VAR_21->vcpu, VAR_9);
  return VAR_18;
 }

 VAR_20->get_msr(VAR_21->vcpu, VAR_7, &VAR_26);
 VAR_26 >>= 32;
 VAR_24.selector = (u16)(VAR_26 & 0xfffc);
 VAR_25.selector = (u16)(VAR_26 + 8);

 if (FUNC_1(VAR_21->vcpu)) {
  VAR_24.db = 0;
  VAR_24.l = 1;
 }
 VAR_20->set_segment(VAR_21->vcpu, &VAR_24, VAR_12);
 VAR_20->set_segment(VAR_21->vcpu, &VAR_25, VAR_13);

 VAR_23->regs[VAR_11] = VAR_23->eip;
 if (FUNC_1(VAR_21->vcpu)) {
 } else {

  VAR_20->get_msr(VAR_21->vcpu, VAR_7, &VAR_26);
  VAR_23->eip = (u32)VAR_26;

  VAR_21->eflags &= ~(VAR_3 | VAR_1 | VAR_2);
 }

 return VAR_14;
}
