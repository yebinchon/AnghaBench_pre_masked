
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; } ;
struct pci_dev {int error_state; struct pci_driver* driver; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
struct TYPE_2__ {int (* slot_reset ) (struct pci_dev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*) ;
 int VAR_4 ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_5, void *VAR_6)
{
 enum pci_ers_result VAR_7, *VAR_8 = VAR_6;
 struct pci_driver *VAR_9 = VAR_5->driver;

 if (!VAR_9)
  return 0;

 VAR_5->error_state = VAR_4;

 FUNC_0(VAR_5);

 if (!VAR_9->err_handler ||
     !VAR_9->err_handler->slot_reset)
  return 0;

 VAR_7 = VAR_9->err_handler->slot_reset(VAR_5);
 if ((*VAR_8 == VAR_2) ||
     (*VAR_8 == VAR_3)) *VAR_8 = VAR_7;
 if (*VAR_8 == VAR_0 &&
      VAR_7 == VAR_1) *VAR_8 = VAR_7;

 return 0;
}
