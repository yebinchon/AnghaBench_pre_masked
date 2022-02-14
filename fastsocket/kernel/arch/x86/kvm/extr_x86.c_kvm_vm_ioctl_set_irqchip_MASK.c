
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_pic_state {int dummy; } ;
struct TYPE_4__ {int ioapic; int pic; } ;
struct kvm_irqchip {int chip_id; TYPE_1__ chip; } ;
struct kvm {int dummy; } ;
struct TYPE_5__ {int lock; int * pics; } ;


 int VAR_0 ;



 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct kvm*,int *) ;
 int FUNC_2 (int *,int *,int) ;
 TYPE_2__* FUNC_3 (struct kvm*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_1, struct kvm_irqchip *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 switch (VAR_2->chip_id) {
 case 129:
  FUNC_4(&FUNC_3(VAR_1)->lock);
  FUNC_2(&FUNC_3(VAR_1)->pics[0],
   &VAR_2->chip.pic,
   sizeof(struct kvm_pic_state));
  FUNC_5(&FUNC_3(VAR_1)->lock);
  break;
 case 128:
  FUNC_4(&FUNC_3(VAR_1)->lock);
  FUNC_2(&FUNC_3(VAR_1)->pics[1],
   &VAR_2->chip.pic,
   sizeof(struct kvm_pic_state));
  FUNC_5(&FUNC_3(VAR_1)->lock);
  break;
 case 130:
  VAR_3 = FUNC_1(VAR_1, &VAR_2->chip.ioapic);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }
 FUNC_0(FUNC_3(VAR_1));
 return VAR_3;
}
