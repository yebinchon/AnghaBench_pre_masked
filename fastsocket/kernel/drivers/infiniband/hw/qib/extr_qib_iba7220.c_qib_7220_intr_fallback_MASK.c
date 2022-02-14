
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qib_devdata {TYPE_2__* pcidev; TYPE_1__* cspec; int msi_lo; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct qib_devdata*) ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_0)
{
 if (!VAR_0->msi_lo)
  return 0;

 FUNC_1(VAR_0->pcidev,
  "MSI interrupt not detected, trying INTx interrupts\n");
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->pcidev);






 VAR_0->cspec->irq = VAR_0->pcidev->irq;
 FUNC_3(VAR_0);
 return 1;
}
