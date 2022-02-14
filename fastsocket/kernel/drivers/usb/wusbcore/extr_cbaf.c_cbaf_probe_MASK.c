
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct usb_interface {struct device dev; } ;
struct usb_device_id {int dummy; } ;
struct cbaf {int buffer_size; struct cbaf* buffer; int usb_iface; int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cbaf*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct cbaf*) ;
 struct cbaf* FUNC_4 (int,int ) ;
 struct cbaf* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,struct cbaf*) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_3,
        const struct usb_device_id *VAR_4)
{
 struct cbaf *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  goto error_kzalloc;
 VAR_5->buffer = FUNC_4(512, VAR_1);
 if (VAR_5->buffer == ((void*)0))
  goto error_kmalloc_buffer;

 VAR_5->buffer_size = 512;
 VAR_5->usb_dev = FUNC_7(FUNC_2(VAR_3));
 VAR_5->usb_iface = FUNC_8(VAR_3);
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, "This device is not WUSB-CBAF compliant"
   "and is not supported yet.\n");
  goto error_check;
 }

 VAR_7 = FUNC_6(&VAR_6->kobj, &VAR_2);
 if (VAR_7 < 0) {
  FUNC_1(VAR_6, "Can't register sysfs attr group: %d\n", VAR_7);
  goto error_create_group;
 }
 FUNC_9(VAR_3, VAR_5);
 return 0;

error_create_group:
error_check:
 FUNC_3(VAR_5->buffer);
error_kmalloc_buffer:
 FUNC_3(VAR_5);
error_kzalloc:
 return VAR_7;
}
