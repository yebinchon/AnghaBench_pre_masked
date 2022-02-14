
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {scalar_t__ num_altsetting; } ;
struct TYPE_2__ {int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_device_id {int dummy; } ;
struct dvb_usb_device {int * adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct usb_interface*) ;
 struct usb_host_interface* FUNC_4 (struct usb_interface*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_6,
         const struct usb_device_id *VAR_7)
{
 struct dvb_usb_device *VAR_8;
 struct usb_host_interface *VAR_9;
 int VAR_10;

 if (VAR_6->num_altsetting < VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_6, VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_0("not alt found!\n");
  return -VAR_0;
 }
 VAR_10 = FUNC_5(FUNC_3(VAR_6),
    VAR_9->desc.bInterfaceNumber,
    VAR_9->desc.bAlternateSetting);
 if (VAR_10 != 0) {
  FUNC_0("failed to set alt-setting!\n");
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_6, &VAR_5,
      VAR_3, &VAR_8, VAR_4);
 if (VAR_10 == 0)
  FUNC_2(&VAR_8->adapter[0], 1);

 return VAR_10;
}
