
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;
struct imon_context {scalar_t__ display_type; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct imon_context *VAR_4,
         struct usb_interface *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4->dev, "Registering iMON display with sysfs\n");


 VAR_6 = FUNC_3(&VAR_5->dev.kobj, &VAR_1);
 if (VAR_6)
  FUNC_1(VAR_4->dev, "Could not create display sysfs "
   "entries(%d)", VAR_6);

 if (VAR_4->display_type == VAR_0)
  VAR_6 = FUNC_4(VAR_5, &VAR_2);
 else
  VAR_6 = FUNC_4(VAR_5, &VAR_3);
 if (VAR_6)

  FUNC_2(VAR_4->dev, "could not get a minor number for "
    "display\n");

}
