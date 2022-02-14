
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_sevsegdev {int textmode; int mode_msb; int mode_lsb; int udev; struct usb_interface* intf; } ;
struct TYPE_3__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_sevsegdev*) ;
 struct usb_sevsegdev* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*,struct usb_sevsegdev*) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_3,
 const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_2(VAR_3);
 struct usb_sevsegdev *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_4(sizeof(struct usb_sevsegdev), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(&VAR_3->dev, "Out of memory\n");
  goto error_mem;
 }

 VAR_6->udev = FUNC_6(VAR_5);
 VAR_6->intf = VAR_3;
 FUNC_8(VAR_3, VAR_6);


 VAR_6->textmode = 0x02;
 VAR_6->mode_msb = 0x06;
 VAR_6->mode_lsb = 0x3f;

 VAR_7 = FUNC_5(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_7)
  goto error;

 FUNC_1(&VAR_3->dev, "USB 7 Segment device now attached\n");
 return 0;

error:
 FUNC_8(VAR_3, ((void*)0));
 FUNC_7(VAR_6->udev);
 FUNC_3(VAR_6);
error_mem:
 return VAR_7;
}
