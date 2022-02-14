
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_tranzport {struct usb_tranzport* interrupt_out_buffer; struct usb_tranzport* interrupt_in_buffer; struct usb_tranzport* ring_buffer; int interrupt_out_urb; int interrupt_in_urb; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct usb_tranzport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_tranzport*) ;

__attribute__((used)) static void FUNC_4(struct usb_tranzport *VAR_3)
{
 FUNC_3(VAR_3);
 if (VAR_3->intf != ((void*)0)) {
  FUNC_0(&VAR_3->intf->dev, &VAR_1);
  FUNC_0(&VAR_3->intf->dev, &VAR_2);
  FUNC_0(&VAR_3->intf->dev, &VAR_0);
 }


 FUNC_2(VAR_3->interrupt_in_urb);
 FUNC_2(VAR_3->interrupt_out_urb);
 FUNC_1(VAR_3->ring_buffer);
 FUNC_1(VAR_3->interrupt_in_buffer);
 FUNC_1(VAR_3->interrupt_out_buffer);
 FUNC_1(VAR_3);
}
