
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ subdevices; scalar_t__ iobase; int minor; } ;
struct TYPE_2__ {scalar_t__ pci_dev; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct comedi_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 FUNC_2("comedi%d: pci7432: remove\n", VAR_1->minor);

 if (VAR_0 && VAR_0->pci_dev) {
  if (VAR_1->iobase) {
   FUNC_0(VAR_0->pci_dev);
  }
  FUNC_1(VAR_0->pci_dev);
 }

 if (VAR_1->subdevices) {
  FUNC_3(VAR_1, VAR_1->subdevices + 0);
  FUNC_3(VAR_1, VAR_1->subdevices + 1);
  FUNC_3(VAR_1, VAR_1->subdevices + 2);
  FUNC_3(VAR_1, VAR_1->subdevices + 3);

 }

 return 0;
}
