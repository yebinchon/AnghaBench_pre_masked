
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {int * filter_event; int * filter_cmd; int reset; int cmd; int stop; int start; int owner; } ;
struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct usb_device_id {int driver_info; } ;
struct hwarc {int usb_dev; struct uwb_rc* uwb_rc; int usb_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (struct uwb_rc*) ;
 int FUNC_2 (struct hwarc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct usb_interface*) ;
 struct hwarc* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,struct hwarc*) ;
 int FUNC_10 (struct uwb_rc*,struct device*,struct hwarc*) ;
 struct uwb_rc* FUNC_11 () ;
 int FUNC_12 (struct uwb_rc*) ;
 int FUNC_13 (struct uwb_rc*) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_10,
         const struct usb_device_id *VAR_11)
{
 int VAR_12;
 struct uwb_rc *VAR_13;
 struct hwarc *VAR_14;
 struct device *VAR_15 = &VAR_10->dev;

 VAR_12 = -VAR_0;
 VAR_13 = FUNC_11();
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_15, "unable to allocate RC instance\n");
  goto error_rc_alloc;
 }
 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_1);
 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_15, "unable to allocate HWA RC instance\n");
  goto error_alloc;
 }
 FUNC_2(VAR_14);
 VAR_14->usb_dev = FUNC_5(FUNC_3(VAR_10));
 VAR_14->usb_iface = FUNC_6(VAR_10);
 VAR_14->uwb_rc = VAR_13;

 VAR_13->owner = VAR_2;
 VAR_13->start = VAR_7;
 VAR_13->stop = VAR_8;
 VAR_13->cmd = VAR_4;
 VAR_13->reset = VAR_9;
 if (VAR_11->driver_info & VAR_3) {
  VAR_13->filter_cmd = ((void*)0);
  VAR_13->filter_event = ((void*)0);
 } else {
  VAR_13->filter_cmd = VAR_5;
  VAR_13->filter_event = VAR_6;
 }

 VAR_12 = FUNC_10(VAR_13, VAR_15, VAR_14);
 if (VAR_12 < 0)
  goto error_rc_add;
 VAR_12 = FUNC_1(VAR_13);
 if (VAR_12 < 0) {
  FUNC_0(VAR_15, "cannot retrieve version of RC \n");
  goto error_get_version;
 }
 FUNC_9(VAR_10, VAR_14);
 return 0;

error_get_version:
 FUNC_13(VAR_13);
error_rc_add:
 FUNC_8(VAR_10);
 FUNC_7(VAR_14->usb_dev);
error_alloc:
 FUNC_12(VAR_13);
error_rc_alloc:
 return VAR_12;
}
