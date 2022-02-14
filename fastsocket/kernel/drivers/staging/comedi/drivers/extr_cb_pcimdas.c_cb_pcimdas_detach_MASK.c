
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; scalar_t__ minor; } ;
struct TYPE_2__ {scalar_t__ pci_dev; scalar_t__ BADR0; scalar_t__ BADR4; scalar_t__ BADR3; scalar_t__ BADR2; scalar_t__ BADR1; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__,struct comedi_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 FUNC_3("comedi%d: cb_pcimdas: remove\n", VAR_1->minor);
 if (VAR_1->irq)
  FUNC_1(VAR_1->irq, VAR_1);
 if (VAR_0) {
  if (VAR_0->pci_dev) {
   if (VAR_0->BADR0) {
    FUNC_0(VAR_0->pci_dev);
   }
   FUNC_2(VAR_0->pci_dev);
  }
 }

 return 0;
}
