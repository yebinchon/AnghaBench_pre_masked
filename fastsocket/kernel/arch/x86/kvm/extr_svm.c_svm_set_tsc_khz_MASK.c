
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct vcpu_svm {int tsc_ratio; } ;
struct TYPE_2__ {scalar_t__ virtual_tsc_khz; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4, u32 VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_3(VAR_4);
 u64 VAR_7;
 u64 VAR_8;


 if (!FUNC_2(VAR_0))
  return;


 if (VAR_5 == 0) {
  VAR_4->arch.virtual_tsc_khz = 0;
  VAR_6->tsc_ratio = VAR_1;
  return;
 }

 VAR_8 = VAR_5;


 VAR_7 = VAR_8 << 32;
 FUNC_1(VAR_7, VAR_3);

 if (VAR_7 == 0 || VAR_7 & VAR_2) {
  FUNC_0(1, "Invalid TSC ratio - virtual-tsc-khz=%u\n",
    VAR_5);
  return;
 }
 VAR_4->arch.virtual_tsc_khz = VAR_5;
 VAR_6->tsc_ratio = VAR_7;
}
