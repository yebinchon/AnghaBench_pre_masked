
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int exit_external_interrupt; int exit_external_request; int exit_null; } ;
struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_3__ stat; TYPE_2__ arch; } ;
struct TYPE_4__ {int icptcode; } ;



__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_0)
{
 switch (VAR_0->arch.sie_block->icptcode) {
 case 0x0:
  VAR_0->stat.exit_null++;
  break;
 case 0x10:
  VAR_0->stat.exit_external_request++;
  break;
 case 0x14:
  VAR_0->stat.exit_external_interrupt++;
  break;
 default:
  break;
 }
 return 0;
}
