
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * gpr; int ccr1; int ccr0; int mmucr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct kvm_vcpu*,int,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

int FUNC_3(struct kvm_vcpu *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1;

 switch (VAR_3) {
 case 128:
  FUNC_2(VAR_2, VAR_2->arch.gpr[VAR_4]); break;
 case 129:
  VAR_2->arch.mmucr = VAR_2->arch.gpr[VAR_4]; break;
 case 131:
  VAR_2->arch.ccr0 = VAR_2->arch.gpr[VAR_4]; break;
 case 130:
  VAR_2->arch.ccr1 = VAR_2->arch.gpr[VAR_4]; break;
 default:
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 }

 FUNC_1(VAR_2, VAR_0);
 return VAR_5;
}
