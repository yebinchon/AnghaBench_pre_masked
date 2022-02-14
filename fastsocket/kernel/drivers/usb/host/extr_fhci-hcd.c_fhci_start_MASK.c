
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_hcd {int state; } ;
struct fhci_hcd {TYPE_3__* vroot_hub; int lock; int usb_lld; } ;
struct TYPE_5__ {scalar_t__ wPortChange; scalar_t__ wPortStatus; } ;
struct TYPE_4__ {scalar_t__ wHubChange; scalar_t__ wHubStatus; } ;
struct TYPE_6__ {int dev_num; TYPE_2__ port; TYPE_1__ hub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fhci_hcd*) ;
 int FUNC_1 (struct fhci_hcd*,char*) ;
 int FUNC_2 (struct fhci_hcd*) ;
 int FUNC_3 (struct fhci_hcd*) ;
 int FUNC_4 (struct fhci_hcd*) ;
 int FUNC_5 (struct fhci_hcd*) ;
 struct fhci_hcd* FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_2)
{
 int VAR_3;
 struct fhci_hcd *VAR_4 = FUNC_6(VAR_2);

 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3) {
  FUNC_1(VAR_4, "failed to allocate memory\n");
  goto err;
 }

 VAR_4->usb_lld = FUNC_0(VAR_4);
 if (!VAR_4->usb_lld) {
  FUNC_1(VAR_4, "low level driver config failed\n");
  VAR_3 = -VAR_0;
  goto err;
 }

 VAR_3 = FUNC_5(VAR_4);
 if (VAR_3) {
  FUNC_1(VAR_4, "low level driver initialize failed\n");
  goto err;
 }

 FUNC_7(&VAR_4->lock);


 VAR_4->vroot_hub->dev_num = 1;
 VAR_4->vroot_hub->hub.wHubStatus = 0;
 VAR_4->vroot_hub->hub.wHubChange = 0;
 VAR_4->vroot_hub->port.wPortStatus = 0;
 VAR_4->vroot_hub->port.wPortChange = 0;

 VAR_2->state = VAR_1;
 FUNC_4(VAR_4);
 return 0;
err:
 FUNC_2(VAR_4);
 return VAR_3;
}
