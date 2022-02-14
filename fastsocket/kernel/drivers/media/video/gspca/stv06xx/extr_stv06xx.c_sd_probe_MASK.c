
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_interface*,struct usb_device_id const*,int *,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_3,
   const struct usb_device_id *VAR_4)
{
 FUNC_0(VAR_0, "Probing for a stv06xx device");
 return FUNC_1(VAR_3, VAR_4, &VAR_2, sizeof(struct sd),
          VAR_1);
}
