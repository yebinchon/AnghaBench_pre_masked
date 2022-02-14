
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {scalar_t__ sysrq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct usb_serial_port *VAR_2)
{
 if (!VAR_2->sysrq) {
  VAR_2->sysrq = VAR_1 + VAR_0*5;
  return 1;
 }
 VAR_2->sysrq = 0;
 return 0;
}
