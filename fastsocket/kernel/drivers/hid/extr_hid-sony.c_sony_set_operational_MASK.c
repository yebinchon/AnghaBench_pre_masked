
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct hid_device {TYPE_3__ dev; } ;
typedef int __u16 ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 struct usb_interface* FUNC_4 (int ) ;
 int FUNC_5 (struct usb_device*,int ,int ,int,int,int ,char*,int,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_7)
{
 struct usb_interface *VAR_8 = FUNC_4(VAR_7->dev.parent);
 struct usb_device *VAR_9 = FUNC_1(VAR_8);
 __u16 VAR_10 = VAR_8->cur_altsetting->desc.bInterfaceNumber;
 int VAR_11;
 char *VAR_12 = FUNC_3(18, VAR_1);

 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_9, FUNC_6(VAR_9, 0),
     VAR_2,
     VAR_4 | VAR_6 |
     VAR_5,
     (3 << 8) | 0xf2, VAR_10, VAR_12, 17,
     VAR_3);
 if (VAR_11 < 0)
  FUNC_0(&VAR_7->dev, "can't set operational mode\n");

 FUNC_2(VAR_12);

 return VAR_11;
}
