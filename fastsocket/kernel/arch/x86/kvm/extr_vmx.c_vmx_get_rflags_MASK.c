
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {unsigned long save_rflags; scalar_t__ vm86_active; } ;
struct TYPE_4__ {TYPE_1__ rmode; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_2__* FUNC_0 (struct kvm_vcpu*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_2)->rmode.vm86_active) {
  VAR_3 &= VAR_1;
  VAR_4 = FUNC_0(VAR_2)->rmode.save_rflags;
  VAR_3 |= VAR_4 & ~VAR_1;
 }
 return VAR_3;
}
