
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xhci_hcd {int quirks; TYPE_2__* shared_hcd; } ;
struct usb_hcd {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct hc_driver {int dummy; } ;
struct TYPE_9__ {TYPE_1__* root_hub; } ;
struct TYPE_8__ {scalar_t__ hcd_priv; } ;
struct TYPE_7__ {int lpm_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_hcd* FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 struct xhci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_5 (struct hc_driver*,int *,int ,struct usb_hcd*) ;
 int FUNC_6 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 int VAR_6;
 struct xhci_hcd *VAR_7;
 struct hc_driver *VAR_8;
 struct usb_hcd *VAR_9;

 VAR_8 = (struct hc_driver *)VAR_5->driver_data;






 VAR_6 = FUNC_6(VAR_4, VAR_5);

 if (VAR_6)
  return VAR_6;


 VAR_9 = FUNC_0(&VAR_4->dev);
 VAR_7 = FUNC_2(VAR_9);
 VAR_7->shared_hcd = FUNC_5(VAR_8, &VAR_4->dev,
    FUNC_3(VAR_4), VAR_9);
 if (!VAR_7->shared_hcd) {
  VAR_6 = -VAR_0;
  goto dealloc_usb2_hcd;
 }




 *((struct xhci_hcd **) VAR_7->shared_hcd->hcd_priv) = VAR_7;

 VAR_6 = FUNC_4(VAR_7->shared_hcd, VAR_4->irq,
   VAR_1 | VAR_2);
 if (VAR_6)
  goto put_usb3_hcd;





 if (VAR_7->quirks & VAR_3)
  FUNC_1(VAR_7->shared_hcd)->root_hub->lpm_capable = 1;

 return 0;

put_usb3_hcd:
 FUNC_8(VAR_7->shared_hcd);
dealloc_usb2_hcd:
 FUNC_7(VAR_4);
 return VAR_6;
}
