
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhci_hcd {int lock; int seqnum; struct vhci_device* vdev; } ;
struct vhci_device {int rhport; } ;
struct usb_hcd {int uses_new_polling; int state; scalar_t__ power_budget; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct vhci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 TYPE_1__* FUNC_6 (struct vhci_hcd*) ;
 int FUNC_7 (struct vhci_device*) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_3)
{
 struct vhci_hcd *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;
 int VAR_6 = 0;

 FUNC_4("enter vhci_start\n");




 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct vhci_device *VAR_7 = &VAR_4->vdev[VAR_5];
  FUNC_7(VAR_7);
  VAR_7->rhport = VAR_5;
 }

 FUNC_0(&VAR_4->seqnum, 0);
 FUNC_2(&VAR_4->lock);



 VAR_3->power_budget = 0;
 VAR_3->state = VAR_0;
 VAR_3->uses_new_polling = 1;



 VAR_6 = FUNC_3(&FUNC_6(VAR_4)->kobj, &VAR_2);
 if (VAR_6) {
  FUNC_5("create sysfs files\n");
  return VAR_6;
 }

 return 0;
}
