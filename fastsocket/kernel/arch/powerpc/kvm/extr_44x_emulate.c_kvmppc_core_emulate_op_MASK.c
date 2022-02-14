
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int io_gpr; int dcr_needed; int * gpr; int cpr0_cfgaddr; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int dcrn; int is_write; int data; } ;
struct kvm_run {TYPE_1__ dcr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (struct kvm_vcpu*,int,int,int,int) ;
 int FUNC_10 (struct kvm_vcpu*,int,int,int) ;
 int FUNC_11 (struct kvm_vcpu*,int ) ;
 int FUNC_12 (struct kvm_run*,struct kvm_vcpu*,unsigned int,int*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int const) ;
 int FUNC_16 (int const,int ) ;

int FUNC_17(struct kvm_run *VAR_4, struct kvm_vcpu *VAR_5,
                           unsigned int VAR_6, int *VAR_7)
{
 int VAR_8 = VAR_1;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 switch (FUNC_1(VAR_6)) {
 case 31:
  switch (FUNC_8(VAR_6)) {

  case 131:
   VAR_9 = FUNC_0(VAR_6);
   VAR_14 = FUNC_6(VAR_6);
   switch (VAR_9) {
   case 134:
    VAR_5->arch.gpr[VAR_14] = VAR_5->arch.cpr0_cfgaddr;
    break;
   case 133:
    FUNC_13();
    FUNC_16(134,
       VAR_5->arch.cpr0_cfgaddr);
    VAR_5->arch.gpr[VAR_14] = FUNC_15(133);
    FUNC_14();
    break;
   default:
    VAR_4->dcr.dcrn = VAR_9;
    VAR_4->dcr.data = 0;
    VAR_4->dcr.is_write = 0;
    VAR_5->arch.io_gpr = VAR_14;
    VAR_5->arch.dcr_needed = 1;
    FUNC_11(VAR_5, VAR_0);
    VAR_8 = VAR_2;
   }

   break;

  case 130:
   VAR_9 = FUNC_0(VAR_6);
   VAR_13 = FUNC_5(VAR_6);


   switch (VAR_9) {
   case 134:
    VAR_5->arch.cpr0_cfgaddr = VAR_5->arch.gpr[VAR_13];
    break;
   default:
    VAR_4->dcr.dcrn = VAR_9;
    VAR_4->dcr.data = VAR_5->arch.gpr[VAR_13];
    VAR_4->dcr.is_write = 1;
    VAR_5->arch.dcr_needed = 1;
    FUNC_11(VAR_5, VAR_0);
    VAR_8 = VAR_2;
   }

   break;

  case 128:
   VAR_10 = FUNC_2(VAR_6);
   VAR_13 = FUNC_5(VAR_6);
   VAR_15 = FUNC_7(VAR_6);
   VAR_8 = FUNC_10(VAR_5, VAR_10, VAR_13, VAR_15);
   break;

  case 129:
   VAR_14 = FUNC_6(VAR_6);
   VAR_10 = FUNC_2(VAR_6);
   VAR_11 = FUNC_3(VAR_6);
   VAR_12 = FUNC_4(VAR_6);
   VAR_8 = FUNC_9(VAR_5, VAR_14, VAR_10, VAR_11, VAR_12);
   break;

  case 132:
   break;

  default:
   VAR_8 = VAR_3;
  }

  break;

 default:
  VAR_8 = VAR_3;
 }

 if (VAR_8 == VAR_3)
  VAR_8 = FUNC_12(VAR_4, VAR_5, VAR_6, VAR_7);

 return VAR_8;
}
