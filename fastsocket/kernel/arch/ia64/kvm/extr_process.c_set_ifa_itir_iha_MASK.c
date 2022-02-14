
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 long VAR_0 ;
 long FUNC_0 (struct kvm_vcpu*,long) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;

void FUNC_6(struct kvm_vcpu *VAR_1, u64 VAR_2,
  int VAR_3, int VAR_4, int VAR_5)
{
 long VAR_6;
 u64 VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_6);

 if (VAR_6 & VAR_0) {
  if (VAR_3)
   FUNC_2(VAR_1, VAR_2);
  if (VAR_4) {
   VAR_7 = FUNC_1(VAR_1, VAR_2);
   FUNC_4(VAR_1, VAR_7);
  }

  if (VAR_5) {
   VAR_7 = FUNC_5(VAR_1, VAR_2);
   FUNC_3(VAR_1, VAR_7);
  }
 }
}
