
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct urb {scalar_t__ actual_length; int transfer_buffer; struct usb_serial_port* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct usb_serial_port*,int ) ;
 int FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_3->context;

 if (VAR_3->actual_length == VAR_2 &&
     FUNC_0(VAR_3->transfer_buffer, VAR_1,
     VAR_2) == 0) {
  FUNC_3(VAR_4);
  FUNC_2(VAR_4, VAR_0);
  return;
 }

 FUNC_1(VAR_3);
}
