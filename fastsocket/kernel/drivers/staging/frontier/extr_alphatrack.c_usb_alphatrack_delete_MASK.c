
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_alphatrack {struct usb_alphatrack* interrupt_out_buffer; struct usb_alphatrack* interrupt_in_buffer; struct usb_alphatrack* ring_buffer; int interrupt_out_urb; int interrupt_in_urb; } ;


 int FUNC_0 (struct usb_alphatrack*) ;
 int FUNC_1 (struct usb_alphatrack*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_alphatrack *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->interrupt_in_urb);
 FUNC_2(VAR_0->interrupt_out_urb);
 FUNC_0(VAR_0->ring_buffer);
 FUNC_0(VAR_0->interrupt_in_buffer);
 FUNC_0(VAR_0->interrupt_out_buffer);
 FUNC_0(VAR_0);
}
