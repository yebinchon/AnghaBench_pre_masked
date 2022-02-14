
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbatm_data {struct uea_softc* driver_data; } ;
struct TYPE_2__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;
struct uea_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uea_softc*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct uea_softc*) ;

__attribute__((used)) static void FUNC_3(struct usbatm_data *VAR_1, struct usb_interface *VAR_2)
{
 struct uea_softc *VAR_3 = VAR_1->driver_data;

 FUNC_1(&VAR_2->dev.kobj, &VAR_0);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3);
}
