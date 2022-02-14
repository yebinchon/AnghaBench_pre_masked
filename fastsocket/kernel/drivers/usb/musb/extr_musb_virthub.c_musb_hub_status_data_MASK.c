
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct musb {int port1_status; } ;


 struct musb* FUNC_0 (struct usb_hcd*) ;

int FUNC_1(struct usb_hcd *VAR_0, char *VAR_1)
{
 struct musb *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;


 if (VAR_2->port1_status & 0xffff0000) {
  *VAR_1 = 0x02;
  VAR_3 = 1;
 }
 return VAR_3;
}
