
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct comedi_device {scalar_t__ board_ptr; } ;
struct TYPE_4__ {struct pci_dev* pci_dev; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_dev* FUNC_1 (struct pci_dev*,int*) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct pci_dev *VAR_7;

 VAR_7 = ((void*)0);
 while ((VAR_7 = FUNC_1(VAR_7, &VAR_5)) != ((void*)0)) {
  if ((VAR_3 == 0 && VAR_4 == 0) ||
      (VAR_7->bus->number == VAR_3 &&
       FUNC_0(VAR_7->devfn) == VAR_4)) {
   break;
  }
 }
 VAR_0->pci_dev = VAR_7;

 if (VAR_5 >= 0)
  VAR_2->board_ptr = VAR_1 + VAR_5;

 if (!VAR_0->pci_dev)
  return 0;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 return 1;
}
