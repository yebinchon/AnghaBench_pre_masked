
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sie_block; } ;
struct kvm_vcpu {size_t vcpu_id; TYPE_1__ arch; TYPE_5__* kvm; } ;
typedef scalar_t__ __u64 ;
struct TYPE_9__ {TYPE_3__* sca; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct TYPE_8__ {TYPE_2__* cpu; } ;
struct TYPE_7__ {scalar_t__ sda; } ;


 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 () ;

void FUNC_5(struct kvm_vcpu *VAR_0)
{
 FUNC_0(VAR_0, 3, "%s", "free cpu");
 if (VAR_0->kvm->arch.sca->cpu[VAR_0->vcpu_id].sda ==
  (__u64) VAR_0->arch.sie_block)
  VAR_0->kvm->arch.sca->cpu[VAR_0->vcpu_id].sda = 0;
 FUNC_4();
 FUNC_1((unsigned long)(VAR_0->arch.sie_block));
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
