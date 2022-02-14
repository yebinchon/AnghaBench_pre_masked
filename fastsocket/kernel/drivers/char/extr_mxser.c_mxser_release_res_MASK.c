
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mxser_board {int vector; TYPE_2__* info; TYPE_1__* ports; int irq; } ;
struct TYPE_4__ {int nports; } ;
struct TYPE_3__ {int ioaddr; } ;


 int FUNC_0 (int ,struct mxser_board*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct mxser_board *VAR_0, struct pci_dev *VAR_1,
  unsigned int VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_0->irq, VAR_0);
 if (VAR_1 != ((void*)0)) {




 } else {
  FUNC_2(VAR_0->ports[0].ioaddr, 8 * VAR_0->info->nports);
  FUNC_2(VAR_0->vector, 1);
 }
}
