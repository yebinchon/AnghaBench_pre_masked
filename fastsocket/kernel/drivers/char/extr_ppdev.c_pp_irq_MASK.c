
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_struct {int irq_wait; int irqc; scalar_t__ irqresponse; int irqctl; TYPE_1__* pdev; } ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (void *VAR_0)
{
 struct pp_struct *VAR_1 = VAR_0;

 if (VAR_1->irqresponse) {
  FUNC_1 (VAR_1->pdev->port, VAR_1->irqctl);
  VAR_1->irqresponse = 0;
 }

 FUNC_0 (&VAR_1->irqc);
 FUNC_2 (&VAR_1->irq_wait);
}
