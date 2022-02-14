
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int * port; } ;
struct quatech2_dev {int current_port; } ;


 struct quatech2_dev* FUNC_0 (struct usb_serial*) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_0,
 unsigned char VAR_1)
{

 struct usb_serial *VAR_2 = VAR_0->serial;

 struct quatech2_dev *VAR_3 = FUNC_0(VAR_2);
 VAR_3->current_port = VAR_2->port[VAR_1];



}
