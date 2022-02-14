
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cr3; scalar_t__ shadow_efer; scalar_t__ cr0; int mp_state; int cr2; } ;
struct kvm_vcpu {TYPE_3__ arch; int kvm; } ;
struct TYPE_10__ {int selector; int base; } ;
struct TYPE_7__ {int base; int limit; } ;
struct TYPE_6__ {int base; int limit; } ;
struct kvm_sregs {int cr4; scalar_t__ cr3; scalar_t__ efer; scalar_t__ cr0; TYPE_5__ cs; TYPE_5__ ldt; TYPE_5__ tr; TYPE_5__ ss; TYPE_5__ gs; TYPE_5__ fs; TYPE_5__ es; TYPE_5__ ds; scalar_t__ interrupt_bitmap; int apic_base; int cr8; int cr2; TYPE_2__ gdt; TYPE_1__ idt; } ;
struct descriptor_table {int base; int limit; } ;
struct TYPE_9__ {int (* set_cr4 ) (struct kvm_vcpu*,int) ;int (* set_cr0 ) (struct kvm_vcpu*,scalar_t__) ;int (* set_efer ) (struct kvm_vcpu*,scalar_t__) ;int (* set_gdt ) (struct kvm_vcpu*,struct descriptor_table*) ;int (* set_idt ) (struct kvm_vcpu*,struct descriptor_table*) ;} ;


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
 int FUNC_0 (unsigned long const*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct kvm_vcpu*,int,int) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*,int ) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*,int ) ;
 int FUNC_13 (struct kvm_vcpu*,int ) ;
 int FUNC_14 (struct kvm_vcpu*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_15 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_12 ;
 int FUNC_16 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (struct kvm_vcpu*,struct descriptor_table*) ;
 int FUNC_19 (struct kvm_vcpu*,struct descriptor_table*) ;
 int FUNC_20 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_21 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_22 (struct kvm_vcpu*,int) ;
 int FUNC_23 (struct kvm_vcpu*) ;
 int FUNC_24 (struct kvm_vcpu*) ;
 int FUNC_25 (struct kvm_vcpu*) ;
 int FUNC_26 (struct kvm_vcpu*) ;

int FUNC_27(struct kvm_vcpu *VAR_13,
      struct kvm_sregs *VAR_14)
{
 int VAR_15 = 0;
 int VAR_16, VAR_17;
 int VAR_18 = 0;
 struct descriptor_table VAR_19;

 FUNC_25(VAR_13);

 if (!FUNC_1(VAR_13) && (VAR_14->cr4 & VAR_11)) {
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_19.limit = VAR_14->idt.limit;
 VAR_19.base = VAR_14->idt.base;
 VAR_12->set_idt(VAR_13, &VAR_19);
 VAR_19.limit = VAR_14->gdt.limit;
 VAR_19.base = VAR_14->gdt.base;
 VAR_12->set_gdt(VAR_13, &VAR_19);

 VAR_13->arch.cr2 = VAR_14->cr2;
 VAR_15 |= VAR_13->arch.cr3 != VAR_14->cr3;
 VAR_13->arch.cr3 = VAR_14->cr3;

 FUNC_13(VAR_13, VAR_14->cr8);

 VAR_15 |= VAR_13->arch.shadow_efer != VAR_14->efer;
 VAR_12->set_efer(VAR_13, VAR_14->efer);
 FUNC_12(VAR_13, VAR_14->apic_base);


 VAR_15 |= FUNC_8(VAR_13) != VAR_14->cr0;
 VAR_12->set_cr0(VAR_13, VAR_14->cr0);
 VAR_13->arch.cr0 = VAR_14->cr0;

 VAR_15 |= FUNC_10(VAR_13) != VAR_14->cr4;
 VAR_12->set_cr4(VAR_13, VAR_14->cr4);
 if (VAR_14->cr4 & VAR_11)
  FUNC_23(VAR_13);
 if (!FUNC_3(VAR_13) && FUNC_4(VAR_13))
  FUNC_16(VAR_13, VAR_13->arch.cr3);

 if (VAR_15)
  FUNC_5(VAR_13);

 VAR_17 = (sizeof VAR_14->interrupt_bitmap) << 3;
 VAR_16 = FUNC_0(
  (const unsigned long *)VAR_14->interrupt_bitmap, VAR_17);
 if (VAR_16 < VAR_17) {
  FUNC_7(VAR_13, VAR_16, 0);
  FUNC_17("Set back pending irq %d\n", VAR_16);
  if (FUNC_2(VAR_13->kvm))
   FUNC_6(VAR_13->kvm);
 }

 FUNC_14(VAR_13, &VAR_14->cs, VAR_2);
 FUNC_14(VAR_13, &VAR_14->ds, VAR_3);
 FUNC_14(VAR_13, &VAR_14->es, VAR_4);
 FUNC_14(VAR_13, &VAR_14->fs, VAR_5);
 FUNC_14(VAR_13, &VAR_14->gs, VAR_6);
 FUNC_14(VAR_13, &VAR_14->ss, VAR_8);

 FUNC_14(VAR_13, &VAR_14->tr, VAR_9);
 FUNC_14(VAR_13, &VAR_14->ldt, VAR_7);

 FUNC_24(VAR_13);


 if (FUNC_15(VAR_13) && FUNC_11(VAR_13) == 0xfff0 &&
     VAR_14->cs.selector == 0xf000 && VAR_14->cs.base == 0xffff0000 &&
     !(FUNC_9(VAR_13, VAR_10)))
  VAR_13->arch.mp_state = VAR_1;

out:
 FUNC_26(VAR_13);

 return VAR_18;
}
