
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_3__* endpoint; } ;
struct TYPE_5__ {int alt; int iface; int dev; } ;
struct sd {TYPE_4__* sensor; TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_8__ {int (* start ) (struct sd*) ;} ;
struct TYPE_6__ {int wMaxPacketSize; } ;
struct TYPE_7__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int ,int) ;
 struct usb_host_interface* FUNC_4 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 struct usb_host_interface *VAR_7;
 struct usb_interface *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_5(VAR_6->gspca_dev.dev, VAR_6->gspca_dev.iface);
 VAR_7 = FUNC_4(VAR_8, VAR_6->gspca_dev.alt);
 if (!VAR_7) {
  FUNC_0(VAR_0, "Couldn't get altsetting");
  return -VAR_2;
 }

 VAR_10 = FUNC_1(VAR_7->endpoint[0].desc.wMaxPacketSize);
 VAR_9 = FUNC_3(VAR_6, VAR_4, VAR_10);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = VAR_6->sensor->start(VAR_6);
 if (VAR_9 < 0)
  goto out;


 VAR_9 = FUNC_3(VAR_6, VAR_3, 1);

out:
 if (VAR_9 < 0)
  FUNC_0(VAR_1, "Starting stream failed");
 else
  FUNC_0(VAR_1, "Started streaming");

 return (VAR_9 < 0) ? VAR_9 : 0;
}
