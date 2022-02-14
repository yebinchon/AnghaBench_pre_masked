
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dio_private {struct pci_dev* pcidev; struct pci_dio_private* next; struct pci_dio_private* prev; } ;
struct pci_dev {int dummy; } ;
struct comedi_device {int dummy; } ;
struct comedi_devconfig {int dummy; } ;


 struct pci_dio_private* VAR_0 ;
 struct pci_dio_private* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_2,
        struct comedi_devconfig *VAR_3,
        struct pci_dev *VAR_4)
{
 struct pci_dio_private *VAR_5, *VAR_6;

 for (VAR_5 = VAR_1, VAR_6 = ((void*)0); VAR_5 != ((void*)0); VAR_6 = VAR_5, VAR_5 = VAR_5->next) {
  if (VAR_5->pcidev == VAR_4) {
   return 0;
  }
 }

 if (VAR_6) {
  VAR_0->prev = VAR_6;
  VAR_6->next = VAR_0;
 } else {
  VAR_1 = VAR_0;
 }

 VAR_0->pcidev = VAR_4;

 return 1;
}
