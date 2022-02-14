
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_hcd {struct vhci_device* vdev; } ;
struct vhci_device {int ud; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (struct vhci_hcd*) ;

__attribute__((used)) static void FUNC_7(struct usb_hcd *VAR_3)
{
 struct vhci_hcd *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = 0;

 FUNC_2("stop VHCI controller\n");



 FUNC_1(&FUNC_6(VAR_4)->kobj, &VAR_2);


 for (VAR_5 = 0 ; VAR_5 < VAR_1; VAR_5++) {
  struct vhci_device *VAR_6 = &VAR_4->vdev[VAR_5];

  FUNC_3(&VAR_6->ud, VAR_0);
  FUNC_4(&VAR_6->ud);
 }


 FUNC_5("vhci_stop done\n");
}
