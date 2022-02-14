
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_guest_tsc; int last_host_tsc; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* vcpu_put ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_2)
{
 FUNC_1(VAR_2);
 VAR_2->arch.last_host_tsc = FUNC_2();
 FUNC_0(VAR_2, VAR_0, &VAR_2->arch.last_guest_tsc);
 VAR_1->vcpu_put(VAR_2);
}
