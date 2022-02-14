
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {size_t io_gpr; int * gpr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int data; } ;
struct kvm_run {TYPE_2__ dcr; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0,
                                     struct kvm_run *VAR_1)
{
 ulong *VAR_2 = &VAR_0->arch.gpr[VAR_0->arch.io_gpr];
 *VAR_2 = VAR_1->dcr.data;
}
