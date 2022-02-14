
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int * pdptrs; int regs_avail; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* cache_reg ) (struct kvm_vcpu*,int ) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (int ,unsigned long*) ;

__attribute__((used)) static inline u64 FUNC_2(struct kvm_vcpu *VAR_2, int VAR_3)
{
 if (!FUNC_1(VAR_0,
        (unsigned long *)&VAR_2->arch.regs_avail))
  VAR_1->cache_reg(VAR_2, VAR_0);

 return VAR_2->arch.pdptrs[VAR_3];
}
