
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msr_val; } ;
struct TYPE_5__ {int nmi_pending; int nmi_injected; int dr7; int dr6; int db; TYPE_1__ st; scalar_t__ switch_db_regs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int (* vcpu_reset ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;

int FUNC_4(struct kvm_vcpu *VAR_3)
{
 VAR_3->arch.nmi_pending = 0;
 VAR_3->arch.nmi_injected = 0;

 VAR_3->arch.switch_db_regs = 0;
 VAR_3->arch.st.msr_val = 0;
 FUNC_2(VAR_3->arch.db, 0, sizeof(VAR_3->arch.db));
 VAR_3->arch.dr6 = VAR_0;
 VAR_3->arch.dr7 = VAR_1;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 return VAR_2->vcpu_reset(VAR_3);
}
