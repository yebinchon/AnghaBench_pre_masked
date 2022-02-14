
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; } ;
struct pci_dev {struct pci_driver* driver; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
struct TYPE_2__ {int (* mmio_enabled ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_2, void *VAR_3)
{
 enum pci_ers_result VAR_4, *VAR_5 = VAR_3;
 struct pci_driver *VAR_6 = VAR_2->driver;

 if (!VAR_6 ||
     !VAR_6->err_handler ||
     !VAR_6->err_handler->mmio_enabled)
  return 0;

 VAR_4 = VAR_6->err_handler->mmio_enabled (VAR_2);


 if (VAR_4 == VAR_0) *VAR_5 = VAR_4;
 if (*VAR_5 == VAR_1) *VAR_5 = VAR_4;

 return 0;
}
