
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct sd {TYPE_1__* sensor; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int (* disconnect ) (struct sd*) ;} ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct sd*) ;
 struct gspca_dev* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_3(struct usb_interface *VAR_0)
{
 struct gspca_dev *VAR_1 = FUNC_2(VAR_0);
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_2->sensor->disconnect)
  VAR_2->sensor->disconnect(VAR_2);

 FUNC_0(VAR_0);
}
