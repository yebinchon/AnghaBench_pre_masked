
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pvclock_set_guest_stopped_request; int time; int pv_time_enabled; } ;
struct kvm_vcpu {int requests; TYPE_1__ arch; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_3)
{
 if (!VAR_3->arch.pv_time_enabled)
  return -VAR_0;
 VAR_3->arch.pvclock_set_guest_stopped_request = 1;
 FUNC_0(VAR_3->kvm, VAR_3->arch.time >> VAR_2);
 FUNC_1(VAR_1, &VAR_3->requests);
 return 0;
}
