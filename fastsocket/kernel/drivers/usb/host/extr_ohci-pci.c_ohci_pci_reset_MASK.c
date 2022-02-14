
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dummy; } ;
struct ohci_hcd {int dummy; } ;


 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*) ;
 int FUNC_2 (struct ohci_hcd*) ;
 int VAR_0 ;
 struct pci_device_id* FUNC_3 (int ,struct pci_dev*) ;
 struct pci_dev* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5 (struct usb_hcd *VAR_1)
{
 struct ohci_hcd *VAR_2 = FUNC_0 (VAR_1);
 int VAR_3 = 0;

 if (VAR_1->self.controller) {
  struct pci_dev *VAR_4 = FUNC_4(VAR_1->self.controller);
  const struct pci_device_id *VAR_5;

  VAR_5 = FUNC_3(VAR_0, VAR_4);
  if (VAR_5 != ((void*)0)) {
   int (*VAR_6)(struct usb_hcd *VAR_7);
   VAR_6 = (void *)VAR_5->driver_data;
   VAR_3 = VAR_6(VAR_1);
  }
 }
 if (VAR_3 == 0) {
  FUNC_1 (VAR_2);
  return FUNC_2 (VAR_2);
 }
 return VAR_3;
}
