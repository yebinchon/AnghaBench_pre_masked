
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_driver {TYPE_1__* err_handler; } ;
struct pci_dev {int error_state; struct pci_driver* driver; } ;
typedef enum pci_ers_result { ____Placeholder_pci_ers_result } pci_ers_result ;
struct TYPE_2__ {int (* error_detected ) (struct pci_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3, void *VAR_4)
{
 enum pci_ers_result VAR_5, *VAR_6 = VAR_4;
 struct pci_driver *VAR_7 = VAR_3->driver;

 VAR_3->error_state = VAR_2;

 if (!VAR_7)
  return 0;

 FUNC_0(VAR_3);

 if (!VAR_7->err_handler ||
     !VAR_7->err_handler->error_detected)
  return 0;

 VAR_5 = VAR_7->err_handler->error_detected (VAR_3, VAR_2);


 if (VAR_5 == VAR_0) *VAR_6 = VAR_5;
 if (*VAR_6 == VAR_1) *VAR_6 = VAR_5;

 return 0;
}
