
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; } ;
struct TYPE_2__ {scalar_t__ io_addr; scalar_t__ pci_dev; scalar_t__ phys_addr; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 if (VAR_1->irq)
  FUNC_1(VAR_1->irq, VAR_1);

 if (VAR_0) {
  if (VAR_0->pci_dev) {
   if (VAR_0->phys_addr) {
    FUNC_0(VAR_0->pci_dev);
   }
   FUNC_3(VAR_0->pci_dev);
  }
  if (VAR_0->io_addr)
   FUNC_2(VAR_0->io_addr);
 }


 return 0;
}
