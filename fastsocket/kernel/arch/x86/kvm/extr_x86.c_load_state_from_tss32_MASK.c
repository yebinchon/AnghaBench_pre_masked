
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tss_segment_32 {int eflags; int gs; int fs; int ds; int ss; int cs; int es; int ldt_selector; int edi; int esi; int ebp; int esp; int ebx; int edx; int ecx; int eax; int eip; int cr3; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* set_rflags ) (struct kvm_vcpu*,int) ;} ;


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
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 TYPE_1__* VAR_15 ;
 int FUNC_5 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_16,
      struct tss_segment_32 *VAR_17)
{
 FUNC_4(VAR_16, VAR_17->cr3);

 FUNC_3(VAR_16, VAR_17->eip);
 VAR_15->set_rflags(VAR_16, VAR_17->eflags | 2);

 FUNC_2(VAR_16, VAR_0, VAR_17->eax);
 FUNC_2(VAR_16, VAR_3, VAR_17->ecx);
 FUNC_2(VAR_16, VAR_5, VAR_17->edx);
 FUNC_2(VAR_16, VAR_2, VAR_17->ebx);
 FUNC_2(VAR_16, VAR_7, VAR_17->esp);
 FUNC_2(VAR_16, VAR_1, VAR_17->ebp);
 FUNC_2(VAR_16, VAR_6, VAR_17->esi);
 FUNC_2(VAR_16, VAR_4, VAR_17->edi);





 FUNC_1(VAR_16, VAR_17->ldt_selector, VAR_13);
 FUNC_1(VAR_16, VAR_17->es, VAR_10);
 FUNC_1(VAR_16, VAR_17->cs, VAR_8);
 FUNC_1(VAR_16, VAR_17->ss, VAR_14);
 FUNC_1(VAR_16, VAR_17->ds, VAR_9);
 FUNC_1(VAR_16, VAR_17->fs, VAR_11);
 FUNC_1(VAR_16, VAR_17->gs, VAR_12);





 if (FUNC_0(VAR_16, VAR_17->ldt_selector, VAR_13))
  return 1;

 if (FUNC_0(VAR_16, VAR_17->es, VAR_10))
  return 1;

 if (FUNC_0(VAR_16, VAR_17->cs, VAR_8))
  return 1;

 if (FUNC_0(VAR_16, VAR_17->ss, VAR_14))
  return 1;

 if (FUNC_0(VAR_16, VAR_17->ds, VAR_9))
  return 1;

 if (FUNC_0(VAR_16, VAR_17->fs, VAR_11))
  return 1;

 if (FUNC_0(VAR_16, VAR_17->gs, VAR_12))
  return 1;
 return 0;
}
