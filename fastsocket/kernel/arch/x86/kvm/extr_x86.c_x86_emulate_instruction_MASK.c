
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct decode_cache {int b; int modrm_mod; int modrm_rm; int modrm_reg; int eip; int twobyte; } ;
struct TYPE_12__ {int eflags; int interruptibility; struct decode_cache decode; int mode; struct kvm_vcpu* vcpu; } ;
struct TYPE_9__ {scalar_t__ string; } ;
struct TYPE_11__ {unsigned long mmio_fault_cr2; int cr0; TYPE_5__ emulate_ctxt; TYPE_2__ pio; } ;
struct TYPE_8__ {int insn_emulation_fail; int insn_emulation; } ;
struct kvm_vcpu {scalar_t__ mmio_needed; scalar_t__ mmio_is_write; TYPE_4__ arch; int mmio_size; int mmio_data; int mmio_phys_addr; TYPE_1__ stat; struct kvm_run* run; } ;
struct TYPE_10__ {scalar_t__ is_write; int len; int data; int phys_addr; } ;
struct kvm_run {TYPE_3__ mmio; int exit_reason; } ;
struct TYPE_13__ {int (* get_rflags ) (struct kvm_vcpu*) ;int (* set_rflags ) (struct kvm_vcpu*,int) ;int (* set_interrupt_shadow ) (struct kvm_vcpu*,int) ;int (* get_cs_db_l_bits ) (struct kvm_vcpu*,int*,int*) ;} ;


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
 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_14 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,char*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 TYPE_7__* VAR_15 ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_6 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;
 int FUNC_10 (TYPE_5__*,int *,void*,int) ;
 int FUNC_11 (TYPE_5__*,int *) ;

int FUNC_12(struct kvm_vcpu *VAR_16,
   unsigned long VAR_17,
   int VAR_18,
   void *VAR_19,
   int VAR_20)
{
 int VAR_21, VAR_22;
 struct decode_cache *VAR_23;
 struct kvm_run *VAR_24 = VAR_16->run;

 FUNC_1(VAR_16);
 VAR_16->arch.mmio_fault_cr2 = VAR_17;






 FUNC_0(VAR_16);

 VAR_16->mmio_is_write = 0;
 VAR_16->arch.pio.string = 0;

 if (!(VAR_18 & VAR_3)) {
  int VAR_25, VAR_26;
  VAR_15->get_cs_db_l_bits(VAR_16, &VAR_25, &VAR_26);

  VAR_16->arch.emulate_ctxt.vcpu = VAR_16;
  VAR_16->arch.emulate_ctxt.eflags = VAR_15->get_rflags(VAR_16);
  VAR_16->arch.emulate_ctxt.mode =
   (!(VAR_16->arch.cr0 & VAR_12)) ? VAR_10 :
   (VAR_16->arch.emulate_ctxt.eflags & VAR_13)
   ? VAR_11 : VAR_26
   ? VAR_9 : VAR_25
   ? VAR_8 : VAR_7;

  VAR_21 = FUNC_10(&VAR_16->arch.emulate_ctxt, &VAR_14,
        VAR_19, VAR_20);



  VAR_23 = &VAR_16->arch.emulate_ctxt.decode;
  if (VAR_18 & VAR_5) {
   if (!VAR_23->twobyte)
    return VAR_2;
   switch (VAR_23->b) {
   case 0x01:
    if (VAR_23->modrm_mod != 3 || VAR_23->modrm_rm != 1)
     return VAR_2;
    break;
   case 0x34:
   case 0x35:
    if (VAR_23->modrm_mod != 0 || VAR_23->modrm_rm != 0)
     return VAR_2;
    break;
   case 0x05:
    if (VAR_23->modrm_mod != 0 || VAR_23->modrm_rm != 0)
     return VAR_2;
    break;
   default:
    return VAR_2;
   }

   if (!(VAR_23->modrm_reg == 0 || VAR_23->modrm_reg == 3))
    return VAR_2;
  }

  ++VAR_16->stat.insn_emulation;
  if (VAR_21) {
   ++VAR_16->stat.insn_emulation_fail;
   if (FUNC_5(VAR_16, VAR_17))
    return VAR_0;
   return VAR_2;
  }
 }

 if (VAR_18 & VAR_4) {
  FUNC_3(VAR_16, VAR_16->arch.emulate_ctxt.decode.eip);
  return VAR_0;
 }

 VAR_21 = FUNC_11(&VAR_16->arch.emulate_ctxt, &VAR_14);
 VAR_22 = VAR_16->arch.emulate_ctxt.interruptibility;

 if (VAR_21 == 0)
  VAR_15->set_interrupt_shadow(VAR_16, VAR_22);

 if (VAR_16->arch.pio.string)
  return VAR_1;

 if ((VAR_21 || VAR_16->mmio_is_write) && VAR_24) {
  VAR_24->exit_reason = VAR_6;
  VAR_24->mmio.phys_addr = VAR_16->mmio_phys_addr;
  FUNC_4(VAR_24->mmio.data, VAR_16->mmio_data, 8);
  VAR_24->mmio.len = VAR_16->mmio_size;
  VAR_24->mmio.is_write = VAR_16->mmio_is_write;
 }

 if (VAR_21) {
  if (FUNC_5(VAR_16, VAR_17))
   return VAR_0;
  if (!VAR_16->mmio_needed) {
   FUNC_2(VAR_16, "mmio");
   return VAR_2;
  }
  return VAR_1;
 }

 VAR_15->set_rflags(VAR_16, VAR_16->arch.emulate_ctxt.eflags);

 if (VAR_16->mmio_is_write) {
  VAR_16->mmio_needed = 0;
  return VAR_1;
 }

 return VAR_0;
}
