
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ia64_rr {unsigned long val; } ;
struct exit_ctl_data {int exit_reason; } ;
struct TYPE_2__ {unsigned long* vrr; unsigned long vmm_rr; unsigned long metaphysical_saved_rr4; unsigned long metaphysical_saved_rr0; struct exit_ctl_data exit_data; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;



 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 unsigned long FUNC_6 (unsigned long) ;

unsigned long FUNC_7(struct kvm_vcpu *VAR_3, unsigned long VAR_4,
     unsigned long VAR_5)
{
 union ia64_rr VAR_6, VAR_7;
 unsigned long VAR_8;
 struct exit_ctl_data *VAR_9 = &VAR_3->arch.exit_data;
 unsigned long VAR_10;

 VAR_6.val = FUNC_4(VAR_3, VAR_4);
 VAR_7.val = VAR_5;
 VAR_3->arch.vrr[VAR_4 >> VAR_2] = VAR_5;

 switch ((unsigned long)(VAR_4 >> VAR_2)) {
 case 128:
  VAR_3->arch.vmm_rr = FUNC_6(VAR_5);
  FUNC_3(VAR_10);
  VAR_9->exit_reason = VAR_0;
  FUNC_5(VAR_3);
  FUNC_2(VAR_10);
  break;
 case 129:
  VAR_8 = FUNC_6(VAR_5);
  VAR_3->arch.metaphysical_saved_rr4 = VAR_8;
  if (!FUNC_1(VAR_3))
   FUNC_0(VAR_4, VAR_8);
  break;
 case 130:
  VAR_8 = FUNC_6(VAR_5);
  VAR_3->arch.metaphysical_saved_rr0 = VAR_8;
  if (!FUNC_1(VAR_3))
   FUNC_0(VAR_4, VAR_8);
  break;
 default:
  FUNC_0(VAR_4, FUNC_6(VAR_5));
  break;
 }

 return (VAR_1);
}
