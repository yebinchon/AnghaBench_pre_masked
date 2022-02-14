
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_3__* run; TYPE_2__ arch; } ;
struct TYPE_9__ {int addr; int mask; } ;
typedef TYPE_4__ psw_t ;
struct TYPE_8__ {int psw_addr; int psw_mask; } ;
struct TYPE_6__ {int cpuflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2, psw_t VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(VAR_2);
 if (FUNC_0(&VAR_2->arch.sie_block->cpuflags) & VAR_0)
  VAR_4 = -VAR_1;
 else {
  VAR_2->run->psw_mask = VAR_3.mask;
  VAR_2->run->psw_addr = VAR_3.addr;
 }
 FUNC_2(VAR_2);
 return VAR_4;
}
