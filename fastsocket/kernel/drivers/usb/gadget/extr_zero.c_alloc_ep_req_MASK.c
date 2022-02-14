
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int buf; int length; } ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct usb_request* FUNC_1 (struct usb_ep*,int ) ;
 int FUNC_2 (struct usb_ep*,struct usb_request*) ;

struct usb_request *FUNC_3(struct usb_ep *VAR_2)
{
 struct usb_request *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3) {
  VAR_3->length = VAR_1;
  VAR_3->buf = FUNC_0(VAR_1, VAR_0);
  if (!VAR_3->buf) {
   FUNC_2(VAR_2, VAR_3);
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
