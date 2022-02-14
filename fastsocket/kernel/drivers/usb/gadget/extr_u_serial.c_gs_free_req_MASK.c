
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int buf; } ;
struct usb_ep {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_ep*,struct usb_request*) ;

void FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 FUNC_0(VAR_1->buf);
 FUNC_1(VAR_0, VAR_1);
}
