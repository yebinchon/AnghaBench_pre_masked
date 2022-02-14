
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 struct usb_host_interface* FUNC_2 (struct usb_interface*,int) ;
 int FUNC_3 (struct usb_device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_1(VAR_1);
 struct usb_host_interface *VAR_3;

 if ((VAR_3 = FUNC_2(VAR_1, 1)) == ((void*)0)) {
  FUNC_0("No alt found!\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_2, VAR_3->desc.bInterfaceNumber,
     VAR_3->desc.bAlternateSetting);
}
