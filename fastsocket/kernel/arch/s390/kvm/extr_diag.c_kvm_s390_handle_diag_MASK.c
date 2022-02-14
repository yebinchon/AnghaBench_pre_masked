
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int ipb; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_1)
{
 int VAR_2 = (VAR_1->arch.sie_block->ipb & 0xfff0000) >> 16;

 switch (VAR_2) {
 case 0x44:
  return FUNC_1(VAR_1);
 case 0x9c:
  return FUNC_2(VAR_1);
 case 0x308:
  return FUNC_0(VAR_1);
 default:
  return -VAR_0;
 }
}
