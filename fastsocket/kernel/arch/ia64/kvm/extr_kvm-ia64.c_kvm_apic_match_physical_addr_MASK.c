
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct kvm_lapic {TYPE_1__* vcpu; } ;
struct TYPE_2__ {scalar_t__ vcpu_id; } ;



int FUNC_0(struct kvm_lapic *VAR_0, u16 VAR_1)
{
 return VAR_0->vcpu->vcpu_id == VAR_1;
}
