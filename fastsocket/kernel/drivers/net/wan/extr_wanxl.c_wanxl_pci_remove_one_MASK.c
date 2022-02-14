
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_11__ {int n_ports; int status_address; TYPE_6__* status; scalar_t__ plx; scalar_t__* rx_skbs; int pdev; scalar_t__ irq; TYPE_1__* ports; } ;
typedef TYPE_3__ card_t ;
typedef int card_status_t ;
struct TYPE_12__ {TYPE_2__* rx_descs; } ;
struct TYPE_10__ {int address; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int,TYPE_6__*,int ) ;
 TYPE_3__* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int *) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_3)
{
 card_t *VAR_4 = FUNC_7(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_ports; VAR_5++) {
  FUNC_11(VAR_4->ports[VAR_5].dev);
  FUNC_2(VAR_4->ports[VAR_5].dev);
 }


 if (VAR_4->irq)
  FUNC_1(VAR_4->irq, VAR_4);

 FUNC_12(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (VAR_4->rx_skbs[VAR_5]) {
   FUNC_10(VAR_4->pdev,
      VAR_4->status->rx_descs[VAR_5].address,
      VAR_0, VAR_1);
   FUNC_0(VAR_4->rx_skbs[VAR_5]);
  }

 if (VAR_4->plx)
  FUNC_3(VAR_4->plx);

 if (VAR_4->status)
  FUNC_6(VAR_3, sizeof(card_status_t),
        VAR_4->status, VAR_4->status_address);

 FUNC_8(VAR_3);
 FUNC_5(VAR_3);
 FUNC_9(VAR_3, ((void*)0));
 FUNC_4(VAR_4);
}
