
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_error_handlers {int (* mmio_enabled ) (struct pci_dev*) ;} ;
struct TYPE_4__ {int sem; } ;
struct pci_dev {TYPE_2__ dev; TYPE_1__* driver; } ;
struct aer_broadcast_data {int result; } ;
typedef int pci_ers_result_t ;
struct TYPE_3__ {struct pci_error_handlers* err_handler; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0, void *VAR_1)
{
 pci_ers_result_t VAR_2;
 const struct pci_error_handlers *VAR_3;
 struct aer_broadcast_data *VAR_4;
 VAR_4 = (struct aer_broadcast_data *) VAR_1;

 FUNC_0(&VAR_0->dev.sem);
 if (!VAR_0->driver ||
  !VAR_0->driver->err_handler ||
  !VAR_0->driver->err_handler->mmio_enabled)
  goto out;

 VAR_3 = VAR_0->driver->err_handler;
 VAR_2 = VAR_3->mmio_enabled(VAR_0);
 VAR_4->result = FUNC_1(VAR_4->result, VAR_2);
out:
 FUNC_3(&VAR_0->dev.sem);
 return 0;
}
