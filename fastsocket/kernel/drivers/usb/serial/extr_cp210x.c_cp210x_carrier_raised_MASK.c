
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_1(struct usb_serial_port *VAR_2)
{
 unsigned int VAR_3;
 FUNC_0(VAR_2, VAR_1, &VAR_3, 1);
 if (VAR_3 & VAR_0)
  return 1;
 return 0;
}
