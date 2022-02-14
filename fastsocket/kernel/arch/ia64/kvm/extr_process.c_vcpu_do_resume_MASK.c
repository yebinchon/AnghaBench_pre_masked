
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
struct TYPE_6__ {TYPE_2__ pta; int num; } ;
struct TYPE_4__ {TYPE_3__ vhpt; TYPE_3__ vtlb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_4)
{

 VAR_4->arch.vhpt.num = VAR_0;
 FUNC_1(&VAR_4->arch.vhpt, VAR_1);
 VAR_4->arch.vtlb.num = VAR_2;
 FUNC_1(&VAR_4->arch.vtlb, VAR_3);

 FUNC_0(VAR_4->arch.vhpt.pta.val);
}
