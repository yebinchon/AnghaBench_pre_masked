
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vpd; int host; int guest; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct kvm_vcpu *VAR_2)
{
 FUNC_0(VAR_1, (unsigned long)VAR_2->arch.vpd,
   1, 0, 0, 0, 0, 0);
 FUNC_2(&VAR_2->arch.guest, &VAR_2->arch.host);
 FUNC_0(VAR_0, (unsigned long)VAR_2->arch.vpd,
      1, 0, 0, 0, 0, 0);
 FUNC_1(VAR_2);
}
