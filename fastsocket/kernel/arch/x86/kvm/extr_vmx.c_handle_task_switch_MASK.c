
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned long u16 ;
struct vcpu_vmx {int idt_vectoring_info; } ;
struct TYPE_2__ {int nmi_injected; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long,int,int,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct kvm_vcpu *VAR_9)
{
 struct vcpu_vmx *VAR_10 = FUNC_5(VAR_9);
 unsigned long VAR_11;
 bool VAR_12 = 0;
 u32 VAR_13 = 0;
 u16 VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_17 = (VAR_10->idt_vectoring_info & VAR_8);
 VAR_16 = (VAR_10->idt_vectoring_info & VAR_7);

 VAR_11 = FUNC_7(VAR_0);

 VAR_15 = (u32)VAR_11 >> 30;
 if (VAR_15 == VAR_5 && VAR_17) {
  switch (VAR_16) {
  case 130:
   VAR_9->arch.nmi_injected = 0;
   if (FUNC_0())
    FUNC_8(VAR_2,
           VAR_3);
   break;
  case 132:
  case 128:
   FUNC_2(VAR_9);
   break;
  case 131:
   if (VAR_10->idt_vectoring_info &
       VAR_6) {
    VAR_12 = 1;
    VAR_13 =
     FUNC_6(VAR_4);
   }

  case 129:
   FUNC_1(VAR_9);
   break;
  default:
   break;
  }
 }
 VAR_14 = VAR_11;

 if (!VAR_17 || (VAR_16 != 131 &&
         VAR_16 != 132 &&
         VAR_16 != 130))
  FUNC_4(VAR_9);

 if (!FUNC_3(VAR_9, VAR_14, VAR_15, VAR_12,
        VAR_13))
  return 0;


 FUNC_9(VAR_1, FUNC_7(VAR_1) & ~55);






 return 1;
}
