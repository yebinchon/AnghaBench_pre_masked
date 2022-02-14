
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jme_adapter {TYPE_1__* pdev; TYPE_2__* dev; int flags; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct jme_adapter *VAR_1)
{
 FUNC_1(VAR_1->pdev->irq, VAR_1->dev);
 if (FUNC_3(VAR_0, &VAR_1->flags)) {
  FUNC_2(VAR_1->pdev);
  FUNC_0(VAR_0, &VAR_1->flags);
  VAR_1->dev->irq = VAR_1->pdev->irq;
 }
}
