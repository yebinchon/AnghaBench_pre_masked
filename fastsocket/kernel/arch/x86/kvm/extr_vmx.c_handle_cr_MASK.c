
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_3__ {unsigned long cr3; } ;
struct kvm_vcpu {TYPE_2__* run; TYPE_1__ arch; int kvm; } ;
struct TYPE_4__ {scalar_t__ exit_reason; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 void* FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*,int,unsigned long) ;
 int FUNC_9 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_10 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_11 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_12 (struct kvm_vcpu*,void*) ;
 int FUNC_13 (struct kvm_vcpu*,char*,int,int) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (int,unsigned long) ;
 int FUNC_16 (int,int) ;
 unsigned long FUNC_17 (int ) ;
 int FUNC_18 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_19(struct kvm_vcpu *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = FUNC_17(VAR_0);
 VAR_7 = VAR_5 & 15;
 VAR_8 = (VAR_5 >> 8) & 15;
 switch ((VAR_5 >> 4) & 3) {
 case 0:
  VAR_6 = FUNC_7(VAR_4, VAR_8);
  FUNC_16(VAR_7, VAR_6);
  switch (VAR_7) {
  case 0:
   VAR_9 = FUNC_9(VAR_4, VAR_6);
   FUNC_0(VAR_4, VAR_9);
   return 1;
  case 3:
   VAR_9 = FUNC_10(VAR_4, VAR_6);
   FUNC_0(VAR_4, VAR_9);
   return 1;
  case 4:
   VAR_9 = FUNC_11(VAR_4, VAR_6);
   FUNC_0(VAR_4, VAR_9);
   return 1;
  case 8: {
    u8 VAR_10 = FUNC_2(VAR_4);
    u8 VAR_11 = FUNC_7(VAR_4, VAR_8);
    if (FUNC_12(VAR_4, VAR_11))
     FUNC_3(VAR_4, 0);
    else
     FUNC_14(VAR_4);
    if (FUNC_1(VAR_4->kvm))
     return 1;
    if (VAR_10 <= VAR_11)
     return 1;
    VAR_4->run->exit_reason = VAR_1;
    return 0;
   }
  };
  break;
 case 2:
  FUNC_18(VAR_4, FUNC_6(VAR_4, ~VAR_3));
  FUNC_16(0, FUNC_5(VAR_4));
  FUNC_14(VAR_4);
  return 1;
 case 1:
  switch (VAR_7) {
  case 3:
   FUNC_8(VAR_4, VAR_8, VAR_4->arch.cr3);
   FUNC_15(VAR_7, VAR_4->arch.cr3);
   FUNC_14(VAR_4);
   return 1;
  case 8:
   VAR_6 = FUNC_2(VAR_4);
   FUNC_8(VAR_4, VAR_8, VAR_6);
   FUNC_15(VAR_7, VAR_6);
   FUNC_14(VAR_4);
   return 1;
  }
  break;
 case 3:
  VAR_6 = (VAR_5 >> VAR_2) & 0x0f;
  FUNC_16(0, (FUNC_5(VAR_4) & ~0xful) | VAR_6);
  FUNC_4(VAR_4, VAR_6);

  FUNC_14(VAR_4);
  return 1;
 default:
  break;
 }
 VAR_4->run->exit_reason = 0;
 FUNC_13(VAR_4, "unhandled control register: op %d cr %d\n",
        (int)(VAR_5 >> 4) & 3, VAR_7);
 return 0;
}
