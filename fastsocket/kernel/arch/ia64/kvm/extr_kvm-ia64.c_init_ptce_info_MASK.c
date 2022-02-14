
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ptce_stride; int * ptce_count; int ptce_base; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_5__ {int * stride; int * count; int base; int member_0; } ;
typedef TYPE_2__ ia64_ptce_info_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{
 ia64_ptce_info_t VAR_1 = {0};

 FUNC_0(&VAR_1);
 VAR_0->arch.ptce_base = VAR_1.base;
 VAR_0->arch.ptce_count[0] = VAR_1.count[0];
 VAR_0->arch.ptce_count[1] = VAR_1.count[1];
 VAR_0->arch.ptce_stride[0] = VAR_1.stride[0];
 VAR_0->arch.ptce_stride[1] = VAR_1.stride[1];
}
