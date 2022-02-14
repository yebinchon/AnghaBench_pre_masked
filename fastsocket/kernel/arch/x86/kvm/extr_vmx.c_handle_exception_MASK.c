
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {void* event_exit_inst_len; } ;
struct TYPE_13__ {TYPE_4__ arch; } ;
struct TYPE_10__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {int idt_vectoring_info; TYPE_5__ vcpu; TYPE_2__ rmode; } ;
struct TYPE_11__ {unsigned long dr6; scalar_t__ halt_request; } ;
struct kvm_vcpu {int guest_debug; TYPE_3__ arch; struct kvm_run* run; } ;
struct TYPE_16__ {int exception; int error_code; } ;
struct TYPE_14__ {unsigned long dr6; unsigned long dr7; unsigned long pc; int exception; } ;
struct TYPE_15__ {TYPE_6__ arch; } ;
struct TYPE_9__ {int ndata; int* data; int suberror; } ;
struct kvm_run {TYPE_8__ ex; int exit_reason; TYPE_7__ debug; TYPE_1__ internal; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;



 int FUNC_0 () ;

 unsigned long VAR_0 ;
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
 int const VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*,unsigned long,int,int *,int ) ;
 int FUNC_11 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_12 (struct kvm_vcpu*,int const) ;
 unsigned long FUNC_13 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (unsigned long,int) ;
 void* FUNC_16 (int ) ;
 unsigned long FUNC_17 (int ) ;
 int FUNC_18 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_19(struct kvm_vcpu *VAR_22)
{
 struct vcpu_vmx *VAR_23 = FUNC_14(VAR_22);
 struct kvm_run *VAR_24 = VAR_22->run;
 u32 VAR_25, VAR_26, VAR_27;
 unsigned long VAR_28, VAR_29, VAR_30;
 u32 VAR_31;
 enum emulation_result VAR_32;

 VAR_31 = VAR_23->idt_vectoring_info;
 VAR_25 = FUNC_16(VAR_20);

 if (FUNC_5(VAR_25))
  return FUNC_2(VAR_22);

 if ((VAR_31 & VAR_17) &&
     !FUNC_7(VAR_25)) {
  VAR_22->run->exit_reason = VAR_12;
  VAR_22->run->internal.suberror = VAR_15;
  VAR_22->run->internal.ndata = 2;
  VAR_22->run->internal.data[0] = VAR_31;
  VAR_22->run->internal.data[1] = VAR_25;
  return 0;
 }

 if ((VAR_25 & VAR_7) == VAR_9)
  return 1;

 if (FUNC_6(VAR_25)) {
  FUNC_18(VAR_22);
  return 1;
 }

 if (FUNC_4(VAR_25)) {
  VAR_32 = FUNC_1(VAR_22, VAR_2);
  if (VAR_32 != VAR_1)
   FUNC_12(VAR_22, VAR_16);
  return 1;
 }

 VAR_27 = 0;
 VAR_29 = FUNC_13(VAR_22);
 if (VAR_25 & VAR_6)
  VAR_27 = FUNC_16(VAR_19);
 if (FUNC_7(VAR_25)) {

  if (VAR_21)
   FUNC_0();
  VAR_28 = FUNC_17(VAR_3);
  FUNC_15(VAR_28, VAR_27);

  if (FUNC_9(VAR_22))
   FUNC_11(VAR_22, VAR_28);
  return FUNC_10(VAR_22, VAR_28, VAR_27, ((void*)0), 0);
 }

 if (VAR_23->rmode.vm86_active &&
     FUNC_3(VAR_22, VAR_25 & VAR_8,
        VAR_27)) {
  if (VAR_22->arch.halt_request) {
   VAR_22->arch.halt_request = 0;
   return FUNC_8(VAR_22);
  }
  return 1;
 }

 VAR_26 = VAR_25 & VAR_8;
 switch (VAR_26) {
 case 128:
  VAR_30 = FUNC_17(VAR_3);
  if (!(VAR_22->guest_debug &
        (VAR_13 | VAR_14))) {
   VAR_22->arch.dr6 = VAR_30 | VAR_0;
   FUNC_12(VAR_22, 128);
   return 1;
  }
  VAR_24->debug.arch.dr6 = VAR_30 | VAR_0;
  VAR_24->debug.arch.dr7 = FUNC_17(VAR_5);

 case 129:





  VAR_23->vcpu.arch.event_exit_inst_len =
   FUNC_16(VAR_18);
  VAR_24->exit_reason = VAR_10;
  VAR_24->debug.arch.pc = FUNC_17(VAR_4) + VAR_29;
  VAR_24->debug.arch.exception = VAR_26;
  break;
 default:
  VAR_24->exit_reason = VAR_11;
  VAR_24->ex.exception = VAR_26;
  VAR_24->ex.error_code = VAR_27;
  break;
 }
 return 0;
}
