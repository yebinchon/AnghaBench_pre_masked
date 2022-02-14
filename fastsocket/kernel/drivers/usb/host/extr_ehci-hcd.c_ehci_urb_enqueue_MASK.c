
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb {int transfer_buffer_length; TYPE_1__* dev; int pipe; } ;
struct list_head {int dummy; } ;
struct ehci_hcd {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;



 int VAR_2 ;
 struct ehci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_3 (struct ehci_hcd*,struct urb*,int ) ;
 int FUNC_4 (struct ehci_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_5 (struct ehci_hcd*,struct urb*,int ) ;
 int FUNC_6 (struct ehci_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8 (
 struct usb_hcd *VAR_3,
 struct urb *VAR_4,
 gfp_t VAR_5
) {
 struct ehci_hcd *VAR_6 = FUNC_1 (VAR_3);
 struct list_head VAR_7;

 FUNC_0 (&VAR_7);

 switch (FUNC_7 (VAR_4->pipe)) {
 case 130:



  if (VAR_4->transfer_buffer_length > (16 * 1024))
   return -VAR_0;


 default:
  if (!FUNC_4 (VAR_6, VAR_4, &VAR_7, VAR_5))
   return -VAR_1;
  return FUNC_6(VAR_6, VAR_4, &VAR_7, VAR_5);

 case 129:
  if (!FUNC_4 (VAR_6, VAR_4, &VAR_7, VAR_5))
   return -VAR_1;
  return FUNC_2(VAR_6, VAR_4, &VAR_7, VAR_5);

 case 128:
  if (VAR_4->dev->speed == VAR_2)
   return FUNC_3 (VAR_6, VAR_4, VAR_5);
  else
   return FUNC_5 (VAR_6, VAR_4, VAR_5);
 }
}
