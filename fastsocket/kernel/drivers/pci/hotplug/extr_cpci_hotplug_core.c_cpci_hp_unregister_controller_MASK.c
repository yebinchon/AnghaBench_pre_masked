
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpci_hp_controller {int dummy; } ;
struct TYPE_2__ {int dev_id; scalar_t__ irq; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_2 ;

int
FUNC_3(struct cpci_hp_controller *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1) {
  if (!VAR_2)
   FUNC_1();
  if (VAR_1->irq)
   FUNC_2(VAR_1->irq, VAR_1->dev_id);
  VAR_1 = ((void*)0);
  FUNC_0();
 } else
  VAR_4 = -VAR_0;
 return VAR_4;
}
