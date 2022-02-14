
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct quatech2_port {unsigned char shadowMSR; int wait; } ;


 struct quatech2_port* FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_0,
 unsigned char VAR_1)
{

 struct quatech2_port *VAR_2 = FUNC_0(VAR_0);
 VAR_2->shadowMSR = VAR_1;
 FUNC_1(&VAR_2->wait);




}
