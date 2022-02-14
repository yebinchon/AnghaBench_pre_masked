
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (unsigned long) ;


 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*,char*,...) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long) ;

void FUNC_4(struct kvm_vcpu *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3, unsigned long VAR_4)
{
 VAR_2 &= (VAR_0 - 1);

 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_1, "Undefined write on PIB INTA\n");
  break;
 case 128:
  if (VAR_3 == 1) {
   FUNC_3(VAR_1, VAR_4);
  } else {
   FUNC_1(VAR_1, "Undefined write on PIB XTP\n");
  }
  break;
 default:
  if (FUNC_0(VAR_2)) {

   if (VAR_3 != 8)
    FUNC_1(VAR_1, "Can't LHF write with size %ld!\n",
      VAR_3);
   else
    FUNC_2(VAR_1, VAR_2, VAR_4);
  } else {
   FUNC_1(VAR_1, "IPI-UHF write %lx\n", VAR_2);
  }
  break;
 }
}
