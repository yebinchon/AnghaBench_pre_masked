
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; int irq; } ;
struct TYPE_4__ {int dev; } ;
struct net2280 {TYPE_2__ gadget; scalar_t__ enabled; scalar_t__ region; scalar_t__ regs; scalar_t__ got_irq; scalar_t__ requests; TYPE_1__* ep; int driver; } ;
struct TYPE_3__ {int td_dma; int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net2280*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct net2280*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct net2280*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct net2280* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int *) ;
 int FUNC_14 (int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_15 (struct pci_dev *VAR_2)
{
 struct net2280 *VAR_3 = FUNC_8 (VAR_2);

 FUNC_0(VAR_3->driver);


 FUNC_6 (VAR_3);
 if (VAR_3->requests) {
  int VAR_4;
  for (VAR_4 = 1; VAR_4 < 5; VAR_4++) {
   if (!VAR_3->ep [VAR_4].dummy)
    continue;
   FUNC_10 (VAR_3->requests, VAR_3->ep [VAR_4].dummy,
     VAR_3->ep [VAR_4].td_dma);
  }
  FUNC_9 (VAR_3->requests);
 }
 if (VAR_3->got_irq)
  FUNC_4 (VAR_2->irq, VAR_3);
 if (VAR_3->regs)
  FUNC_5 (VAR_3->regs);
 if (VAR_3->region)
  FUNC_14 (FUNC_12 (VAR_2, 0),
    FUNC_11 (VAR_2, 0));
 if (VAR_3->enabled)
  FUNC_7 (VAR_2);
 FUNC_3 (&VAR_3->gadget.dev);
 FUNC_2 (&VAR_2->dev, &VAR_0);
 FUNC_13 (VAR_2, ((void*)0));

 FUNC_1 (VAR_3, "unbind\n");

 VAR_1 = ((void*)0);
}
