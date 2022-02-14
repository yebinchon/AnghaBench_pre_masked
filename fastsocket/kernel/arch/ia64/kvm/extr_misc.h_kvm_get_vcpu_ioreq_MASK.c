
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_mmio_req {int dummy; } ;
struct TYPE_2__ {struct kvm_mmio_req ioreq; } ;
struct exit_ctl_data {scalar_t__ exit_reason; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 struct exit_ctl_data* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline struct kvm_mmio_req *FUNC_1(struct kvm_vcpu *VAR_1)
{
 struct exit_ctl_data *VAR_2;

 if (VAR_1) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2->exit_reason == VAR_0)
   return &VAR_2->u.ioreq;
 }

 return ((void*)0);
}
