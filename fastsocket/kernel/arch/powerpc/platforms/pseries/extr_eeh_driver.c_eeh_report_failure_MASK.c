
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; } ;
struct pci_dev {int error_state; struct pci_driver* driver; } ;
struct TYPE_2__ {int (* error_detected ) (struct pci_dev*,int ) ;} ;


 int FUNC_0 (struct pci_dev*) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, void *VAR_2)
{
 struct pci_driver *VAR_3 = VAR_1->driver;

 VAR_1->error_state = VAR_0;

 if (!VAR_3)
  return 0;

 FUNC_0(VAR_1);

 if (!VAR_3->err_handler ||
     !VAR_3->err_handler->error_detected)
  return 0;

 VAR_3->err_handler->error_detected(VAR_1, VAR_0);

 return 0;
}
