
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pmu {int fixed_ctr_ctrl; } ;
struct kvm_pmc {int eventsel; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,int) ;
 scalar_t__ FUNC_2 (struct kvm_pmc*) ;
 int FUNC_3 (struct kvm_pmc*,int ,int) ;
 int FUNC_4 (struct kvm_pmc*,int ) ;

__attribute__((used)) static void FUNC_5(struct kvm_pmu *VAR_1, int VAR_2)
{
 struct kvm_pmc *VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_3)
  return;

 if (FUNC_2(VAR_3))
  FUNC_4(VAR_3, VAR_3->eventsel);
 else {
  int VAR_4 = VAR_2 - VAR_0;
  FUNC_3(VAR_3,
    FUNC_0(VAR_1->fixed_ctr_ctrl, VAR_4), VAR_4);
 }
}
