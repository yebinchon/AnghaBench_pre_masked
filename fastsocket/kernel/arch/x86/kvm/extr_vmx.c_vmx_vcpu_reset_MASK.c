
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int u64 ;
struct TYPE_23__ {int sipi_vector; int cr0; TYPE_3__* apic; int * regs; } ;
struct TYPE_25__ {TYPE_5__ arch; TYPE_11__* kvm; } ;
struct TYPE_20__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {int vpid; scalar_t__ emulation_required; TYPE_7__ vcpu; scalar_t__ soft_vnmi_blocked; TYPE_2__ rmode; } ;
struct TYPE_19__ {int regs_avail; } ;
struct kvm_vcpu {int srcu_idx; TYPE_6__* kvm; TYPE_1__ arch; } ;
struct TYPE_24__ {int srcu; } ;
struct TYPE_22__ {int apic_access_page; } ;
struct TYPE_21__ {int regs_page; } ;
struct TYPE_18__ {TYPE_4__ arch; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vcpu_vmx*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 struct vcpu_vmx* FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (TYPE_7__*) ;
 scalar_t__ FUNC_16 (TYPE_11__*) ;
 scalar_t__ FUNC_17 (TYPE_11__*) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (TYPE_7__*) ;
 int FUNC_23 (TYPE_7__*,int ) ;
 int FUNC_24 (TYPE_7__*,int ) ;
 int FUNC_25 (TYPE_7__*,int ) ;
 int FUNC_26 (struct vcpu_vmx*) ;

__attribute__((used)) static int FUNC_27(struct kvm_vcpu *VAR_43)
{
 struct vcpu_vmx *VAR_44 = FUNC_14(VAR_43);
 u64 VAR_45;
 int VAR_46;

 VAR_43->arch.regs_avail = ~((1 << VAR_29) | (1 << VAR_30));

 VAR_44->rmode.vm86_active = 0;

 VAR_44->soft_vnmi_blocked = 0;

 VAR_44->vcpu.arch.regs[VAR_28] = FUNC_2();
 FUNC_7(&VAR_44->vcpu, 0);
 VAR_45 = 0xfee00000 | VAR_26;
 if (FUNC_8(&VAR_44->vcpu))
  VAR_45 |= VAR_25;
 FUNC_6(&VAR_44->vcpu, VAR_45);

 FUNC_1(&VAR_44->vcpu);

 FUNC_10(VAR_31);




 if (FUNC_8(&VAR_44->vcpu)) {
  FUNC_18(VAR_4, 0xf000);
  FUNC_21(VAR_3, 0x000f0000);
 } else {
  FUNC_18(VAR_4, VAR_44->vcpu.arch.sipi_vector << 8);
  FUNC_21(VAR_3, VAR_44->vcpu.arch.sipi_vector << 12);
 }

 FUNC_10(VAR_32);
 FUNC_10(VAR_33);
 FUNC_10(VAR_34);
 FUNC_10(VAR_35);
 FUNC_10(VAR_36);

 FUNC_18(VAR_24, 0);
 FUNC_21(VAR_22, 0);
 FUNC_19(VAR_23, 0xffff);
 FUNC_19(VAR_21, 0x008b);

 FUNC_18(VAR_15, 0);
 FUNC_21(VAR_13, 0);
 FUNC_19(VAR_14, 0xffff);
 FUNC_19(VAR_12, 0x00082);

 FUNC_19(VAR_18, 0);
 FUNC_21(VAR_20, 0);
 FUNC_21(VAR_19, 0);

 FUNC_21(VAR_17, 0x02);
 if (FUNC_8(&VAR_44->vcpu))
  FUNC_5(VAR_43, 0xfff0);
 else
  FUNC_5(VAR_43, 0);
 FUNC_4(VAR_43, VAR_30, 0);

 FUNC_21(VAR_5, 0x400);

 FUNC_21(VAR_6, 0);
 FUNC_19(VAR_7, 0xffff);

 FUNC_21(VAR_9, 0);
 FUNC_19(VAR_10, 0xffff);

 FUNC_19(VAR_2, VAR_1);
 FUNC_19(VAR_11, 0);
 FUNC_19(VAR_16, 0);


 FUNC_20(VAR_8, 0);

 FUNC_11(VAR_44);

 FUNC_19(VAR_39, 0);

 if (FUNC_0()) {
  FUNC_20(VAR_37, 0);
  if (FUNC_16(VAR_44->vcpu.kvm))
   FUNC_20(VAR_37,
    FUNC_9(VAR_44->vcpu.arch.apic->regs_page));
  FUNC_19(VAR_27, 0);
 }

 if (FUNC_17(VAR_44->vcpu.kvm))
  FUNC_20(VAR_0,
        FUNC_9(VAR_44->vcpu.kvm->arch.apic_access_page));

 if (VAR_44->vpid != 0)
  FUNC_18(VAR_38, VAR_44->vpid);

 VAR_44->vcpu.arch.cr0 = VAR_42 | VAR_40 | VAR_41;
 VAR_43->srcu_idx = FUNC_12(&VAR_43->kvm->srcu);
 FUNC_23(&VAR_44->vcpu, FUNC_3(VAR_43));
 FUNC_13(&VAR_43->kvm->srcu, VAR_43->srcu_idx);
 FUNC_24(&VAR_44->vcpu, 0);
 FUNC_25(&VAR_44->vcpu, 0);
 FUNC_22(&VAR_44->vcpu);
 FUNC_15(&VAR_44->vcpu);

 FUNC_26(VAR_44);

 VAR_46 = 0;


 VAR_44->emulation_required = 0;

 return VAR_46;
}
