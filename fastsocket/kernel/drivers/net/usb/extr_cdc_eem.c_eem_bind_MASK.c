
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {int hard_header_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ,struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*,int *) ;
 int FUNC_3 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_2, struct usb_interface *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3, ((void*)0));
  FUNC_1(FUNC_0(VAR_3), VAR_3);
  return VAR_4;
 }



 VAR_2->net->hard_header_len += VAR_0 + VAR_1;

 return 0;
}
