
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct urb {int dev; } ;
struct TYPE_2__ {int (* urb_dequeue ) (struct usb_hcd*,struct urb*,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct usb_hcd*,struct urb*,int) ;
 int FUNC_2 (struct usb_hcd*,struct urb*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_0, struct urb *VAR_1, int VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_1->dev))
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 else {




  VAR_3 = VAR_0->driver->urb_dequeue(VAR_0, VAR_1, VAR_2);
 }
 return VAR_3;
}
