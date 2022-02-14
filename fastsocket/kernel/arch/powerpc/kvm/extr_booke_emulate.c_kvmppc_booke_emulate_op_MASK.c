
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* gpr; unsigned int msr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_run {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;





 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,unsigned int) ;

int FUNC_7(struct kvm_run *VAR_7, struct kvm_vcpu *VAR_8,
                            unsigned int VAR_9, int *VAR_10)
{
 int VAR_11 = VAR_4;
 int VAR_12;
 int VAR_13;

 switch (FUNC_0(VAR_9)) {
 case 19:
  switch (FUNC_3(VAR_9)) {
  case 132:
   FUNC_4(VAR_8);
   FUNC_5(VAR_8, VAR_2);
   *VAR_10 = 0;
   break;

  default:
   VAR_11 = VAR_5;
   break;
  }
  break;

 case 31:
  switch (FUNC_3(VAR_9)) {

  case 131:
   VAR_13 = FUNC_2(VAR_9);
   VAR_8->arch.gpr[VAR_13] = VAR_8->arch.msr;
   FUNC_5(VAR_8, VAR_0);
   break;

  case 130:
   VAR_12 = FUNC_1(VAR_9);
   FUNC_5(VAR_8, VAR_1);
   FUNC_6(VAR_8, VAR_8->arch.gpr[VAR_12]);
   break;

  case 129:
   VAR_12 = FUNC_1(VAR_9);
   VAR_8->arch.msr = (VAR_8->arch.msr & ~VAR_6)
        | (VAR_8->arch.gpr[VAR_12] & VAR_6);
   FUNC_5(VAR_8, VAR_3);
   break;

  case 128:
   VAR_8->arch.msr = (VAR_8->arch.msr & ~VAR_6)
        | (VAR_9 & VAR_6);
   FUNC_5(VAR_8, VAR_3);
   break;

  default:
   VAR_11 = VAR_5;
  }

  break;

 default:
  VAR_11 = VAR_5;
 }

 return VAR_11;
}
