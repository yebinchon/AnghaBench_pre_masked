
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int action_bits; int lock; } ;
struct TYPE_10__ {TYPE_4__ local_int; TYPE_2__* sie_block; } ;
struct TYPE_6__ {int exit_stop_request; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_3__* run; TYPE_1__ stat; } ;
struct TYPE_8__ {int exit_reason; } ;
struct TYPE_7__ {int cpuflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_8)
{
 int VAR_9 = 0;

 VAR_8->stat.exit_stop_request++;
 FUNC_2(VAR_3, &VAR_8->arch.sie_block->cpuflags);
 FUNC_3(&VAR_8->arch.local_int.lock);
 if (VAR_8->arch.local_int.action_bits & VAR_2) {
  VAR_8->arch.local_int.action_bits &= ~VAR_2;
  VAR_9 = FUNC_1(VAR_8,
        VAR_6);
  if (VAR_9 >= 0)
   VAR_9 = -VAR_4;
 }

 if (VAR_8->arch.local_int.action_bits & VAR_0) {
  VAR_8->arch.local_int.action_bits &= ~VAR_0;
  VAR_9 = VAR_7;
  VAR_8->run->exit_reason = VAR_5;
 }

 if (VAR_8->arch.local_int.action_bits & VAR_1) {
  VAR_8->arch.local_int.action_bits &= ~VAR_1;
  FUNC_0(VAR_8, 3, "%s", "cpu stopped");
  VAR_9 = -VAR_4;
 }

 FUNC_4(&VAR_8->arch.local_int.lock);
 return VAR_9;
}
