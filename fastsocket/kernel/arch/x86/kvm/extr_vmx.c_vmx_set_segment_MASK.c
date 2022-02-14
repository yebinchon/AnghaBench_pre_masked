
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int selector; int base; int limit; void* ar; } ;
struct TYPE_4__ {int fs; int gs; int ds; int es; scalar_t__ vm86_active; TYPE_1__ tr; } ;
struct vcpu_vmx {TYPE_2__ rmode; } ;
struct kvm_vmx_segment_field {int ar_bytes; int base; int selector; int limit; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int selector; int base; int limit; scalar_t__ s; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int const,int *) ;
 struct kvm_vmx_segment_field* VAR_11 ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 void* FUNC_6 (struct kvm_segment*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_12,
       struct kvm_segment *VAR_13, int VAR_14)
{
 struct vcpu_vmx *VAR_15 = FUNC_1(VAR_12);
 struct kvm_vmx_segment_field *VAR_16 = &VAR_11[VAR_14];
 u32 VAR_17;

 if (VAR_15->rmode.vm86_active && VAR_14 == VAR_9) {
  FUNC_3(VAR_16->selector, VAR_13->selector);
  VAR_15->rmode.tr.selector = VAR_13->selector;
  VAR_15->rmode.tr.base = VAR_13->base;
  VAR_15->rmode.tr.limit = VAR_13->limit;
  VAR_15->rmode.tr.ar = FUNC_6(VAR_13);
  return;
 }
 FUNC_5(VAR_16->base, VAR_13->base);
 FUNC_4(VAR_16->limit, VAR_13->limit);
 FUNC_3(VAR_16->selector, VAR_13->selector);
 if (VAR_15->rmode.vm86_active && VAR_13->s) {



  if (VAR_13->base == 0xffff0000 && VAR_13->selector == 0xf000)
   FUNC_5(VAR_16->base, 0xf0000);
  VAR_17 = 0xf3;
 } else
  VAR_17 = FUNC_6(VAR_13);
 if (VAR_10 && (VAR_14 != VAR_8))
  VAR_17 |= 0x1;

 FUNC_4(VAR_16->ar_bytes, VAR_17);
 if (!VAR_10 && VAR_15->rmode.vm86_active) {
  switch (VAR_14) {
  case 133:
   FUNC_4(VAR_0, 0xf3);
   FUNC_4(VAR_2, 0xffff);
   if (FUNC_2(VAR_1) == 0xffff0000)
    FUNC_5(VAR_1, 0xf0000);
   FUNC_3(VAR_3,
         FUNC_2(VAR_1) >> 4);
   break;
  case 131:
   FUNC_0(131, &VAR_15->rmode.es);
   break;
  case 132:
   FUNC_0(132, &VAR_15->rmode.ds);
   break;
  case 129:
   FUNC_0(129, &VAR_15->rmode.gs);
   break;
  case 130:
   FUNC_0(130, &VAR_15->rmode.fs);
   break;
  case 128:
   FUNC_3(VAR_7,
         FUNC_2(VAR_5) >> 4);
   FUNC_4(VAR_6, 0xffff);
   FUNC_4(VAR_4, 0xf3);
   break;
  }
 }
}
