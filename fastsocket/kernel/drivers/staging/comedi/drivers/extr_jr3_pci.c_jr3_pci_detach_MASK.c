
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jr3_pci_dev_private {int n_channels; scalar_t__ pci_dev; scalar_t__ pci_enabled; scalar_t__ iobase; int timer; } ;
struct comedi_device {TYPE_1__* subdevices; int minor; struct jr3_pci_dev_private* private; } ;
struct TYPE_2__ {int private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0)
{
 int VAR_1;
 struct jr3_pci_dev_private *VAR_2 = VAR_0->private;

 FUNC_5("comedi%d: jr3_pci: remove\n", VAR_0->minor);
 if (VAR_2) {
  FUNC_1(&VAR_2->timer);

  if (VAR_0->subdevices) {
   for (VAR_1 = 0; VAR_1 < VAR_2->n_channels; VAR_1++) {
    FUNC_3(VAR_0->subdevices[VAR_1].private);
   }
  }

  if (VAR_2->iobase) {
   FUNC_2((void *)VAR_2->iobase);
  }
  if (VAR_2->pci_enabled) {
   FUNC_0(VAR_2->pci_dev);
  }

  if (VAR_2->pci_dev) {
   FUNC_4(VAR_2->pci_dev);
  }
 }
 return 0;
}
