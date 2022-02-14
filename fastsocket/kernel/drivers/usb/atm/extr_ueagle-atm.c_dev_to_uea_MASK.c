
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {struct uea_softc* driver_data; } ;
struct usb_interface {int dummy; } ;
struct uea_softc {int dummy; } ;
struct device {int dummy; } ;


 struct usb_interface* FUNC_0 (struct device*) ;
 struct usbatm_data* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static struct uea_softc *FUNC_2(struct device *VAR_0)
{
 struct usb_interface *VAR_1;
 struct usbatm_data *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2->driver_data;
}
