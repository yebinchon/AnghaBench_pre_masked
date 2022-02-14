
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num; } ;
struct TYPE_3__ {TYPE_2__ vtlb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

void FUNC_1(struct kvm_vcpu *VAR_2)
{
 VAR_2->arch.vtlb.num = VAR_0;
 FUNC_0(&VAR_2->arch.vtlb, VAR_1);
}
