
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef void* u16 ;
struct decode_cache {int rex_prefix; int * regs; int eip; } ;
struct x86_emulate_ctxt {scalar_t__ mode; TYPE_2__* vcpu; struct decode_cache decode; } ;
struct kvm_segment {int dpl; int selector; int l; int db; } ;
struct TYPE_9__ {int (* set_segment ) (TYPE_2__*,struct kvm_segment*,int ) ;int (* get_msr ) (TYPE_2__*,int ,int*) ;} ;
struct TYPE_7__ {int * regs; } ;
struct TYPE_8__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_5__* VAR_12 ;
 int FUNC_1 (struct x86_emulate_ctxt*,struct kvm_segment*,struct kvm_segment*) ;
 int FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_2__*,struct kvm_segment*,int ) ;
 int FUNC_4 (TYPE_2__*,struct kvm_segment*,int ) ;

__attribute__((used)) static int
FUNC_5(struct x86_emulate_ctxt *VAR_13)
{
 struct decode_cache *VAR_14 = &VAR_13->decode;
 struct kvm_segment VAR_15, VAR_16;
 u64 VAR_17;
 int VAR_18;


 if (VAR_13->mode == VAR_8 ||
     VAR_13->mode == VAR_9) {
  FUNC_0(VAR_13->vcpu, 0);
  return VAR_11;
 }

 FUNC_1(VAR_13, &VAR_15, &VAR_16);

 if ((VAR_14->rex_prefix & 0x8) != 0x0)
  VAR_18 = 128;
 else
  VAR_18 = 129;

 VAR_15.dpl = 3;
 VAR_16.dpl = 3;
 VAR_12->get_msr(VAR_13->vcpu, VAR_0, &VAR_17);
 switch (VAR_18) {
 case 129:
  VAR_15.selector = (u16)(VAR_17 + 16);
  if ((VAR_17 & 0xfffc) == 0x0) {
   FUNC_0(VAR_13->vcpu, 0);
   return VAR_10;
  }
  VAR_16.selector = (u16)(VAR_17 + 24);
  break;
 case 128:
  VAR_15.selector = (u16)(VAR_17 + 32);
  if (VAR_17 == 0x0) {
   FUNC_0(VAR_13->vcpu, 0);
   return VAR_10;
  }
  VAR_16.selector = VAR_15.selector + 8;
  VAR_15.db = 0;
  VAR_15.l = 1;
  break;
 }
 VAR_15.selector |= VAR_1;
 VAR_16.selector |= VAR_1;

 VAR_12->set_segment(VAR_13->vcpu, &VAR_15, VAR_5);
 VAR_12->set_segment(VAR_13->vcpu, &VAR_16, VAR_6);

 VAR_14->eip = VAR_13->vcpu->arch.regs[VAR_3];
 VAR_14->regs[VAR_4] = VAR_13->vcpu->arch.regs[VAR_2];

 return VAR_7;
}
