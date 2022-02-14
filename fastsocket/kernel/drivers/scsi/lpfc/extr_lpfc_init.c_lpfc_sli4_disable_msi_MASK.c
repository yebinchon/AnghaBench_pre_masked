
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,struct lpfc_hba*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_0)
{
 FUNC_0(VAR_0->pcidev->irq, VAR_0);
 FUNC_1(VAR_0->pcidev);
 return;
}
