
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_2__* endpoint; } ;
struct gspca_dev {int alt; int iface; int dev; } ;
struct TYPE_3__ {int wMaxPacketSize; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct usb_host_interface* FUNC_2 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 struct usb_host_interface *VAR_2;
 struct usb_interface *VAR_3;

 VAR_3 = FUNC_3(VAR_1->dev, VAR_1->iface);
 VAR_2 = FUNC_2(VAR_3, VAR_1->alt);
 if (!VAR_2) {
  FUNC_0("Couldn't get altsetting");
  return -VAR_0;
 }

 return FUNC_1(VAR_2->endpoint[0].desc.wMaxPacketSize);
}
