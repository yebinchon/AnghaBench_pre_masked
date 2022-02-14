
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlbe {int dummy; } ;
struct TYPE_2__ {int msr; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tlbe const*) ;
 int FUNC_1 (struct tlbe const*) ;
 int FUNC_2 (struct tlbe const*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static inline int FUNC_4(const struct kvm_vcpu *VAR_2,
   const struct tlbe *VAR_3)
{
 gpa_t VAR_4;

 if (!FUNC_2(VAR_3))
  return 0;



 if (FUNC_1(VAR_3) != !!(VAR_2->arch.msr & VAR_0))
  return 0;

 VAR_4 = FUNC_0(VAR_3);
 if (!FUNC_3(VAR_2->kvm, VAR_4 >> VAR_1))

  return 0;

 return 1;
}
