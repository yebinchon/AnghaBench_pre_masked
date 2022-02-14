
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pio_data; int mce_banks; } ;
struct kvm_vcpu {TYPE_2__ arch; TYPE_1__* kvm; } ;
struct TYPE_3__ {int srcu; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(struct kvm_vcpu *VAR_0)
{
 int VAR_1;

 FUNC_4(VAR_0);
 FUNC_1(VAR_0->arch.mce_banks);
 FUNC_2(VAR_0);
 VAR_1 = FUNC_5(&VAR_0->kvm->srcu);
 FUNC_3(VAR_0);
 FUNC_6(&VAR_0->kvm->srcu, VAR_1);
 FUNC_0((unsigned long)VAR_0->arch.pio_data);
}
