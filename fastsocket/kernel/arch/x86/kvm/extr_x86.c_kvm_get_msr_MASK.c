
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* get_msr ) (struct kvm_vcpu*,int ,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int *) ;

int FUNC_1(struct kvm_vcpu *VAR_1, u32 VAR_2, u64 *VAR_3)
{
 return VAR_0->get_msr(VAR_1, VAR_2, VAR_3);
}
