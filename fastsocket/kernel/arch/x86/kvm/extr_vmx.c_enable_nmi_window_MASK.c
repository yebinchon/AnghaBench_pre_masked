
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4)
{
 u32 VAR_5;

 if (!FUNC_0()) {
  FUNC_1(VAR_4);
  return;
 }

 if (FUNC_2(VAR_2) & VAR_3) {
  FUNC_1(VAR_4);
  return;
 }
 VAR_5 = FUNC_2(VAR_1);
 VAR_5 |= VAR_0;
 FUNC_3(VAR_1, VAR_5);
}
