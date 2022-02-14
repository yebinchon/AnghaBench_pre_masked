
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode_flags; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct ia64_psr {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct ia64_psr,struct ia64_psr) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_1, struct ia64_psr VAR_2,
     struct ia64_psr VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 switch (VAR_4) {
 case 128:


  FUNC_1(VAR_1);




  VAR_1->arch.mode_flags |= VAR_0;
  break;
 case 130:
  FUNC_2(VAR_1);




  VAR_1->arch.mode_flags &= ~VAR_0;
  break;
 case 129:
  break;
 case 131:
  break;
 default:

  break;
 }
 return;
}
