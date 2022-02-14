
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pmu {int dummy; } ;
struct kvm_pmc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct kvm_pmc *FUNC_2(struct kvm_pmu *VAR_2, int VAR_3)
{
 if (VAR_3 < VAR_1)
  return FUNC_1(VAR_2, VAR_0 + VAR_3, VAR_0);
 else
  return FUNC_0(VAR_2, VAR_3 - VAR_1);
}
