
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usbtest_info {int alt; int ctrl_out; int name; scalar_t__ ep_out; scalar_t__ ep_in; scalar_t__ autoconf; } ;
struct usbtest_dev {scalar_t__ out_iso_pipe; scalar_t__ in_iso_pipe; scalar_t__ out_pipe; scalar_t__ in_pipe; int * buf; struct usb_interface* intf; int lock; struct usbtest_info* info; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {scalar_t__ match_flags; scalar_t__ driver_info; } ;
struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {int speed; TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct usbtest_dev*,char*,int) ;
 int FUNC_1 (int *,char*,scalar_t__,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct usbtest_dev*,struct usb_interface*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usbtest_dev*) ;
 int * FUNC_5 (int ,int ) ;
 struct usbtest_dev* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct usb_device*,scalar_t__) ;
 int FUNC_11 (struct usb_interface*,struct usbtest_dev*) ;
 scalar_t__ FUNC_12 (struct usb_device*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct usb_device*,scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_14 (struct usb_interface *VAR_7, const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9;
 struct usbtest_dev *VAR_10;
 struct usbtest_info *VAR_11;
 char *VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;

 VAR_9 = FUNC_3 (VAR_7);
 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;
 VAR_11 = (struct usbtest_info *) VAR_8->driver_info;
 VAR_10->info = VAR_11;
 FUNC_8(&VAR_10->lock);

 VAR_10->intf = VAR_7;


 if ((VAR_10->buf = FUNC_5 (VAR_3, VAR_2)) == ((void*)0)) {
  FUNC_4 (VAR_10);
  return -VAR_1;
 }





 VAR_12 = VAR_13 = "";
 VAR_14 = VAR_15 = "";
 if (VAR_4 || VAR_9->speed == 128) {
  if (VAR_11->ep_in) {
   VAR_10->in_pipe = FUNC_10 (VAR_9, VAR_11->ep_in);
   VAR_12 = " intr-in";
  }
  if (VAR_11->ep_out) {
   VAR_10->out_pipe = FUNC_13 (VAR_9, VAR_11->ep_out);
   VAR_13 = " intr-out";
  }
 } else {
  if (VAR_11->autoconf) {
   int VAR_16;

   VAR_16 = FUNC_2 (VAR_10, VAR_7);
   if (VAR_16 < 0) {
    FUNC_0(VAR_10, "couldn't get endpoints, %d\n",
      VAR_16);
    return VAR_16;
   }

  } else {
   if (VAR_11->ep_in)
    VAR_10->in_pipe = FUNC_9 (VAR_9,
       VAR_11->ep_in);
   if (VAR_11->ep_out)
    VAR_10->out_pipe = FUNC_12 (VAR_9,
       VAR_11->ep_out);
  }
  if (VAR_10->in_pipe)
   VAR_12 = " bulk-in";
  if (VAR_10->out_pipe)
   VAR_13 = " bulk-out";
  if (VAR_10->in_iso_pipe)
   VAR_14 = " iso-in";
  if (VAR_10->out_iso_pipe)
   VAR_15 = " iso-out";
 }

 FUNC_11 (VAR_7, VAR_10);
 FUNC_1 (&VAR_7->dev, "%s\n", VAR_11->name);
 FUNC_1 (&VAR_7->dev, "%s speed {control%s%s%s%s%s} tests%s\n",
   ({ char *VAR_17;
   switch (VAR_9->speed) {
   case 128: VAR_17 = "low"; break;
   case 130: VAR_17 = "full"; break;
   case 129: VAR_17 = "high"; break;
   default: VAR_17 = "unknown"; break;
   }; VAR_17; }),
   VAR_11->ctrl_out ? " in/out" : "",
   VAR_12, VAR_13,
   VAR_14, VAR_15,
   VAR_11->alt >= 0 ? " (+alt)" : "");
 return 0;
}
