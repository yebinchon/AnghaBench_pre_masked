
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union ia64_ipi_d {int vector; int dm; } ;
union ia64_ipi_a {int eid; int id; } ;
struct TYPE_11__ {int mp_state; int launched; } ;
struct kvm_vcpu {int wq; TYPE_5__ arch; TYPE_6__* kvm; } ;
struct kvm_run {int dummy; } ;
struct kvm_pt_regs {int r1; int cr_iip; } ;
struct TYPE_7__ {union ia64_ipi_d data; union ia64_ipi_a addr; } ;
struct TYPE_8__ {TYPE_1__ ipi_data; } ;
struct exit_ctl_data {TYPE_2__ u; } ;
struct TYPE_9__ {int boot_gp; int boot_ip; } ;
struct TYPE_10__ {TYPE_3__ rdv_sal_data; } ;
struct TYPE_12__ {TYPE_4__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_run*) ;
 struct exit_ctl_data* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_3 (TYPE_6__*,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int ) ;
 struct kvm_pt_regs* FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_1, struct kvm_run *VAR_2)
{
 struct exit_ctl_data *VAR_3 = FUNC_1(VAR_1);
 struct kvm_vcpu *VAR_4;
 struct kvm_pt_regs *VAR_5;
 union ia64_ipi_a VAR_6 = VAR_3->u.ipi_data.addr;
 union ia64_ipi_d VAR_7 = VAR_3->u.ipi_data.data;

 VAR_4 = FUNC_3(VAR_1->kvm, VAR_6.id, VAR_6.eid);
 if (!VAR_4)
  return FUNC_0(VAR_1, VAR_2);

 if (!VAR_4->arch.launched) {
  VAR_5 = FUNC_5(VAR_4);

  VAR_5->cr_iip = VAR_1->kvm->arch.rdv_sal_data.boot_ip;
  VAR_5->r1 = VAR_1->kvm->arch.rdv_sal_data.boot_gp;

  VAR_4->arch.mp_state = VAR_0;
  if (FUNC_6(&VAR_4->wq))
   FUNC_7(&VAR_4->wq);
 } else {
  FUNC_4(VAR_4, VAR_7.dm, VAR_7.vector);
  if (VAR_4 != VAR_1)
   FUNC_2(VAR_4);
 }

 return 1;
}
