
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int driver_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_interface*,int *) ;

__attribute__((used)) static int FUNC_1(struct usb_interface *VAR_2,
      const struct usb_device_id *VAR_3)
{
 if (VAR_3->driver_info == 5592)
  return FUNC_0(VAR_2, &VAR_1);

 return FUNC_0(VAR_2, &VAR_0);
}
