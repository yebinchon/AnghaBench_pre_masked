
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union context {unsigned long* gr; int psr; int* ar; int pr; int* cr; int* rr; unsigned long* br; scalar_t__ caller_unat; } ;
struct vpd {int dummy; } ;
struct thash_data {int dummy; } ;
struct kvm_vcpu_data {int dummy; } ;
struct TYPE_8__ {struct thash_data* hash; } ;
struct TYPE_10__ {struct thash_data* hash; } ;
struct TYPE_14__ {int function; } ;
struct TYPE_11__ {long itc_offset; int last_run_cpu; TYPE_1__ vtlb; TYPE_3__ vhpt; int dirty_log_lock_pa; int __gp; int vsa_base; struct vpd* vpd; TYPE_7__ hlt_timer; int metaphysical_rr4; int metaphysical_rr0; int vmm_rr; TYPE_5__* apic; int mp_state; scalar_t__ last_itc; union context guest; } ;
struct kvm_vcpu {int vcpu_id; TYPE_4__ arch; struct kvm* kvm; } ;
struct kvm_pt_regs {int cr_iip; } ;
struct kvm_lapic {int dummy; } ;
struct TYPE_9__ {int dirty_log_lock; int metaphysical_rr4; int metaphysical_rr0; int vmm_init_rr; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_13__ {scalar_t__ vmm_entry; scalar_t__ vmm_ivt; } ;
struct TYPE_12__ {struct kvm_vcpu* vcpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_10 ;
 int FUNC_6 (TYPE_7__*,int ,int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 unsigned long FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*) ;
 int VAR_11 ;
 TYPE_6__* VAR_12 ;
 int VAR_13 ;
 TYPE_5__* FUNC_10 (int,int ) ;
 struct kvm_vcpu* FUNC_11 (struct kvm*,struct kvm_vcpu*) ;
 struct kvm_pt_regs* FUNC_12 (struct kvm_vcpu*) ;

int FUNC_13(struct kvm_vcpu *VAR_14)
{
 struct kvm_vcpu *VAR_15;
 int VAR_16;
 int VAR_17;
 long VAR_18;
 struct kvm *VAR_19 = VAR_14->kvm;
 struct kvm_pt_regs *VAR_20 = FUNC_12(VAR_14);

 union context *VAR_21 = &VAR_14->arch.guest;
 struct kvm_vcpu *VAR_22 = FUNC_11(VAR_14->kvm, VAR_14);


 if (FUNC_0(VAR_22))
  return FUNC_1(VAR_22);

 if (FUNC_9(VAR_14)) {
  VAR_14->arch.mp_state = VAR_6;


  VAR_20->cr_iip = VAR_9;


  VAR_18 = 0UL - FUNC_8(VAR_14);
  for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
   VAR_15 = (struct kvm_vcpu *)((char *)VAR_14 +
     sizeof(struct kvm_vcpu_data) * VAR_17);
   VAR_15->arch.itc_offset = VAR_18;
   VAR_15->arch.last_itc = 0;
  }
 } else
  VAR_14->arch.mp_state = VAR_7;

 VAR_16 = -VAR_1;
 VAR_14->arch.apic = FUNC_10(sizeof(struct kvm_lapic), VAR_3);
 if (!VAR_14->arch.apic)
  goto out;
 VAR_14->arch.apic->vcpu = VAR_14;

 VAR_21->gr[1] = 0;
 VAR_21->gr[12] = (unsigned long)((char *)VAR_22 + VAR_8);
 VAR_21->gr[13] = (unsigned long)VAR_22;
 VAR_21->psr = 0x1008522000UL;
 VAR_21->ar[40] = VAR_2;
 VAR_21->caller_unat = 0;
 VAR_21->pr = 0x0;
 VAR_21->ar[36] = 0x0;
 VAR_21->ar[19] = 0x0;
 VAR_21->ar[18] = (unsigned long)VAR_22 +
    ((sizeof(struct kvm_vcpu)+15) & ~15);
 VAR_21->ar[64] = 0x0;
 VAR_21->cr[0] = 0x7e04UL;
 VAR_21->cr[2] = (unsigned long)VAR_12->vmm_ivt;
 VAR_21->cr[8] = 0x3c;


 VAR_21->rr[0] = 0x30;
 VAR_21->rr[1] = 0x30;
 VAR_21->rr[2] = 0x30;
 VAR_21->rr[3] = 0x30;
 VAR_21->rr[4] = 0x30;
 VAR_21->rr[5] = 0x30;
 VAR_21->rr[7] = 0x30;


 VAR_21->br[0] = *(unsigned long *)VAR_12->vmm_entry;

 VAR_14->arch.vmm_rr = VAR_19->arch.vmm_init_rr;
 VAR_14->arch.metaphysical_rr0 = VAR_19->arch.metaphysical_rr0;
 VAR_14->arch.metaphysical_rr4 = VAR_19->arch.metaphysical_rr4;

 FUNC_6(&VAR_14->arch.hlt_timer, VAR_0, VAR_4);
 VAR_14->arch.hlt_timer.function = VAR_10;

 VAR_14->arch.last_run_cpu = -1;
 VAR_14->arch.vpd = (struct vpd *)FUNC_3(VAR_14->vcpu_id);
 VAR_14->arch.vsa_base = VAR_13;
 VAR_14->arch.__gp = VAR_11;
 VAR_14->arch.dirty_log_lock_pa = FUNC_5(&VAR_19->arch.dirty_log_lock);
 VAR_14->arch.vhpt.hash = (struct thash_data *)FUNC_2(VAR_14->vcpu_id);
 VAR_14->arch.vtlb.hash = (struct thash_data *)FUNC_4(VAR_14->vcpu_id);
 FUNC_7(VAR_14);

 VAR_16 = 0;
out:
 return VAR_16;
}
