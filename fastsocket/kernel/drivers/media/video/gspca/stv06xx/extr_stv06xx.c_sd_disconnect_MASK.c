
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct sd {TYPE_1__* sensor; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int (* disconnect ) (struct sd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct sd*) ;
 struct gspca_dev* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_1)
{
 struct gspca_dev *VAR_2 = FUNC_3(VAR_1);
 struct sd *VAR_3 = (struct sd *) VAR_2;
 FUNC_0(VAR_0, "Disconnecting the stv06xx device");

 if (VAR_3->sensor->disconnect)
  VAR_3->sensor->disconnect(VAR_3);
 FUNC_1(VAR_1);
}
