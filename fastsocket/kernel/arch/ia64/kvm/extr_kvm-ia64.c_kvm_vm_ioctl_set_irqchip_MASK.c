
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioapic; } ;
struct kvm_irqchip {int chip_id; TYPE_1__ chip; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct kvm*,int *) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_1, struct kvm_irqchip *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 switch (VAR_2->chip_id) {
 case 128:
  VAR_3 = FUNC_0(VAR_1, &VAR_2->chip.ioapic);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }
 return VAR_3;
}
