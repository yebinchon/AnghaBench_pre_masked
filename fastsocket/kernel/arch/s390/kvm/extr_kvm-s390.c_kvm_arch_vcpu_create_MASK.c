
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


struct TYPE_9__ {int * cpuflags; int wq; TYPE_4__* float_int; int list; int lock; } ;
struct TYPE_12__ {struct kvm_s390_sie_block* sie_block; TYPE_3__ local_int; } ;
struct kvm_vcpu {TYPE_6__ arch; } ;
struct kvm_s390_sie_block {unsigned int icpua; int cpuflags; void* scaol; void* scaoh; } ;
struct TYPE_10__ {int lock; TYPE_3__** local_int; } ;
struct TYPE_11__ {TYPE_4__ float_int; TYPE_2__* sca; } ;
struct kvm {TYPE_5__ arch; } ;
typedef int __u64 ;
typedef void* __u32 ;
struct TYPE_8__ {TYPE_1__* cpu; } ;
struct TYPE_7__ {int sda; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct kvm_vcpu* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*,int,char*,unsigned int,struct kvm_vcpu*,struct kvm_s390_sie_block*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvm*,unsigned int) ;
 struct kvm_vcpu* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct kvm_vcpu *FUNC_12(struct kvm *VAR_2,
          unsigned int VAR_3)
{
 struct kvm_vcpu *VAR_4 = FUNC_8(sizeof(struct kvm_vcpu), VAR_1);
 int VAR_5 = -VAR_0;

 if (!VAR_4)
  goto out_nomem;

 VAR_4->arch.sie_block = (struct kvm_s390_sie_block *)
     FUNC_4(VAR_1);

 if (!VAR_4->arch.sie_block)
  goto out_free_cpu;

 VAR_4->arch.sie_block->icpua = VAR_3;
 FUNC_0(!VAR_2->arch.sca);
 if (!VAR_2->arch.sca->cpu[VAR_3].sda)
  VAR_2->arch.sca->cpu[VAR_3].sda = (__u64) VAR_4->arch.sie_block;
 VAR_4->arch.sie_block->scaoh = (__u32)(((__u64)VAR_2->arch.sca) >> 32);
 VAR_4->arch.sie_block->scaol = (__u32)(__u64)VAR_2->arch.sca;

 FUNC_10(&VAR_4->arch.local_int.lock);
 FUNC_2(&VAR_4->arch.local_int.list);
 VAR_4->arch.local_int.float_int = &VAR_2->arch.float_int;
 FUNC_9(&VAR_2->arch.float_int.lock);
 VAR_2->arch.float_int.local_int[VAR_3] = &VAR_4->arch.local_int;
 FUNC_5(&VAR_4->arch.local_int.wq);
 VAR_4->arch.local_int.cpuflags = &VAR_4->arch.sie_block->cpuflags;
 FUNC_11(&VAR_2->arch.float_int.lock);

 VAR_5 = FUNC_7(VAR_4, VAR_2, VAR_3);
 if (VAR_5)
  goto out_free_cpu;
 FUNC_3(VAR_2, 3, "create cpu %d at %p, sie block at %p", VAR_3, VAR_4,
   VAR_4->arch.sie_block);

 return VAR_4;
out_free_cpu:
 FUNC_6(VAR_4);
out_nomem:
 return FUNC_1(VAR_5);
}
