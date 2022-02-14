
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct kvm_vcpu {int dummy; } ;




 int VAR_0 ;
 unsigned long FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,char*) ;

unsigned long FUNC_2(struct kvm_vcpu *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3)
{
 uint64_t VAR_4 = 0;

 VAR_2 &= (VAR_0 - 1);

 switch (VAR_2) {
 case 129:
  if (VAR_3 == 1)
   ;
  else
   FUNC_1(VAR_1, "Undefined read on PIB INTA\n");

  break;
 case 128:
  if (VAR_3 == 1) {
   VAR_4 = FUNC_0(VAR_1);
  } else {
   FUNC_1(VAR_1, "Undefined read on PIB XTP\n");
  }
  break;
 default:
  FUNC_1(VAR_1, "Undefined addr access for lsapic!\n");
  break;
 }
 return VAR_4;
}
