
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_error_handlers {int (* resume ) (struct pci_dev*) ;} ;
struct TYPE_3__ {int sem; } ;
struct pci_dev {TYPE_1__ dev; TYPE_2__* driver; int error_state; } ;
struct TYPE_4__ {struct pci_error_handlers* err_handler; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1, void *VAR_2)
{
 const struct pci_error_handlers *VAR_3;

 FUNC_0(&VAR_1->dev.sem);
 VAR_1->error_state = VAR_0;

 if (!VAR_1->driver ||
  !VAR_1->driver->err_handler ||
  !VAR_1->driver->err_handler->resume)
  goto out;

 VAR_3 = VAR_1->driver->err_handler;
 VAR_3->resume(VAR_1);
out:
 FUNC_2(&VAR_1->dev.sem);
 return 0;
}
