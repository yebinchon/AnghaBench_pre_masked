
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int num_altsetting; } ;
struct TYPE_2__ {int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_device_id {int dummy; } ;
struct dvb_usb_device {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;
 int VAR_3 ;
 struct usb_host_interface* FUNC_2 (struct usb_interface*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_4,
         const struct usb_device_id *VAR_5)
{
 struct dvb_usb_device *VAR_6;
 struct usb_host_interface *VAR_7;
 int VAR_8;

 if (VAR_4->num_altsetting < 2)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_4, &VAR_3, VAR_1, &VAR_6,
      VAR_2);
 if (VAR_8 == 0) {
  VAR_7 = FUNC_2(VAR_4, 0);

  if (VAR_7 == ((void*)0)) {
   FUNC_0("not alt found!\n");
   return -VAR_0;
  }

  VAR_8 = FUNC_3(VAR_6->udev, VAR_7->desc.bInterfaceNumber,
     VAR_7->desc.bAlternateSetting);
 }

 return VAR_8;
}
