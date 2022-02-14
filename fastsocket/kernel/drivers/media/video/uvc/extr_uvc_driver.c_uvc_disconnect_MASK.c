
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_device {int state; } ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct TYPE_3__ {scalar_t__ bInterfaceSubClass; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct uvc_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_interface*,int *) ;
 int FUNC_2 (struct uvc_device*) ;

__attribute__((used)) static void FUNC_3(struct usb_interface *VAR_2)
{
 struct uvc_device *VAR_3 = FUNC_0(VAR_2);




 FUNC_1(VAR_2, ((void*)0));

 if (VAR_2->cur_altsetting->desc.bInterfaceSubClass ==
     VAR_1)
  return;

 VAR_3->state |= VAR_0;

 FUNC_2(VAR_3);
}
