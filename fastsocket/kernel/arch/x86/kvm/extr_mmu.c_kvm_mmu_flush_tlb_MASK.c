
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tlb_flush; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;
struct TYPE_4__ {int (* tlb_flush ) (struct kvm_vcpu*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

void FUNC_1(struct kvm_vcpu *VAR_1)
{
 ++VAR_1->stat.tlb_flush;
 VAR_0->tlb_flush(VAR_1);
}
