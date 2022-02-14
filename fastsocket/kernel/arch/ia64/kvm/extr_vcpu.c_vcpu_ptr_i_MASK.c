
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* itrs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {scalar_t__ page_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_1, u64 VAR_2, u64 VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 while ((VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_3, VAR_0)) >= 0)
  VAR_1->arch.itrs[VAR_4].page_flags = 0;

 FUNC_1(VAR_1, VAR_5, VAR_3);
}
