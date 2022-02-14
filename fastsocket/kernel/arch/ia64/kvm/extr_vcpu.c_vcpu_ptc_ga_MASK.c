
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_5__ {void* ps; void* vaddr; int rr; } ;
struct TYPE_6__ {TYPE_2__ ptc_g_data; } ;
struct exit_ctl_data {TYPE_3__ u; int exit_reason; } ;
struct TYPE_4__ {struct exit_ctl_data exit_data; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (long) ;
 int FUNC_2 (struct kvm_vcpu*,void*) ;
 int FUNC_3 (struct kvm_vcpu*,void*,void*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct exit_ctl_data *VAR_4 = &VAR_1->arch.exit_data;
 long VAR_5;
 FUNC_1(VAR_5);
 VAR_4->exit_reason = VAR_0;

 VAR_4->u.ptc_g_data.rr = FUNC_2(VAR_1, VAR_2);
 VAR_4->u.ptc_g_data.vaddr = VAR_2;
 VAR_4->u.ptc_g_data.ps = VAR_3;
 FUNC_4(VAR_1);

 FUNC_3(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_5);
}
