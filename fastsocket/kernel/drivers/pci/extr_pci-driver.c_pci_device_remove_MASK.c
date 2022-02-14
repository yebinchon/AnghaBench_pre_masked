
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_driver {int (* remove ) (struct pci_dev*) ;} ;
struct pci_dev {scalar_t__ current_state; struct pci_driver* driver; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device * VAR_2)
{
 struct pci_dev * VAR_3 = FUNC_2(VAR_2);
 struct pci_driver * VAR_4 = VAR_3->driver;

 if (VAR_4) {
  if (VAR_4->remove)
   VAR_4->remove(VAR_3);
  VAR_3->driver = ((void*)0);
 }





 if (VAR_3->current_state == VAR_0)
  VAR_3->current_state = VAR_1;
 FUNC_0(VAR_3);
 return 0;
}
