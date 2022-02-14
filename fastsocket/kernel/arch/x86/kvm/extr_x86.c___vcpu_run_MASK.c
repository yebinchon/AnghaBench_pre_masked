
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int signal_exits; int request_irq_exits; } ;
struct TYPE_4__ {scalar_t__ mp_state; int sipi_vector; } ;
struct kvm_vcpu {void* srcu_idx; TYPE_3__ stat; TYPE_2__* run; int requests; TYPE_1__ arch; int vcpu_id; struct kvm* kvm; } ;
struct kvm {int srcu; } ;
struct TYPE_5__ {void* exit_reason; } ;


 int VAR_0 ;
 void* VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *,void*) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_16(struct kvm_vcpu *VAR_5)
{
 int VAR_6;
 struct kvm *VAR_7 = VAR_5->kvm;

 if (FUNC_14(VAR_5->arch.mp_state == 128)) {
  FUNC_9("vcpu %d received sipi with vector # %x\n",
    VAR_5->vcpu_id, VAR_5->arch.sipi_vector);
  FUNC_5(VAR_5);
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_5->arch.mp_state = 129;
 }

 VAR_5->srcu_idx = FUNC_11(&VAR_7->srcu);

 VAR_6 = 1;
 while (VAR_6 > 0) {
  if (VAR_5->arch.mp_state == 129)
   VAR_6 = FUNC_15(VAR_5);
  else {
   FUNC_12(&VAR_7->srcu, VAR_5->srcu_idx);
   FUNC_7(VAR_5);
   VAR_5->srcu_idx = FUNC_11(&VAR_7->srcu);
   if (FUNC_13(VAR_3, &VAR_5->requests))
   {
    switch(VAR_5->arch.mp_state) {
    case 130:
     VAR_5->arch.mp_state =
      129;
    case 129:
     break;
    case 128:
    default:
     VAR_6 = -VAR_0;
     break;
    }
   }
  }

  if (VAR_6 <= 0)
   break;

  FUNC_0(VAR_2, &VAR_5->requests);
  if (FUNC_3(VAR_5))
   FUNC_4(VAR_5);

  if (FUNC_1(VAR_5)) {
   VAR_6 = -VAR_0;
   VAR_5->run->exit_reason = VAR_1;
   ++VAR_5->stat.request_irq_exits;
  }
  if (FUNC_10(VAR_4)) {
   VAR_6 = -VAR_0;
   VAR_5->run->exit_reason = VAR_1;
   ++VAR_5->stat.signal_exits;
  }
  if (FUNC_8()) {
   FUNC_12(&VAR_7->srcu, VAR_5->srcu_idx);
   FUNC_6(VAR_5);
   VAR_5->srcu_idx = FUNC_11(&VAR_7->srcu);
  }
 }

 FUNC_12(&VAR_7->srcu, VAR_5->srcu_idx);

 return VAR_6;
}
