
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int irq; int dma; } ;
typedef TYPE_1__ Adapter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(Adapter * VAR_3)
{
 if (FUNC_5(VAR_3) == -1)
  return 0;


 if (FUNC_4(VAR_3->irq, VAR_2, VAR_1, "wd7000", VAR_3)) {
  FUNC_2("wd7000_init: can't get IRQ %d.\n", VAR_3->irq);
  return (0);
 }
 if (FUNC_3(VAR_3->dma, "wd7000")) {
  FUNC_2("wd7000_init: can't get DMA channel %d.\n", VAR_3->dma);
  FUNC_1(VAR_3->irq, VAR_3);
  return (0);
 }
 FUNC_7(VAR_3);
 FUNC_8(VAR_3);

 if (!FUNC_6(VAR_3, VAR_0)) {
  FUNC_0(VAR_3->dma);
  FUNC_1(VAR_3->irq, ((void*)0));
  return (0);
 }

 return (1);
}
