
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_driver {int id_table; } ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;


 int FUNC_0 (char*) ;
 struct usb_device_id* FUNC_1 (struct usb_interface*,struct usb_serial_driver*) ;
 struct usb_device_id* FUNC_2 (struct usb_interface*,int ) ;

__attribute__((used)) static const struct usb_device_id *FUNC_3(struct usb_serial_driver *VAR_0,
      struct usb_interface *VAR_1)
{
 const struct usb_device_id *VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0->id_table);
 if (VAR_2) {
  FUNC_0("static descriptor matches");
  goto exit;
 }
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_0("dynamic descriptor matches");
exit:
 return VAR_2;
}
