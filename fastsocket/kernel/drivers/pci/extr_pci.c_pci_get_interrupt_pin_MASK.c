
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int pin; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_dev*,int) ;

int
FUNC_2(struct pci_dev *VAR_0, struct pci_dev **VAR_1)
{
 u8 VAR_2;

 VAR_2 = VAR_0->pin;
 if (!VAR_2)
  return -1;

 while (!FUNC_0(VAR_0->bus)) {
  VAR_2 = FUNC_1(VAR_0, VAR_2);
  VAR_0 = VAR_0->bus->self;
 }
 *VAR_1 = VAR_0;
 return VAR_2;
}
