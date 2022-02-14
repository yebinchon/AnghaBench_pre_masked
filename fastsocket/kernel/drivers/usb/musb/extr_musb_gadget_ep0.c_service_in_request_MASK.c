
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; int bRequest; } ;
struct musb {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct musb*,struct usb_ctrlrequest const*) ;

__attribute__((used)) static int
FUNC_1(struct musb *VAR_2, const struct usb_ctrlrequest *VAR_3)
{
 int VAR_4 = 0;

 if ((VAR_3->bRequestType & VAR_0)
   == VAR_1) {
  switch (VAR_3->bRequest) {
  case 128:
   VAR_4 = FUNC_0(VAR_2,
     VAR_3);
   break;



  default:
   break;
  }
 }
 return VAR_4;
}
