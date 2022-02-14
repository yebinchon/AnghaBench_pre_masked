
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int invlpg; } ;
struct TYPE_4__ {int (* invlpg ) (struct kvm_vcpu*,int ) ;} ;
struct TYPE_5__ {TYPE_1__ mmu; } ;
struct kvm_vcpu {TYPE_3__ stat; TYPE_2__ arch; } ;
typedef int gva_t ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_0, gva_t VAR_1)
{
 VAR_0->arch.mmu.invlpg(VAR_0, VAR_1);
 FUNC_0(VAR_0);
 ++VAR_0->stat.invlpg;
}
