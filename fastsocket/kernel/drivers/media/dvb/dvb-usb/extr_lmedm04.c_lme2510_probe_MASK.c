
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {scalar_t__ speed; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct usb_interface*,int *,int ,int *,int ) ;
 int FUNC_1 (char*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_6,
  const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = 0;

 FUNC_4(VAR_8);

 FUNC_6(VAR_8, VAR_6->cur_altsetting->desc.bInterfaceNumber, 1);

 if (VAR_8->speed != VAR_2) {
  VAR_9 = FUNC_5(VAR_8);
  FUNC_1("DEV Failed to connect in HIGH SPEED mode");
  return -VAR_0;
 }

 FUNC_3(VAR_8, 0);

 if (0 == FUNC_0(VAR_6, &VAR_4,
         VAR_1, ((void*)0), VAR_3)) {
  FUNC_1("DEV registering device driver");
  return 0;
 }
 if (0 == FUNC_0(VAR_6, &VAR_5,
         VAR_1, ((void*)0), VAR_3)) {
  FUNC_1("DEV registering device driver");
  return 0;
 }

 FUNC_1("DEV lme2510 Error");
 return -VAR_0;

}
