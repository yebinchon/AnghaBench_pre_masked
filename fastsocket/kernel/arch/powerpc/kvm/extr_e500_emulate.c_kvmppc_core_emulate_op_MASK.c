
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_run {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct kvm_run*,struct kvm_vcpu*,unsigned int,int*) ;
 int FUNC_5 (struct kvm_vcpu*,int,int) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*) ;

int FUNC_9(struct kvm_run *VAR_2, struct kvm_vcpu *VAR_3,
                           unsigned int VAR_4, int *VAR_5)
{
 int VAR_6 = VAR_0;
 int VAR_7;
 int VAR_8;

 switch (FUNC_0(VAR_4)) {
 case 31:
  switch (FUNC_3(VAR_4)) {

  case 130:
   VAR_6 = FUNC_6(VAR_3);
   break;

  case 128:
   VAR_6 = FUNC_8(VAR_3);
   break;

  case 129:
   VAR_8 = FUNC_2(VAR_4);
   VAR_6 = FUNC_7(VAR_3,VAR_8);
   break;

  case 131:
   VAR_7 = FUNC_1(VAR_4);
   VAR_8 = FUNC_2(VAR_4);
   VAR_6 = FUNC_5(VAR_3, VAR_7, VAR_8);
   break;

  default:
   VAR_6 = VAR_1;
  }

  break;

 default:
  VAR_6 = VAR_1;
 }

 if (VAR_6 == VAR_1)
  VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
