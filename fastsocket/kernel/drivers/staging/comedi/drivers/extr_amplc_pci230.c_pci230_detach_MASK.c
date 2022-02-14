
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; scalar_t__ irq; scalar_t__ subdevices; int minor; } ;
struct TYPE_4__ {scalar_t__ pci_dev; } ;
struct TYPE_3__ {scalar_t__ have_dio; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct comedi_device*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2)
{
 FUNC_3("comedi%d: amplc_pci230: remove\n", VAR_2->minor);

 if (VAR_2->subdevices && VAR_1->have_dio)

  FUNC_4(VAR_2, VAR_2->subdevices + 2);

 if (VAR_2->irq)
  FUNC_1(VAR_2->irq, VAR_2);

 if (VAR_0) {
  if (VAR_0->pci_dev) {
   if (VAR_2->iobase) {
    FUNC_0(VAR_0->pci_dev);
   }
   FUNC_2(VAR_0->pci_dev);
  }
 }

 return 0;
}
