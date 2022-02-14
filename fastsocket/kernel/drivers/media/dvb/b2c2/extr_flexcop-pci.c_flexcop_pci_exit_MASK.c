
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct flexcop_pci {int init_state; TYPE_1__* pdev; int io_mem; } ;
struct TYPE_5__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flexcop_pci*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_5(struct flexcop_pci *VAR_1)
{
 if (VAR_1->init_state & VAR_0) {
  FUNC_0(VAR_1->pdev->irq, VAR_1);
  FUNC_2(VAR_1->pdev, VAR_1->io_mem);
  FUNC_4(VAR_1->pdev, ((void*)0));
  FUNC_3(VAR_1->pdev);
  FUNC_1(VAR_1->pdev);
 }
 VAR_1->init_state &= ~VAR_0;
}
