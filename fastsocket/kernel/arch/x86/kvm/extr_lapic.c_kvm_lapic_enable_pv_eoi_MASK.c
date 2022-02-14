
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int msr_val; int data; } ;
struct TYPE_4__ {TYPE_1__ pv_eoi; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_2 & ~VAR_0;
 if (!FUNC_0(VAR_3, 4))
  return 1;

 VAR_1->arch.pv_eoi.msr_val = VAR_2;
 if (!FUNC_2(VAR_1))
  return 0;
 return FUNC_1(VAR_1->kvm, &VAR_1->arch.pv_eoi.data,
      VAR_3);
}
