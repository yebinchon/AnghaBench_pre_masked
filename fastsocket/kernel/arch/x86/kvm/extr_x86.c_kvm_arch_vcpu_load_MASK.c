
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tsc_offset_adjustment; int last_host_tsc; int tsc_catchup; } ;
struct kvm_vcpu {int cpu; int requests; TYPE_1__ arch; } ;
typedef int s64 ;
struct TYPE_4__ {int (* vcpu_load ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct kvm_vcpu *VAR_4, int VAR_5)
{
 VAR_3->vcpu_load(VAR_4, VAR_5);


 if (FUNC_8(VAR_4->arch.tsc_offset_adjustment)) {
  FUNC_2(VAR_4, VAR_4->arch.tsc_offset_adjustment);
  VAR_4->arch.tsc_offset_adjustment = 0;
  FUNC_6(VAR_0, &VAR_4->requests);
 }
 if (FUNC_8(VAR_4->cpu != VAR_5) || FUNC_3()) {

  s64 VAR_6 = !VAR_4->arch.last_host_tsc ? 0 :
    FUNC_5() - VAR_4->arch.last_host_tsc;
  if (VAR_6 < 0)
   FUNC_0(!FUNC_3());
  if (FUNC_3()) {
   FUNC_2(VAR_4, -VAR_6);
   VAR_4->arch.tsc_catchup = 1;
  }
  FUNC_6(VAR_1, &VAR_4->requests);
  if (VAR_4->cpu != VAR_5)
   FUNC_4(VAR_4);
  VAR_4->cpu = VAR_5;
 }

 FUNC_1(VAR_4);
 FUNC_6(VAR_2, &VAR_4->requests);
}
