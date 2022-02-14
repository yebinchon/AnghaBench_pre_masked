
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;
struct kvm_interrupt {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2,
        struct kvm_interrupt *VAR_3)
{
 if (VAR_3->irq < 0 || VAR_3->irq >= 256)
  return -VAR_0;
 if (FUNC_0(VAR_2->kvm))
  return -VAR_1;
 FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_3->irq, 0);

 FUNC_3(VAR_2);

 return 0;
}
