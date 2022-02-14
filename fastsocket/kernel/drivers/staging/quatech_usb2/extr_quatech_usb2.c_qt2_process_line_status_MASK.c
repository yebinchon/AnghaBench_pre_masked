
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct quatech2_port {unsigned char shadowLSR; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 struct quatech2_port* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_4,
 unsigned char VAR_5)
{

 struct quatech2_port *VAR_6 = FUNC_0(VAR_4);
 VAR_6->shadowLSR = VAR_5 & (VAR_2 |
  VAR_3 | VAR_1 | VAR_0);
}
