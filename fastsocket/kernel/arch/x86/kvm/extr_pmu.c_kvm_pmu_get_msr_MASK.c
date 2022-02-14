
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvm_pmu {int global_ovf_ctrl; int global_ctrl; int global_status; int fixed_ctr_ctrl; } ;
struct TYPE_2__ {struct kvm_pmu pmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_pmc {int eventsel; } ;






 int VAR_0 ;
 int VAR_1 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,int,int ) ;
 int FUNC_2 (struct kvm_pmc*) ;

int FUNC_3(struct kvm_vcpu *VAR_2, u32 VAR_3, u64 *VAR_4)
{
 struct kvm_pmu *VAR_5 = &VAR_2->arch.pmu;
 struct kvm_pmc *VAR_6;

 switch (VAR_3) {
 case 131:
  *VAR_4 = VAR_5->fixed_ctr_ctrl;
  return 0;
 case 128:
  *VAR_4 = VAR_5->global_status;
  return 0;
 case 130:
  *VAR_4 = VAR_5->global_ctrl;
  return 0;
 case 129:
  *VAR_4 = VAR_5->global_ovf_ctrl;
  return 0;
 default:
  if ((VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_0)) ||
    (VAR_6 = FUNC_0(VAR_5, VAR_3))) {
   *VAR_4 = FUNC_2(VAR_6);
   return 0;
  } else if ((VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_1))) {
   *VAR_4 = VAR_6->eventsel;
   return 0;
  }
 }
 return 1;
}
